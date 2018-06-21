/**************************************************
                    Prologue
**************************************************/
%{
#include <stdio.h>
#include <stdlib.h>
%}

/**************************************************
                    Bison declarations
**************************************************/
%start translation_unit

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
%token AND        // &&
%token OR         // ||
%token NOT        // !
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

%token AUTO       // auto
%token BREAK      // break
%token CASE       // case
%token CHAR       // char
%token CONST      // const
%token CONTINUE   // continue
%token DEFAULT    // default
%token DO         // do
%token DOUBLE     // double
%token ELSE       // else
%token ENUM       // enum
%token EXTERN     // extern
%token FLOAT      // float
%token FOR        // for
%token GOTO       // goto
%token IF         // if
%token INLINE     // inline (since C99)
%token INT        // int
%token LONG       // long
%token REGISTER   // register
%token RESTRICT   // restrict (since C99)
%token RETURN     // return
%token SHORT      // short
%token SIGNED     // signed
%token SIZEOF     // sizeof
%token STATIC     // static
%token STRUCT     // struct
%token SWITCH     // switch
%token TYPEDEF    // typedef
%token UNION      // union
%token UNSIGNED   // unsigned
%token VOID       // void
%token VOLATILE   // volatile
%token WHILE      // while

/**************************************************
                    Grammar rules
**************************************************/
%%
translation_unit // rule #1
    : external_declaration
    | translation_unit external_declaration
    ;

external_declaration // rule #2
    : function_definition
    | declaration
    ;

function_definition // rule #3
    : declarator compound_statement
    | declarator declarations compound_statement
    | declaration_specifiers declarator compound_statement
    | declaration_specifiers declarator declarations compound_statement
    ;

declaration_specifier // rule #4
    : storage_class_specifier
    | type_specifier
    | type_qualifier
    ;

storage_class_specifier // rule #5
    : AUTO
    | REGISTER
    | STATIC
    | EXTERN
    | TYPEDEF
    ;

type_specifier // rule #6
    : VOID
    | CHAR
    | SHORT
    | INT
    | LONG
    | FLOAT
    | DOUBLE
    | SIGNED
    | UNSIGNED
    ;

struct_or_union // rule #8
    : STRUCT
    | UNION
    ;

specifier_qualifier // rule #10
    : type_specifier
    | type_qualifier
    ;

declarator // rule #13
    : direct_declarator
    ;

type_qualifier // rule #15
    : CONST
    | VOLATILE
    ;

direct_declarator // rule #16
    : IDENTIFIER
    | LPAREN declarator RPAREN
    ;

constant_expression // rule #17
    : conditional_expression
    ;

conditional_expression // rule #18
    : logical_or_expression
    | logical_or_expression QUESTION expression COLON conditional_expression
    ;

logical_or_expression // rule #19
    : logical_and_expression
    | logical_or_expression OR logical_and_expression
    ;

logical_and_expression // rule #20
    : inclusive_or_expression
    | logical_and_expression AND inclusive_or_expression
    ;

inclusive_or_expression // rule #21
    : exclusive_or_expression
    | inclusive_or_expression BITOR exclusive_or_expression
    ;

exclusive_or_expression // rule #22
    : and_expression
    | exclusive_or_expression BITXOR and_expression
    ;

and_expression // rule #23
    : equality_expression
    | and_expression BITAND equality_expression
    ;

equality_expresssion // rule #24
    : relational_expression
    | equality_expression EQUAL relational_expression
    ;

relational_expression // rule #25
    : shift_expression
    | relational_expression LESS shift_expression
    | relational_expression GREATER shift_expression
    | relational_expression LTEQUAL shift_expression
    | relational_expression GTEQUAL shift_expression
    ;

shift_expression // rule #26
    : additive_expression
    | shift_expression SHIFTL additive_expression
    | shift_expression SHIFTR additive_expression
    ;

additive_expression // rule #27
    : multiplicative_expression
    | additive_expression PLUS multiplicative_expression
    | additive_expression MINUS multiplicative_expression
    ;

multiplicative_expression // rule #28
    : cast_expression
    | multiplicative_expression MUL cast_expression
    | multiplicative_expression DIV cast_expression
    | multiplicative_expression MOD cast_expression
    ;

cast_expression // rule #29
    : unary_expression
    | LPAREN type_name RPAREN cast_expression
    ;

unary_expression // rule #30
    : postfix_expression
    ;

postfix_expression // rule #31
    : primary_expression
    ;

primary_expression // rule #32
    : IDENTIFIER
    | STRING
    | LPAREN expression RPAREN
    ;

expression // rule #33
    : assignment_expression
    | expression COMMA assignment_expression
    ;

assignment_expression // rule #34
    :


declaration_specifiers // {declaration_specifier}*
    : declaration_specifier
    | declaration_specifiers declaration_specifier
    ;

declarations // {declaration}*
    : declaration
    | declarations declaration
    ;
%%

/**************************************************
                    Epilogue
**************************************************/

int main(int argc, char *argv[]) {

    yyparse();
    return 0;
}

void yyerror(char *msg) {

    printf("%s\n", msg);
    exit(0);
}