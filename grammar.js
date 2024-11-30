/**
 * @file Hy grammar for tree-sitter
 * @author MinmusxMinmus <git.1khdc@simplelogin.com>
 * @license GPL3
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const rx = {
    shebang: /#!~?(?:\/(\w*))+(?: .*)?/,
    comment: /;.*/,
    discard_prefix: /#_/,

    // Symbol catch-all
    symbol: /[^\s\(\)\[\]\{\}#;:"'`~][^\s\(\)\[\]\{\}#;"'`~]*/,
    keyword: /[^\s\(\)\[\]\{\}#;"'`~]+/,

    // String catch-all
    string: /(?:\\.)|[^"]/,

    // Fstring body: the same as string, but also requires { escaped.
    fstring: /(?:\\.)|[^"\{]/,

    // Numeric literals, as per the official Python docs.
    sign: /[+-]?/,
    decinteger: /[1-9](?:_?[0-9])*/,
    bininteger: /0[bB](?:_?[01])+/,
    octinteger: /0[oO](?:_?[0-7])+/,
    hexinteger: /0[xX](?:_?[a-fA-F0-9])+/,
    pointfloat: /(?:(?:[0-9](?:_?[0-9])*)?\.(?:[0-9](?:_?[0-9])*))|((?:[0-9](?:_?[0-9])*)\.)/,
    exponentfloat: /(?:(?:[0-9](?:_?[0-9])*)|(?:(?:[0-9](?:_?[0-9])*)?\.(?:[0-9](?:_?[0-9])*))|((?:[0-9](?:_?[0-9])*)\.))[eE][-+]?(?:[0-9](?:_?[0-9])*)/,
    imagnumber: /(?:(?:(?:(?:[0-9](?:_?[0-9])*)?\.(?:[0-9](?:_?[0-9])*))|((?:[0-9](?:_?[0-9])*)\.)|(?:(?:[0-9](?:_?[0-9])*)|(?:(?:[0-9](?:_?[0-9])*)?\.(?:[0-9](?:_?[0-9])*))|((?:[0-9](?:_?[0-9])*)\.))[eE][-+]?(?:[0-9](?:_?[0-9])*))|(?:[0-9](?:_?[0-9])*))[jJ]/,
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
}

module.exports = grammar({
    name: "hy",

    word: $ => $.symbol,

    rules: {
        source_file: $ => seq(
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

        _form: $ => choice(
            $._literal,
            $.symbol,
            $.keyword,
            $._keywords_with_values,
            $._string,
            $.list,
            $.set,
            $.dictionary,
            $.quoted_expression,
            $.expression,
        ),

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

        comment: _ => rx.comment,

        discard_prefix: _ => rx.discard_prefix,

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

        _literal: $ => choice(
            $._number,
        ),

        _number: $ => choice(
            $.integer,
            $.float,
            $.imaginary_number
        ),

        integer: _ => token(
            seq(
                optional(
                    rx.sign
                ),
                choice(
                    rx.decinteger,
                    rx.bininteger,
                    rx.octinteger,
                    rx.hexinteger
                )
            )
        ),

        float: _ => token(
            seq(
                optional(
                    rx.sign
                ),
                choice(
                    rx.pointfloat,
                    rx.exponentfloat
                )
            )
        ),

        imaginary_number: _ => token(
            seq(
                optional(
                    rx.sign
                ),
                rx.imagnumber
            )
        ),

        boolean: _ => token(
            choice(
                lt.true,
                lt.false
            )
        ),

        none: _ => lt.none,

        _string: $ => choice(
            $.string,
            $.fstring
        ),

        string: $ => seq(
            /"/,
            repeat(
                rx.string
            ),
            /"/
        ),

        fstring: $ => seq(
            /f"/,
            repeat(
                seq(
                    rx.fstring,
                    optional(
                        seq(
                            /\{/,
                            $._form,
                            /\}/
                        )
                    )
                )
            ),
            /"/
        ),
    }
});