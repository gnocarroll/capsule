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

ident : (namespace=WORD '::')* name=WORD;

callArgs : '(' ENDLINE*
    (arg=expr (',' ENDLINE* arg=expr)* ','? ENDLINE*)?
')';

// EXPR PARSING

expr :
    subExpr=expr endPostfixExpr #postfixExpr
    | (op=('*' | '&' | '+' | '-' | '~' | 'not'))+ subExpr=expr #unaryExpr
    | lhs=expr (op=binaryOp rhs=expr)+ #binaryExpr
    |'(' subExpr=expr ')' #parenExpr
    | value=INTEGER #intLiteral
    | value=FLOAT #floatLiteral
    | expr_ident=ident #identExpr
    ;

endPostfixExpr :
    args=callArgs #funcCallExpr
    | '[' index_expr=expr ']' #arrayAccessExpr
    | '->' field=WORD #arrowAccessExpr
    | '.' field=WORD #dotAccessExpr
    ;

binaryOp :
    '**' #exp
    | ('*' | '/' | '%') #multDivMod
    | ('+' | '-') #addSub
    | ('<<' | '>>') #shift
    | '&' #bitAnd
    | '^' #bitXor
    | '|' #bitOr
    | ('<' | '>' | '<=' | '>=') #compare
    | ('==' | '!=') #eqNeq
    | 'and' #logicalAnd
    | 'or' #logicalOr
    ;

typeName :
    name=ident;

createVar:
    name=WORD typeAndExpr=createVarTypeAndExpr;

createVarTypeAndExpr :
    ':' typeName ('=' subExpr=expr)?   #createWithType
    | ':=' subExpr=expr   #createInferType
    ;


modifyVar:
    WORD op=inPlaceOp subExpr=expr;

inPlaceOp:
    op=(
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
        | '>>='
    )
    ;

statement :
    subStmt=statement_no_endline ENDLINE;

statement_no_endline :
    subStmt=incDecStatement #incDecStmt
    | subStmt=functionCallStatement #funcCallStmt
    | subStmt=ifStatement #ifStmt
    | subStmt=whileStatement #whileStmt
    | subStmt=createVar #createVarStmt
    | subStmt=modifyVar #modifyVarStmt
    ;

incDecStatement :
    incDecIdent=ident op=('++' | '--');

functionCallStatement :
    subExpr=expr args=callArgs;

ifStatement:
    'if' if_cond=expr ENDLINE
        if_body=compoundStatement
    (
    'else' 'if' else_if_cond=expr ENDLINE
        else_if_body=compoundStatement
    )*
    (
    'else' ENDLINE
        else_body=compoundStatement
    )?
    'end' 'if'
    ;

whileStatement :
    'while' whileCond=expr ENDLINE
        whileBody=compoundStatement
    'end' 'while'
    ;

compoundStatement:
    ENDLINE*
    (subStmt=statement ENDLINE*)*;


functionDef :
    'function' name=WORD params=functionDefParams ENDLINE
        body=compoundStatement
    'end' endName=WORD;

functionDefParams :
    '(' ENDLINE*
    (
        param=createVar
        (',' ENDLINE* param=createVar)
        ','?
        ENDLINE*
    )?
    ')';


typeVariety:
    'signed'
    | 'unsigned'
    | 'struct';


typeLiteral:
    variety=typeVariety ENDLINE+
        (field=createVar ENDLINE+)*
    'end' endWord=WORD
    ;


type:
    name=typeName #typeFromName
    | literal=typeLiteral #typeFromLiteral;


typeOrAliasDef:
    typeOrAliasTok=('type' | 'alias')
        name=WORD 'is' assignType=type ENDLINE;


definition:
    func=functionDef #defIsFunction
    | type_or_alias=typeOrAliasDef #defIsTypeOrAlias
    | new_var=createVar ENDLINE #defIsVarDef
    ;

file:
    (def=definition ENDLINE*)*;