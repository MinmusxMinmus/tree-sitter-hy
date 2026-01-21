# Buffer Overflow Fix in External Scanner Serialization

## Problem

When editing files containing bracket strings with more than 1024 bytes between them, Neovim (and potentially other editors) would crash if an opening bracket `[` in the first bracket string was deleted.

### Example that would crash:

```hy
#[[]]
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
#[[]]
```

Deleting either of the first two `[` characters would cause a crash.

## Root Cause

The external scanner's `tree_sitter_hy_external_scanner_serialize()` function was writing to a fixed-size buffer (typically 1024 bytes provided by tree-sitter) without checking if it would exceed the buffer size. This caused a buffer overflow, leading to undefined behavior and crashes.

## Solution

Added bounds checking to the serialization function:

1. **Before writing each piece of data**, we now check if there's enough space in the buffer
2. **If we run out of space**, we gracefully truncate by:
   - Updating the identifier count to reflect only what was actually written
   - Updating the character count for partially written identifiers
   - Returning the actual number of bytes written

This ensures we never write beyond the buffer boundary, preventing crashes while maintaining parser functionality.

## Technical Details

The serialization format is:
```
[uint32_t: num_identifiers]
For each identifier:
  [uint32_t: identifier_length]
  [int32_t: char1]
  [int32_t: char2]
  ...
```

With bounds checking, if we run out of space:
- We update `num_identifiers` at buffer[0] to reflect how many we actually wrote
- We update the last identifier's length to reflect how many characters we actually wrote
- The deserialization function will correctly read only what was written

## Testing

A test case has been added in `test/corpus/bracket_string_edge_cases.txt` to ensure this scenario is handled correctly.

## Files Modified

- `src/scanner.c`: Added bounds checking to `tree_sitter_hy_external_scanner_serialize()`
- `test/corpus/bracket_string_edge_cases.txt`: Added test case for large separations between bracket strings

## Impact

This fix prevents crashes in Neovim and other editors when editing Hy files with bracket strings, particularly when:
- Multiple bracket strings are present in a file
- There's significant content (>1024 bytes) between bracket strings
- Edits are made to the opening brackets of bracket strings
