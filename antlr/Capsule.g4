grammar Capsule;

// LEXER RULES

fragment ALPHA : [A-Za-z_];
fragment ALPHANUM : [A-Za-z_0-9];
fragment DIGIT : [0-9];
fragment EXPONENT : ('e'|'E') ('+'|'-')? DIGIT+ ;

WORD : ALPHA ALPHANUM*;
INTEGER : DIGIT+;
FLOAT : DIGIT+ '.' DIGIT* (EXPONENT)?
 | '.' DIGIT+ (EXPONENT)?;

WS : [ \t\r\f] -> skip;
ESC_NEWLINE : '\\' [ \t\r\f]* '\n' -> skip;

ENDLINE : '\n' | EOF;

// END LEXER RULES

ident : WORD ('::' WORD)*;

call_args : '(' ENDLINE*
    (expr (',' ENDLINE* expr)* ','? ENDLINE*)?
')';

// EXPR PARSING

expr :
    expr call_args #funcCallExpr
    | expr '[' expr ']' #arrayAccessExpr
    | expr '->' WORD #arrowAccessExpr
    | expr '.' WORD #dotAccessExpr
    | ('*' | '&' | '+' | '-' | '~' | 'not')+ expr #unaryExpr
    | expr ('**' expr)+ #expExpr
    | expr (('*' | '/' | '%') expr)+ #multDivModExpr
    | expr (('+' | '-') expr)+ #addSubExpr
    | expr (('<<' | '>>') expr)+ #shiftExpr
    | expr ('&' expr)+ #bitAndExpr
    | expr ('^' expr)+ #bitXorExpr
    | expr ('|' expr)+ #bitOrExpr
    | expr (('<' | '>' | '<=' | '>=') expr)+ #compareExpr
    | expr (('==' | '!=') expr)+ #eqExpr
    | expr ('and' expr)+ #andExpr
    | expr ('or' expr)+ #orExpr
    |'(' expr ')' #parenExpr
    | INTEGER #intLiteral
    | FLOAT #floatLiteral
    | ident #identExpr
    ;

binary_op :
    '**'
    | ('*' | '/' | '%')
    | ('+' | '-')
    | ('<<' | '>>')
    | '&'
    | '^'
    | '|'
    | ('<' | '>' | '<=' | '>=')
    | ('==' | '!=')
    | 'and'
    | 'or'
    ;

type_name :
    ident;

create_var:
    WORD ':' type_name #createNoExpr
    | WORD ':' type_name '=' expr #createWithExpr
    | WORD ':=' expr #createInferType
    ;

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
    statement_no_endline ENDLINE;

statement_no_endline :
    inc_dec_statement
    | function_call_statement
    | if_statement
    | while_statement
    | create_var
    | modify_var
    ;

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