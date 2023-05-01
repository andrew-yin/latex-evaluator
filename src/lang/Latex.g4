// An adaptation of the LaTex grammar
grammar Latex;

// parser rules
input
    : expression EOF
    ;

expression
    : additiveExpression
    ;

additiveExpression
    : multiplicativeExpression (additiveOperator multiplicativeExpression)*
    ;

additiveOperator
    : PLUS
    | MINUS
    ;

multiplicativeExpression
    : powerExpression (multiplicativeOperator powerExpression)*
    ;
    
multiplicativeOperator
    : TIMES
    | DIV
    ;

powerExpression
    : signedAtom (POW signedAtom)*
    ;

signedAtom
    : PLUS atom
    | MINUS atom
    | atom
    ;

atom
    : integer
    | LPAREN expression RPAREN
    ;

integer
    : Integer    
    ;


// lexer rules
LPAREN
   : '('
   ;


RPAREN
   : ')'
   ;


PLUS
   : '+'
   ;


MINUS
   : '-'
   ;


TIMES
   : '*'
   ;


DIV
   : '/'
   ;

POW
   : '^'
   ;

Integer
    : Digit+
    ;

fragment Digit
    : [0-9];

Whitespace
   : [ \r\n\t]+ -> skip
   ;
