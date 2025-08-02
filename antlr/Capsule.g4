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

call_args : expr (',' ENDLINE* expr)* ','? ENDLINE*;

// EXPR PARSING

expr :
    expr '(' ENDLINE*
        call_args?
    ')' |
    expr '[' expr ']'
    expr '->' WORD |
    expr '.' WORD |
    ('*' | '&' | '+' | '-' | '~' | 'not')+ expr |
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

type :
    ident;

create_var:
    WORD ':' type |
    WORD ':' type '=' expr |
    WORD ':=' expr;

statement :
    (
        inc_dec_statement |
        function_call_statement |
        if_statement |
        while_statement |
        create_var
    ) ENDLINE;

inc_dec_statement :
    ident ('++' | '--');

function_call_statement :
    expr '(' ENDLINE*
        call_args?
    ')';

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