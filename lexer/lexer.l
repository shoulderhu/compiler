/**************************************************
                    Prologue
**************************************************/
%{
#include <stdio.h>
#include <stdlib.h>
#include "parser\parser.tab.h"
%}



/**************************************************
                    Flex definitions
**************************************************/
//%option noyywrap // C++ compatibility

/*
%token IDENTIFIER // identifer
%token NUMBER     // number
%token STRING     // string
%token COMMA      // ,
%token COLON      // :
%token SEMI       // ;
%left  PLUS MINUS     // + -
%left  MUL DIV        // * /
%token MOD        // %
%token ASSIGN     // =
%token EQUAL      // ==
%left  NOTEQUAL   // !=
%left  LESS       // <
%token LTEQUAL    // <=
%left  GREATER    // >
%token GTEQUAL    // >=
%token SHIFTL     // <<
%token SHIFTR     // >>
%token PLUSASN    // +=
%token MINUSASN   // -=
%token MULASN     // *=
%token DIVASN     // /=
%token MODASN     // %=
%token SHLASN     // <<=
%token SHRASN     // >>=
%token ANDASN     // &=
%token XORASN     // ^=
%token ORASN      // |=
%token AND        // &&
%token OR         // ||
%token NOT        // !
%token COMPL      // ~
%token BITAND     // &
%token BITOR      // |
%token BITXOR     // ^
%token QUESTION   // ?
%token LPAREN     // (
%token RPAREN     // )
%token LBRACKET   // [
%token RBEACKET   // ]
%token LCURLY     // {
%token RCURLY     // }
*/


/**************************************************
                    Grammar rules
**************************************************/
%%



auto        { return(AUTO); }
break       { return(BREAK); }
case        { return(CASE); }
char        { return(CHAR); }
const       { return(CONST); }
continue    { return(CONTINUE); }
default     { return(DEFAULT); }
do          { return(DO); }
double      { return(DOUBLE); }
else        { return(ELSE); }
enum        { return(ENUM); }
extern      { return(EXTERN); }
float       { return(FLOAT); }
for         { return(FOR); }
goto        { return(GOTO); }
if          { return(IF); }
inline      { return(INLINE); }
int         { return(INT); }
long        { return(LONG); }
register    { return(REGISTER); }
restrict    { return(RESTRICT); }
return      { return(RETURN); }
short       { return(SHORT); }
signed      { return(SIGNED); }
sizeof      { return(SIZEOF); }
static      { return(STATIC); }
struct      { return(STRUCT); }
switch      { return(SWITCH); }
typedef     { return(TYPEDEF); }
union       { return(UNION); }
unsigned    { return(UNSIGNED); }
void        { return(VOID); }
volatile    { return(VOLATILE); }
while       { return(WHILE); }
%%

/**************************************************
                    Epilogue
**************************************************/

int yywarp(void) {

    return 1;
}