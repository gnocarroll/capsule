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
    sub_expr=expr args=call_args #funcCallExpr
    | sub_expr=expr '[' index_expr=expr ']' #arrayAccessExpr
    | sub_expr=expr '->' field=WORD #arrowAccessExpr
    | sub_expr=expr '.' field=WORD #dotAccessExpr
    | (op=('*' | '&' | '+' | '-' | '~' | 'not'))+ sub_expr=expr #unaryExpr
    | lhs=expr (op=binary_op rhs=expr)+ #binaryExpr
    |'(' sub_expr=expr ')' #parenExpr
    | value=INTEGER #intLiteral
    | value=FLOAT #floatLiteral
    | expr_ident=ident #identExpr
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
    sub_stmt=statement_no_endline ENDLINE;

statement_no_endline :
    sub_stmt=inc_dec_statement #incDecStmt
    | sub_stmt=function_call_statement #funcCallStmt
    | sub_stmt=if_statement #ifStmt
    | sub_stmt=while_statement #whileStmt
    | sub_stmt=create_var #createVarStmt
    | sub_stmt=modify_var #modifyVarStmt
    ;

inc_dec_statement :
    inc_dec_ident=ident op=('++' | '--');

function_call_statement :
    sub_expr=expr args=call_args;

if_statement:
    'if' if_cond=expr ENDLINE
        if_body=compound_statement
    (
    'else' 'if' else_if_cond=expr ENDLINE
        else_if_body=compound_statement
    )*
    (
    'else' ENDLINE
        else_body=compound_statement
    )?
    'end' 'if'
    ;

while_statement :
    'while' while_cond=expr ENDLINE
        while_body=compound_statement
    'end' 'while'
    ;

compound_statement:
    (sub_stmt=statement ENDLINE*)*;


function_def :
    'function' WORD params=function_def_params ENDLINE
        body=compound_statement
    'end' WORD;

function_def_params :
    '(' ENDLINE*
    (
        param=create_var
        (',' ENDLINE* param=create_var)
        ','?
        ENDLINE*
    )?
    ')';


type_variety:
    'signed'
    | 'unsigned'
    | 'struct';


type_literal:
    variety=type_variety ENDLINE
        (field=create_var ENDLINE)*
    'end' WORD
    ;


type:
    name=type_name #typeFromName
    | literal=type_literal #typeFromLiteral;


type_or_alias_def:
    type_or_alias_tok=('type' | 'alias')
        name=WORD 'is' assignType=type ENDLINE;


definition:
    func=function_def #defIsFunction
    | type_or_alias=type_or_alias_def #defIsTypeOrAlias
    | new_var=create_var ENDLINE #defIsVarDef
    ;

file:
    (def=definition)*;