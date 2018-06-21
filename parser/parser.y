/**************************************************
                    Prologue
**************************************************/
%{

%}

/**************************************************
                    Bison declarations
**************************************************/
%token IDENTIFIER // identifer
%token NUMBER     // number
%token STRING     // string
%token COMMA      // ,
%token SEMI       // ;
%left  PLUS       // +
%left  MINUS      // -
%left  MUL        // *
%left  DIV        // /
%token MOD        // %
%token ASSIGN     // =
%token EQUAL      // ==
%token NOTEQUAL   // !=
%token LESS       // <
%token LTEQUAL    // <=
%token GREATER    // >
%token GTEQUAL    // >=
%token AND        // &&
%token OR         // ||
%token NOT        // !
%token BITAND     // &
%token BITOR      // |
%token BITXOR     // ^
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

%%

/**************************************************
                    Epilogue
**************************************************/