/**
 * @file Hy grammar for tree-sitter
 * @author MinmusxMinmus <git.1khdc@simplelogin.com>
 * @license GPL3
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const number = {
    sign: /[+-]?[,_]*/,
    separator: /[,_]/,
    decimal_digit: /[0-9]/,
    binary_radix: /0[,_]*[bB][,_]*/,
    binary_digit: /[01]/,
    hexadecimal_radix: /0[,_]*[xX][,_]*/,
    hexadecimal_digit: /[0-9a-fA-F]/,
    octal_radix: /0[,_]*[oO][,_]*/,
    octal_digit: /[0-7]/,
    nan: 'NaN',
    infinity: 'Inf',
}

const rx = {
    shebang: /#![^\n]*/,
    comment: /;[^\n]*/,

    // Symbol catch-all
    symbol: /[^\s\(\)\[\]\{\}#.;:"'`~][^\s\(\)\[\]\{\}.#;"'`~]*/,
    keyword: /:[^\s\(\)\[\]\{\}#.;"'`~]+/,

    // Strings
    string: /(?:\\(?:.|\s))|[^"\\]/,
    fstring: /(?:\{\{)|(?:\}\})|(?:\\(?:.|\s))|[^"\\\{\}]/,
}

const lt = {
    // Python keywords.  A lot of the keywords here are irrelevant to
    // us, or straight up not present in Hy.
    false: 'False',
    none: 'None',
    true: 'True',
    and: 'and',
    as: 'as',  // Replaced with the :as form.  Example: (import sys :as systest)
    assert: 'assert',
    async: 'async',  // Replaced with the :async form.  Examples:
                     // (defn :async numbers [] (yield 1) (yield 2))
                     // (for [:async x (numbers)] (print x)))))
                     // (with [:async v1 e1] …)

    await: 'await',
    break: 'break',
    class: 'class',  // Replaced with the defclass form.  Example: (defclass Class …)
    continue: 'continue',
    def: 'def',  // Replaced with the defn form.  Example: (defn test [] (+ 40 2))
    del: 'del',
    elif: 'elif',  // Nonexistent
    else: 'else',
    except: 'except',
    finally: 'finally',
    for: 'for',
    from: 'from',
    global: 'global',
    if: 'if',
    import: 'import',
    in: 'in',
    is: 'is',
    lambda: 'lambda',  // Nonexistant
    nonlocal: 'nonlocal',
    not: 'not',
    or: 'or',
    pass: 'pass',  // Nonexistant
    raise: 'raise',
    return: 'return',
    try: 'try',
    while: 'while',
    with: 'with',
    yield: 'yield',

    // Hy macros.  All of these are overridable, but we're going to
    // assume that users aren't clinically insane.
    do: 'do',
    domac: 'do-mac',
    evalandcompile: 'eval-and-compile',
    evalwhencompile: 'eval-and-compile',
    py: 'py',
    pys: 'pys',
    pragma: 'pragma',
    quote: 'quote',
    quasiquote: 'quasiquote',
    unquote: 'unquote',
    unquotesplice: 'unquote-splice',
    setv: 'setv',
    setx: 'setx',
    let: 'let',
    annotate: 'annotate',
    deftype: 'deftype',
    dot: '.',
    unpackiterable: 'unpack-iterable',
    unpackmapping: 'unpack-mapping',
    when: 'when',
    cond: 'cond',
    lfor: 'lfor',
    dfor: 'dfor',
    gfor: 'gfor',
    sfor: 'sfor',
    match: 'match',
    defn: 'defn',
    fn: 'fn',
    defmacro: 'defmacro',
    defreader: 'defreader',
    getmacro: 'get-macro',
    defclass: 'defclass',
    require: 'require',
    export: 'export',
    chainc: 'chainc',
    read: 'read',
    readmany: 'read-many',
    eval: 'eval',
    repr: 'repr',
    reprregister: 'repre-register',
    mangle: 'mangle',
    unmangle: 'unmangle',
    macroexpand: 'macroexpand',
    macroexpandone: 'macroexpand-1',
    gensym: 'gensym',
    asmodel: 'as-model',
    // We will assume that users will write macros without explicitly
    // importing either of these two.
    hyi: 'hy.I',
    hyr: 'hy.R',

    // Operator keywords.
    cond_eq: '=',
    cond_gt: '>',
    cond_lt: '<',
    cond_ge: '>=',
    cond_le: '<=',
    cond_ne: '!=',
    oper_pl: '+',
    oper_mi: '-',
    oper_ml: '*',
    oper_ex: '**',
    oper_di: '/',
    oper_fd: '//',
    oper_mm: '@',
    oper_mo: '%',
    oper_sr: '>>',
    oper_sl: '<<',
    oper_ba: '&',
    oper_bo: '|',
    oper_bx: '^',
    oper_bn: '~',  // Replaced with the bnot form.
    oper_ea: ':=',  // Replaced with the setx form.
    bnot: 'bnot',
    cut: 'cut',
    get: 'get',
    isnot: 'is-not',
    notin: 'not-in',
    aass_pl: '+=',
    aass_mi: '-=',
    aass_mu: '*=',
    aass_ex: '**=',
    aass_di: '/=',
    aass_fd: '//=',
    aass_mm: '@=',
    aass_mo: '%=',
    aass_sr: '>>=',
    aass_sl: '<<=',
    aass_ba: '&=',
    aass_bo: '|=',
    aass_bx: '^=',

    // Shorthands
    sh_annotate: '#^',
    sh_quote: '\'',
    sh_unpackiterable: '#*',
    sh_unpackmapping: '#**',

    discard_prefix: '#_'
}

module.exports = grammar({
    name: "hy",

    word: $ => $.symbol,

    rules: {
        program: $ => seq(
            optional(
                $.shebang
            ),
            repeat(
                $._item
            )
        ),

        shebang: _ => rx.shebang,

        _item: $ => choice(
            $.comment,
            $._form,
        ),

        comment: _ => rx.comment,

        _form: $ => choice(
            $.discard,
            $._literal,
            $.symbol,
            $.keyword,
            $._keywords_with_values,
            $.list,
            $.set,
            $.dictionary,
            $.quoted_expression,
            $.expression,
        ),

        discard: $ => seq(
            $.discard_prefix,
            /\s+/,
            field("discarded_form", $._form)
        ),

        discard_prefix: $ => lt.discard_prefix,

        _literal: $ => choice(
            $._number,
            $._string,
        ),

        _number: $ => choice(
            $.integer,
            $.float,
            $.complex
        ),

        integer: $ => choice(
            $.binary,
            $.hexadecimal,
            $.octal,
            $.decimal
        ),

        decimal: _ => token(
            seq(
                optional(
                    number.sign,
                ),
                number.decimal_digit,
                repeat(
                    choice(
                        number.separator,
                        number.decimal_digit
                    )
                )
            )
        ),

        binary: _ => token(
            seq(
                optional(
                    number.sign
                ),
                number.binary_radix,
                number.binary_digit,
                repeat(
                    choice(
                        number.separator,
                        number.binary_digit
                    )
                )
            )
        ),

        hexadecimal: _ => token(
            seq(
                optional(
                    number.sign
                ),
                number.hexadecimal_radix,
                number.hexadecimal_digit,
                repeat(
                    choice(
                        number.separator,
                        number.hexadecimal_digit
                    )
                )
            )
        ),

        octal: _ => token(
            seq(
                optional(
                    number.sign
                ),
                number.octal_radix,
                number.octal_digit,
                repeat(
                    choice(
                        number.separator,
                        number.hexadecimal_digit
                    )
                )
            )
        ),

        float: $ => choice(
            $.nan,
            $.infinity,
            $.numeric_float
        ),

        nan: _ => token(
            seq(
                optional(
                    number.sign
                ),
                number.nan
            )
        ),

        infinity: _ => token(
            seq(
                optional(
                    number.sign
                ),
                number.infinity
            )
        ),

        numeric_float: _ => token(
            choice(
                seq(
                    optional(
                        seq(
                            optional(
                                number.sign
                            ),
                            number.decimal_digit,
                            repeat(
                                choice(
                                    number.separator,
                                    number.decimal_digit
                                )
                            )
                        ),
                    ),
                    '.',
                    repeat(
                        choice(
                            number.separator,
                            number.decimal_digit
                        )
                    ),
                    optional(
                        seq(
                            /[eE]/,
                            optional(
                                number.sign
                            ),
                            number.decimal_digit,
                            repeat(
                                choice(
                                    number.separator,
                                    number.decimal_digit
                                )
                            )
                        ),
                    )
                ),
                seq(
                    optional(
                        number.sign
                    ),
                    '.',
                    repeat(
                        number.separator
                    ),
                    number.decimal_digit,
                    repeat(
                        choice(
                            number.separator,
                            number.decimal_digit
                        )
                    ),
                    optional(
                        seq(
                            /[eE]/,
                            optional(
                                number.sign
                            ),
                            number.decimal_digit,
                            repeat(
                                choice(
                                    number.separator,
                                    number.decimal_digit
                                )
                            )
                        )
                    )
                ),
                seq(
                    optional(
                        number.sign
                    ),
                    repeat(
                        number.separator
                    ),
                    number.decimal_digit,
                    repeat(
                        choice(
                            number.separator,
                            number.decimal_digit
                        )
                    ),
                    optional(
                        seq(
                            /[eE]/,
                            optional(
                                number.sign
                            ),
                            number.decimal_digit,
                            repeat(
                                choice(
                                    number.separator,
                                    number.decimal_digit
                                )
                            )
                        )
                    )
                )
            )
        ),

        complex: _ => token(
            seq(
                optional(
                    number.sign,
                ),
                optional(
                    seq(
                        number.decimal_digit,
                        repeat(
                            choice(
                                number.separator,
                                number.decimal_digit
                            )
                        ),
                        '[+-]'
                    )
                ),
                number.decimal_digit,
                repeat(
                    choice(
                        number.separator,
                        number.decimal_digit
                    )
                ),
                /[jJ]/
            )
        ),

        boolean: _ => token(
            choice(
                lt.true,
                lt.false
            )
        ),

        none: _ => lt.none,

        expression: $ => seq(
            /\(/,
            repeat(
                $._form
            ),
            /\)/
        ),

        quoted_expression: $ => seq(
            lt.sh_quote,
            $.expression
        ),

        list: $ => seq(
            /\[/,
            repeat(
               $._form
            ),
            /]/
        ),

        set: $ => seq(
            /#\{/,
            repeat(
                $._form
            ),
            /}/
        ),

        dictionary: $ => seq(
            /\{/,
            repeat(
                $.dictionary_item
            ),
            /}/
        ),

        dictionary_item: $ => seq(
            $._form,
            $._form
        ),

        symbol: _ => rx.symbol,

        keyword: _ => rx.keyword,

        _keywords_with_values: $ => choice(
            $.boolean,
            $.none,
        ),

        _string: $ => choice(
            $.string,
            $.fstring,
            $.bstring,
            $.raw_string,
            $.raw_fstring,
            $.raw_bstring
        ),

        string: _ => token(
            seq(
                /"/,
                repeat(
                    rx.string
                ),
                /"/
            )
        ),

        fstring: $ => seq(
            /f"/,
            repeat(
                choice(
                    rx.fstring,
                    seq(
                        /\{/,
                        $._form,
                        /\}/
                    )
                )
            ),
            /"/
        ),

        bstring: _ => token(
            seq(
                /b"/,
                repeat(
                    rx.string
                ),
                /"/
            )
        ),

        raw_string: _ => token(
            seq(
                /r"/,
                repeat(
                    rx.string
                ),
                /"/
            )
        ),

        raw_fstring: $ => seq(
            /(rf)|(fr)"/,
            repeat(
                choice(
                    rx.fstring,
                    seq(
                        /\{/,
                        $._form,
                        /\}/
                    )
                )
            ),
            /"/
        ),

        raw_bstring: _ => token(
            seq(
                /(rb)|(br)"/,
                repeat(
                    rx.string
                ),
                /"/
            )
        ),
    }
});
