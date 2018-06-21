
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     NUMBER = 259,
     STRING = 260,
     COMMA = 261,
     COLON = 262,
     SEMI = 263,
     MINUS = 264,
     PLUS = 265,
     DIV = 266,
     MUL = 267,
     MOD = 268,
     ASSIGN = 269,
     EQUAL = 270,
     NOTEQUAL = 271,
     LESS = 272,
     LTEQUAL = 273,
     GREATER = 274,
     GTEQUAL = 275,
     SHIFTL = 276,
     SHIFTR = 277,
     PLUSASN = 278,
     MINUSASN = 279,
     MULASN = 280,
     DIVASN = 281,
     MODASN = 282,
     SHLASN = 283,
     SHRASN = 284,
     ANDASN = 285,
     XORASN = 286,
     ORASN = 287,
     AND = 288,
     OR = 289,
     NOT = 290,
     COMPL = 291,
     BITAND = 292,
     BITOR = 293,
     BITXOR = 294,
     QUESTION = 295,
     LPAREN = 296,
     RPAREN = 297,
     LBRACKET = 298,
     RBEACKET = 299,
     LCURLY = 300,
     RCURLY = 301,
     AUTO = 302,
     BREAK = 303,
     CASE = 304,
     CHAR = 305,
     CONST = 306,
     CONTINUE = 307,
     DEFAULT = 308,
     DO = 309,
     DOUBLE = 310,
     ELSE = 311,
     ENUM = 312,
     EXTERN = 313,
     FLOAT = 314,
     FOR = 315,
     GOTO = 316,
     IF = 317,
     INLINE = 318,
     INT = 319,
     LONG = 320,
     REGISTER = 321,
     RESTRICT = 322,
     RETURN = 323,
     SHORT = 324,
     SIGNED = 325,
     SIZEOF = 326,
     STATIC = 327,
     STRUCT = 328,
     SWITCH = 329,
     TYPEDEF = 330,
     UNION = 331,
     UNSIGNED = 332,
     VOID = 333,
     VOLATILE = 334,
     WHILE = 335
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


