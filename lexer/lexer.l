/**************************************************
                    Prologue
**************************************************/
%{
#include <stdio.h>
#include <stdlib.h>
#include "parser\parser.tab.h"
%}

DIGIT       [0-9]
LETTER      [A-Za-z]
IDENTIFIER  {LETTER}({LETTER}|{DIGIT}|_)*
INTEGER     {DIGIT}+
FLOATING    -?{DIGIT}*\.{DIGIT}+
STRING      {LETTER}?\"(\\.|[^\\"])*\"
SPACE       [ \t]+

/**************************************************
                    Flex definitions
**************************************************/


/**************************************************
                    Grammar rules
**************************************************/
%%
","           { return COMMA; }
":"           { return COLON; }
";"           { return SEMI; }
"+"           { return PLUS; }
"-"           { return MINUS; }
"*"           { return MUL; }
"/"           { return DIV; }
"%"           { return MOD; }
"="           { return ASSIGN; }
"=="          { return EQUAL; }
"!="          { return NOTEQUAL; }
"<"           { return LESS; }
"<="          { return LTEQUAL; }
">"           { return GREATER; }
">="          { return GTEQUAL; }
"<<"          { return SHIFTL; }
">>"          { return SHIFTR; }
"+="          { return PLUSASN; }
"-="          { return MINUSASN; }
"*="          { return MULASN; }
"/="          { return DIVASN; }
"%="          { return MODASN; }
"<<="         { return SHLASN; }
">>="         { return SHRASN; }
"&="          { return ANDASN; }
"^="          { return XORASN; }
"|="          { return ORASN; }
"&&"          { return AND; }
"||"          { return OR; }
"!"           { return NOT; }
"~"           { return COMPL; }
"&" 　　　　　 { return BITAND; }
"|"           { return BITOR; }
"^"           { return BITXOR; }
"?"           { return QUESTION; }
"("           { return LPAREN; }
")"           { return RPAREN; }
"["           { return LBRACKET; }
"]"           { return RBRACKET; }
"{"           { return LCURLY; }
"}"           { return RCURLY; }

"auto"        { return AUTO; }
"break"       { return BREAK; }
"case"        { return CASE; }
"char"        { return CHAR; }
"const"       { return CONST; }
"continue"    { return CONTINUE; }
"default"     { return DEFAULT; }
"do"          { return DO; }
"double"      { return DOUBLE; }
"else"        { return ELSE; }
"enum"        { return ENUM; }
"extern"      { return EXTERN; }
"float"       { return FLOAT; }
"for"         { return FOR; }
"goto"        { return GOTO; }
"if"          { return IF; }
"inline"      { return INLINE; }
"int"         { return INT; }
"long"        { return LONG; }
"register"    { return REGISTER; }
"restrict"    { return RESTRICT; }
"return"      { return RETURN; }
"short"       { return SHORT; }
"signed"      { return SIGNED; }
"sizeof"      { return SIZEOF; }
"static"      { return STATIC; }
"struct"      { return STRUCT; }
"switch"      { return SWITCH; }
"typedef"     { return TYPEDEF; }
"union"       { return UNION; }
"unsigned"    { return UNSIGNED; }
"void"        { return VOID); }
"volatile"    { return VOLATILE); }
"while"       { return WHILE); }

{IDENTIFIER}   { return IDENTIFIER; }
{INTEGER}     { return INTEGER; }
{FLOATING}    { return FLOATING; }
{STRING}      { return STRING; }
%%

/**************************************************
                    Epilogue
**************************************************/

int yywarp(void) {

    return 1;
}