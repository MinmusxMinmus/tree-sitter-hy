# Hash-Based Identifier Storage Fix

## Problem

When editing files containing bracket strings, Neovim (and potentially other editors) would crash if an opening bracket `[` in a bracket string was deleted, causing the parser to treat a large amount of text as the bracket string identifier.

### Example that would crash:

```hy
#[[]]
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
#[[]]
```

Deleting either of the first two `[` characters would cause a crash because the parser would try to store over 1024 bytes of identifier data.

## Root Cause

The external scanner's serialization function was storing full bracket string identifiers in a fixed-size buffer (1024 bytes provided by tree-sitter). When an opening bracket was deleted, the parser would treat everything until the next `[` as the identifier, which could easily exceed 1024 bytes, causing a buffer overflow and crash.

## Solution

Replaced full identifier storage with hash-based storage using the FNV-1a hash algorithm:

1. **Store hashes instead of full identifiers**: Each identifier is hashed to a 64-bit value
2. **Compact serialization**: Each entry is only 9 bytes (8 bytes for hash + 1 byte for is_fstring flag)
3. **Large capacity**: The 1024-byte buffer can now store ~113 nested bracket strings
4. **Efficient matching**: When parsing ending identifiers, we compute the hash and compare it to the stored hash

### Benefits:
- **No more buffer overflows**: Even extremely long identifiers (>1024 bytes) are reduced to 8-byte hashes
- **Better scalability**: Can handle many more nested bracket strings
- **Same functionality**: Hash collisions are extremely rare with FNV-1a on 64-bit hashes

## Technical Details

### Hash Function
We use FNV-1a (Fowler-Noll-Vo) hash:
```c
uint64_t hash = 14695981039346656037ULL; // FNV offset basis
for each character c:
    hash ^= c
    hash *= 1099511628211ULL; // FNV prime
```

### Serialization Format
```
[uint32_t: num_hashes]
For each hash:
  [uint64_t: hash_value]
  [uint8_t: is_fstring_flag]
```

### Storage Efficiency
- Old approach: Variable size, could easily exceed 1024 bytes
- New approach: 4 + (9 × num_identifiers) bytes
- Maximum nested bracket strings: ~113 (vs. highly variable before)

## Testing

A test case has been added in `test/corpus/bracket_string_edge_cases.txt` to ensure this scenario is handled correctly.

## Files Modified

- `src/scanner.c`: Replaced full identifier storage with hash-based storage
- `test/corpus/bracket_string_edge_cases.txt`: Added test case for large separations between bracket strings

## Impact

This fix prevents crashes in Neovim and other editors when editing Hy files with bracket strings, particularly when:
- Edits cause the parser to treat large amounts of text as identifiers
- Multiple bracket strings are present in a file
- There's significant content between bracket strings
- Edits are made to the opening brackets of bracket strings

The hash-based approach is more robust and scalable than the previous full-identifier storage approach.
