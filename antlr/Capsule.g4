grammar Capsule;

// LEXER RULES

fragment ALPHA : [A-Za-z_];
fragment ALPHANUM : [A-Za-z_0-9];
fragment DIGIT : [0-9];
fragment EXPONENT : ('e'|'E') ('+'|'-')? DIGIT+ ;

WORD : ALPHA ALPHANUM+;
INTEGER : DIGIT+;
FLOAT : DIGIT+ '.' DIGIT* (EXPONENT)?
 | '.' DIGIT+ (EXPONENT)?;

WS : [ \t\r\f] -> skip;
ESC_NEWLINE : '\\' [ \t\r\f]* '\n' -> skip;

ENDLINE : '\n' | EOF;

// END LEXER RULES

ident : (WORD '::')+ WORD;

call_args : '(' ENDLINE*
    (expr (',' ENDLINE* expr)* ','? ENDLINE*)?
')';

// EXPR PARSING

expr :
    expr call_args |
    expr '[' expr ']'
    expr '->' WORD |
    expr '.' WORD |
    ('*' | '&' | '+' | '-' | '~' | 'not')+ expr |
    expr ('**' expr)+ |
    expr (('*' | '/' | '%') expr)+ |
    expr (('+' | '-') expr)+ |
    expr (('<<' | '>>') expr)+ |
    expr ('&' expr)+ |
    expr ('^' expr)+ |
    expr ('|' expr)+ |
    expr (('<' | '>' | '<=' | '>=') expr)+ |
    expr (('==' | '!=') expr)+ |
    expr ('and' expr)+ |
    expr ('or' expr)+ |
    '(' expr ')' |
    INTEGER |
    FLOAT |
    ident;

type_name :
    ident;

create_var:
    WORD ':' type_name |
    WORD ':' type_name '=' expr |
    WORD ':=' expr;

modify_var:
    WORD in_place_op expr;

in_place_op:
    '+='
    | '-='
    | '*='
    | '/='
    | '%='
    | '**='
    | '^='
    | '|='
    | '&='
    | '<<='
    | '>>=';

statement :
    (
        inc_dec_statement |
        function_call_statement |
        if_statement |
        while_statement |
        create_var |
        modify_var
    ) ENDLINE;

inc_dec_statement :
    ident ('++' | '--');

function_call_statement :
    expr call_args;

if_statement:
    'if' expr ENDLINE
        compound_statement
    (
    'else' 'if' expr ENDLINE
        compound_statement
    )*
    (
    'else' ENDLINE
        compound_statement
    )?
    'end' 'if'
    ;

while_statement :
    'while' expr ENDLINE
        compound_statement
    'end' 'while'
    ;

compound_statement:
    (statement ENDLINE*)*;


function_def :
    'function' WORD function_def_args ENDLINE
        compound_statement
    'end' WORD;

function_def_args :
    '(' ENDLINE*
    (
        create_var
        (',' ENDLINE* create_var)
        ','?
        ENDLINE*
    )?
    ')';


type_variety:
    'signed' |
    'unsigned' |
    'struct';


type_literal:
    type_variety ENDLINE
        (create_var ENDLINE)*
    'end' WORD
    ;


type:
    type_name | type_literal;


type_def:
    type_name WORD 'is' type ENDLINE;


definition:
    function_def |
    type_def;

file:
    definition*;