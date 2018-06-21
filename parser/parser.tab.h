
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
     INTEGER = 260,
     FLOATING = 261,
     CHARACTER = 262,
     STRING = 263,
     PERIOD = 264,
     POINTER = 265,
     COMMA = 266,
     COLON = 267,
     SEMI = 268,
     MINUS = 269,
     PLUS = 270,
     DIV = 271,
     MUL = 272,
     MOD = 273,
     DPLUS = 274,
     DMINUS = 275,
     ASSIGN = 276,
     EQUAL = 277,
     NOTEQUAL = 278,
     LESS = 279,
     LTEQUAL = 280,
     GREATER = 281,
     GTEQUAL = 282,
     SHIFTL = 283,
     SHIFTR = 284,
     PLUSASN = 285,
     MINUSASN = 286,
     MULASN = 287,
     DIVASN = 288,
     MODASN = 289,
     SHLASN = 290,
     SHRASN = 291,
     ANDASN = 292,
     XORASN = 293,
     ORASN = 294,
     AND = 295,
     OR = 296,
     NOT = 297,
     COMPL = 298,
     BITAND = 299,
     BITOR = 300,
     BITXOR = 301,
     QUESTION = 302,
     LPAREN = 303,
     RPAREN = 304,
     LBRACKET = 305,
     RBEACKET = 306,
     LCURLY = 307,
     RCURLY = 308,
     AUTO = 309,
     BREAK = 310,
     CASE = 311,
     CHAR = 312,
     CONST = 313,
     CONTINUE = 314,
     DEFAULT = 315,
     DO = 316,
     DOUBLE = 317,
     ELSE = 318,
     ENUM = 319,
     EXTERN = 320,
     FLOAT = 321,
     FOR = 322,
     GOTO = 323,
     IF = 324,
     INLINE = 325,
     INT = 326,
     LONG = 327,
     REGISTER = 328,
     RESTRICT = 329,
     RETURN = 330,
     SHORT = 331,
     SIGNED = 332,
     SIZEOF = 333,
     STATIC = 334,
     STRUCT = 335,
     SWITCH = 336,
     TYPEDEF = 337,
     UNION = 338,
     UNSIGNED = 339,
     VOID = 340,
     VOLATILE = 341,
     WHILE = 342
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


