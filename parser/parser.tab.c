
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 4 "parser.y"

#include <stdio.h>
#include <stdlib.h>


/* Line 189 of yacc.c  */
#line 79 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 208 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   593

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNRULES -- Number of states.  */
#define YYNSTATES  240

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    15,    19,    23,
      28,    30,    32,    34,    36,    38,    40,    42,    44,    46,
      48,    50,    52,    54,    56,    58,    60,    62,    64,    66,
      68,    70,    72,    74,    78,    80,    82,    88,    90,    94,
      96,   100,   102,   106,   108,   112,   114,   118,   120,   124,
     126,   130,   134,   138,   142,   144,   148,   152,   154,   158,
     162,   164,   168,   172,   176,   178,   183,   185,   187,   189,
     191,   195,   197,   201,   203,   207,   209,   211,   213,   215,
     217,   219,   221,   223,   225,   227,   229,   231,   234,   238,
     240,   244,   246,   250,   255,   257,   261,   264,   268,   272,
     277,   279,   281,   283,   285,   287,   289,   293,   298,   302,
     304,   307,   313,   321,   327,   333,   341,   348,   356,   364,
     373,   381,   390,   399,   409,   413,   416,   419,   422,   426,
     428,   431,   433,   436,   438,   441,   443,   446,   448
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      89,     0,    -1,    90,    -1,    89,    90,    -1,    91,    -1,
     119,    -1,    96,   123,    -1,    96,   131,   123,    -1,   130,
      96,   123,    -1,   130,    96,   131,   123,    -1,    93,    -1,
      94,    -1,    97,    -1,    54,    -1,    73,    -1,    79,    -1,
      65,    -1,    82,    -1,    85,    -1,    57,    -1,    76,    -1,
      71,    -1,    72,    -1,    66,    -1,    62,    -1,    77,    -1,
      84,    -1,    94,    -1,    97,    -1,    98,    -1,    58,    -1,
      86,    -1,     3,    -1,    48,    96,    49,    -1,   100,    -1,
     101,    -1,   101,    47,   115,    12,   100,    -1,   102,    -1,
     101,    41,   102,    -1,   103,    -1,   102,    40,   103,    -1,
     104,    -1,   103,    45,   104,    -1,   105,    -1,   104,    46,
     105,    -1,   106,    -1,   105,    44,   106,    -1,   107,    -1,
     106,    22,   107,    -1,   108,    -1,   107,    24,   108,    -1,
     107,    26,   108,    -1,   107,    25,   108,    -1,   107,    27,
     108,    -1,   109,    -1,   108,    28,   109,    -1,   108,    29,
     109,    -1,   110,    -1,   109,    15,   110,    -1,   109,    14,
     110,    -1,   111,    -1,   110,    17,   111,    -1,   110,    16,
     111,    -1,   110,    18,   111,    -1,   112,    -1,    48,   118,
      49,   111,    -1,   113,    -1,   114,    -1,     3,    -1,     8,
      -1,    48,   115,    49,    -1,   116,    -1,   115,    11,   116,
      -1,   100,    -1,   112,   117,   116,    -1,    21,    -1,    32,
      -1,    33,    -1,    34,    -1,    30,    -1,    31,    -1,    35,
      -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,   132,
      -1,   130,    13,    -1,   130,   133,    13,    -1,    96,    -1,
      96,    21,   121,    -1,   116,    -1,    52,   122,    53,    -1,
      52,   122,    11,    53,    -1,   121,    -1,   122,    11,   121,
      -1,    52,    53,    -1,    52,   134,    53,    -1,    52,   131,
      53,    -1,    52,   131,   134,    53,    -1,   125,    -1,   126,
      -1,   123,    -1,   127,    -1,   128,    -1,   129,    -1,     3,
      12,   124,    -1,    56,    99,    12,   124,    -1,    60,    12,
     124,    -1,    13,    -1,   115,    13,    -1,    69,    48,   115,
      49,   124,    -1,    69,    48,   115,    49,   124,    63,   124,
      -1,    81,    48,   115,    49,   124,    -1,    87,    48,   115,
      49,   124,    -1,    61,   124,    87,    48,   115,    49,    13,
      -1,    67,    48,    13,    13,    49,   124,    -1,    67,    48,
      13,    13,   115,    49,   124,    -1,    67,    48,    13,   115,
      13,    49,   124,    -1,    67,    48,    13,   115,    13,   115,
      49,   124,    -1,    67,    48,   115,    13,    13,    49,   124,
      -1,    67,    48,   115,    13,    13,   115,    49,   124,    -1,
      67,    48,   115,    13,   115,    13,    49,   124,    -1,    67,
      48,   115,    13,   115,    13,   115,    49,   124,    -1,    68,
       3,    13,    -1,    59,    13,    -1,    55,    13,    -1,    75,
      13,    -1,    75,   115,    13,    -1,    92,    -1,   130,    92,
      -1,   119,    -1,   131,   119,    -1,    95,    -1,   132,    95,
      -1,   120,    -1,   133,   120,    -1,   124,    -1,   134,   124,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   105,   109,   110,   114,   115,   116,   117,
     121,   122,   123,   127,   128,   129,   130,   131,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   152,   153,   157,
     161,   162,   166,   167,   171,   175,   176,   180,   181,   185,
     186,   190,   191,   195,   196,   200,   201,   205,   206,   210,
     211,   212,   213,   214,   218,   219,   220,   224,   225,   226,
     230,   231,   232,   233,   237,   238,   242,   246,   250,   251,
     252,   256,   257,   261,   262,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   289,   307,   308,   312,
     313,   317,   318,   319,   323,   324,   328,   329,   330,   331,
     335,   336,   337,   338,   339,   340,   344,   345,   346,   350,
     351,   355,   356,   357,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   374,   375,   376,   377,   378,   382,
     383,   387,   388,   392,   393,   397,   398,   402,   403
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "NUMBER", "INTEGER",
  "FLOATING", "CHARACTER", "STRING", "PERIOD", "POINTER", "COMMA", "COLON",
  "SEMI", "MINUS", "PLUS", "DIV", "MUL", "MOD", "DPLUS", "DMINUS",
  "ASSIGN", "EQUAL", "NOTEQUAL", "LESS", "LTEQUAL", "GREATER", "GTEQUAL",
  "SHIFTL", "SHIFTR", "PLUSASN", "MINUSASN", "MULASN", "DIVASN", "MODASN",
  "SHLASN", "SHRASN", "ANDASN", "XORASN", "ORASN", "AND", "OR", "NOT",
  "COMPL", "BITAND", "BITOR", "BITXOR", "QUESTION", "LPAREN", "RPAREN",
  "LBRACKET", "RBEACKET", "LCURLY", "RCURLY", "AUTO", "BREAK", "CASE",
  "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM",
  "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT", "LONG",
  "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE",
  "WHILE", "$accept", "translation_unit", "external_declaration",
  "function_definition", "declaration_specifier",
  "storage_class_specifier", "type_specifier", "specifier_qualifier",
  "declarator", "type_qualifier", "direct_declarator",
  "constant_expression", "conditional_expression", "logical_or_expression",
  "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_expression",
  "postfix_expression", "primary_expression", "expression",
  "assignment_expression", "assignment_operator", "type_name",
  "declaration", "init_declarator", "initializer", "initializer_list",
  "compound_statement", "statement", "labeled_statement",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "declaration_specifiers", "declarations",
  "specifier_qualifiers", "init_declarators", "statements", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    90,    90,    91,    91,    91,    91,
      92,    92,    92,    93,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    95,    95,    96,
      97,    97,    98,    98,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   107,   107,   107,   108,   108,   108,   109,   109,   109,
     110,   110,   110,   110,   111,   111,   112,   113,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   119,   119,   120,
     120,   121,   121,   121,   122,   122,   123,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   125,   125,   125,   126,
     126,   127,   127,   127,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     5,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     4,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       3,     1,     3,     4,     1,     3,     2,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     1,
       2,     5,     7,     5,     5,     7,     6,     7,     7,     8,
       7,     8,     8,     9,     3,     2,     2,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    32,     0,    13,    19,    30,    24,    16,    23,    21,
      22,    14,    20,    25,    15,    17,    26,    18,    31,     0,
       2,     4,   129,    10,    11,     0,    12,    29,     5,     0,
       0,     1,     3,     0,   131,     6,     0,     0,    87,   130,
      89,   135,     0,    33,    68,    69,   109,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    35,    37,    39,    41,    43,    45,    47,    49,    54,
      57,    60,    64,    66,    67,     0,    71,   102,   137,   100,
     101,   103,   104,   105,     0,     0,    89,   132,     7,     0,
       8,     0,    88,   136,     0,    68,    27,   133,    28,     0,
       0,    86,   126,     0,    34,    64,   125,     0,     0,     0,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    79,    80,    76,    77,    78,
      81,    82,    83,    84,    85,     0,     0,   110,    98,     0,
      97,   138,     0,    91,    90,     9,   106,    70,     0,   134,
       0,   108,     0,     0,     0,   124,     0,   128,     0,     0,
      38,     0,    40,    42,    44,    46,    48,    50,    52,    51,
      53,    55,    56,    59,    58,    62,    61,    63,    74,    72,
      99,    94,     0,    65,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,   111,   113,   114,    36,    93,    95,     0,   116,     0,
       0,     0,     0,     0,     0,     0,   115,   117,   118,     0,
     120,     0,     0,     0,   112,   119,   121,   122,     0,   123
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    24,    97,    25,    26,
      27,   103,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,   145,
     100,    34,    41,   154,   192,    77,    78,    79,    80,    81,
      82,    83,    36,    37,   101,    42,    85
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -142
static const yytype_int16 yypact[] =
{
     432,  -142,    46,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,    56,
    -142,  -142,  -142,  -142,  -142,   467,  -142,  -142,  -142,   399,
     -37,  -142,  -142,   136,  -142,  -142,   399,   467,  -142,  -142,
     338,  -142,    24,  -142,     8,  -142,  -142,   243,  -142,    12,
      15,    20,    30,   373,    -9,    42,    72,    18,    75,    83,
    -142,   -25,   110,   118,     6,   111,   112,   215,   130,   221,
     231,  -142,   554,  -142,  -142,    90,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,   211,   286,   153,  -142,  -142,    47,
    -142,   467,  -142,  -142,   373,  -142,  -142,  -142,  -142,    -1,
     133,   497,  -142,   165,  -142,  -142,  -142,   373,   141,    21,
     186,    15,  -142,    95,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,    15,    15,  -142,  -142,   310,
    -142,  -142,    47,  -142,  -142,  -142,  -142,  -142,    15,  -142,
     373,  -142,   182,    27,    98,  -142,     4,  -142,    87,    94,
     110,   241,   118,     6,   111,   112,   215,   130,   130,   130,
     130,   221,   221,   231,   231,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,    -6,  -142,  -142,    15,   122,   113,    89,   373,
     373,   373,    15,   109,  -142,   134,   373,   157,   178,   226,
     162,   180,  -142,  -142,  -142,  -142,  -142,   232,  -142,   373,
     373,   176,   373,   189,   254,   373,  -142,  -142,  -142,   373,
    -142,   373,   373,   205,  -142,  -142,  -142,  -142,   373,  -142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,   262,  -142,     7,  -142,   -41,   184,   208,   -40,
    -142,  -142,   -46,  -142,   188,   190,   187,   191,   195,   185,
     207,   128,   131,   100,   -42,  -142,  -142,   -44,   -88,  -142,
    -142,     9,   268,  -141,  -142,   -23,   -53,  -142,  -142,  -142,
    -142,  -142,    19,    11,  -142,  -142,   228
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     108,   153,    35,    99,   104,   203,    96,    98,   105,    28,
     146,   191,    43,   113,    88,   146,   116,    90,    95,    29,
      94,    95,   117,    45,    95,   102,    45,     1,    28,    45,
      95,   112,   151,   106,   163,    45,    39,    92,    29,   109,
     196,   156,   107,    39,    84,   110,    87,   204,   157,     1,
      95,    91,   120,   199,   161,    45,    31,   188,   189,     1,
      96,    98,   216,    47,   153,   164,    47,   166,   155,    47,
     168,   169,     2,   171,   105,    47,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,    95,    87,     2,    47,   151,    45,   146,   152,
      87,   146,   209,   147,     2,   146,   146,   194,   167,   146,
       3,   198,    95,     4,     5,   153,   105,    45,     6,   197,
     111,     7,     8,   114,   146,    95,   208,     9,    10,    11,
      45,   115,    12,    13,   122,    14,   200,    47,    15,    44,
      16,    17,    18,   201,    45,   146,   211,   212,   213,    46,
     118,   205,   207,   218,   210,   121,   214,    47,   127,   128,
     105,   152,   215,   119,   221,   223,   227,   228,   146,   230,
      47,   206,   234,   146,    89,   224,   235,   160,   236,   237,
     233,    95,   158,   217,    47,   239,    45,   146,    33,    48,
       3,    49,    50,     4,     5,    51,    52,    53,     6,   165,
     146,     7,     8,    54,    55,    56,   219,     9,    10,    11,
      30,    57,    12,    13,    44,    14,   146,    58,    15,    45,
      16,    17,    18,    59,    46,   229,    47,   220,   162,    95,
     195,   185,   186,   187,    45,   129,   130,    40,   231,   123,
     124,   125,   126,   225,    86,   226,    95,   131,   132,   133,
      86,    45,   146,   202,   238,   181,   182,    95,   193,    47,
     183,   184,    45,    33,   148,     3,    49,    50,     4,     5,
      51,    52,    53,     6,    47,   222,     7,     8,    54,    55,
      56,    32,     9,    10,    11,   159,    57,    12,    13,    44,
      14,    47,    58,    15,    45,    16,    17,    18,    59,    46,
       4,     5,    47,   232,   170,     6,   173,   176,   172,     8,
      93,   174,   149,    44,     9,    10,   175,     0,    45,    12,
      13,     0,     0,    46,     0,     0,     0,    16,    17,    18,
     177,   178,   179,   180,    47,     0,     0,     0,    33,   150,
       0,    49,    50,     0,     0,    51,    52,    53,     0,     0,
       0,     0,     0,    54,    55,    56,     0,     0,    47,    89,
       0,    57,    33,   190,     0,    49,    50,    58,     0,    51,
      52,    53,     0,    59,     0,     0,    44,    54,    55,    56,
       0,    45,     0,     0,     0,    57,    46,     0,     0,     0,
      33,    58,     3,     0,     0,     4,     5,    59,     0,     0,
       6,     0,     1,     7,     8,     0,     0,     0,     0,     9,
      10,    11,    38,     0,    12,    13,     0,    14,     0,     0,
      15,    47,    16,    17,    18,    33,     0,     0,    49,    50,
       0,     0,    51,    52,    53,     1,     0,     0,     0,     0,
      54,    55,    56,     0,     0,     0,     0,     2,    57,     0,
       0,     0,     0,     3,    58,     0,     4,     5,     0,     0,
      59,     6,     0,     0,     7,     8,     0,     0,     0,     0,
       9,    10,    11,     0,     0,    12,    13,     0,    14,     0,
       2,    15,     0,    16,    17,    18,     3,     0,     0,     4,
       5,     0,     0,     0,     6,     0,     0,     7,     8,     0,
       0,     0,     0,     9,    10,    11,     0,     0,    12,    13,
       0,    14,     0,     0,    15,     0,    16,    17,    18,    33,
       0,     3,     0,     0,     4,     5,     0,     0,     0,     6,
       0,     0,     7,     8,     0,     0,     0,     0,     9,    10,
      11,     0,     0,    12,    13,     0,    14,     0,     0,    15,
       0,    16,    17,    18,     4,     5,     0,     0,     0,     6,
       0,     0,     0,     8,     0,     0,     0,     0,     9,    10,
       0,     0,     0,    12,    13,   134,     0,     0,     0,     0,
       0,    16,    17,    18,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144
};

static const yytype_int16 yycheck[] =
{
      53,    89,    25,    47,    50,    11,    47,    47,    50,     0,
      11,   152,    49,    57,    37,    11,    41,    40,     3,     0,
      12,     3,    47,     8,     3,    13,     8,     3,    19,     8,
       3,    13,    85,    13,    13,     8,    29,    13,    19,    48,
      13,    94,    12,    36,    33,     3,    37,    53,    49,     3,
       3,    40,    46,    49,   107,     8,     0,   145,   146,     3,
     101,   101,   203,    48,   152,   109,    48,   111,    91,    48,
     114,   115,    48,   117,   116,    48,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,     3,    84,    48,    48,   149,     8,    11,    52,
      91,    11,    13,    13,    48,    11,    11,   160,    13,    11,
      54,    13,     3,    57,    58,   203,   158,     8,    62,   163,
      48,    65,    66,    48,    11,     3,    13,    71,    72,    73,
       8,    48,    76,    77,    22,    79,    49,    48,    82,     3,
      84,    85,    86,    49,     8,    11,   199,   200,   201,    13,
      40,   195,   196,   206,   198,    44,   202,    48,    28,    29,
     202,    52,    53,    45,   208,   209,   219,   220,    11,   222,
      48,    49,   225,    11,    21,    13,   229,    12,   231,   232,
     224,     3,    49,    49,    48,   238,     8,    11,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    13,
      11,    65,    66,    67,    68,    69,    49,    71,    72,    73,
       2,    75,    76,    77,     3,    79,    11,    81,    82,     8,
      84,    85,    86,    87,    13,    49,    48,    49,    87,     3,
      48,   131,   132,   133,     8,    14,    15,    29,    49,    24,
      25,    26,    27,    63,    36,    13,     3,    16,    17,    18,
      42,     8,    11,    12,    49,   127,   128,     3,   158,    48,
     129,   130,     8,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    48,    49,    65,    66,    67,    68,
      69,    19,    71,    72,    73,   101,    75,    76,    77,     3,
      79,    48,    81,    82,     8,    84,    85,    86,    87,    13,
      57,    58,    48,    49,   116,    62,   119,   122,   118,    66,
      42,   120,    84,     3,    71,    72,   121,    -1,     8,    76,
      77,    -1,    -1,    13,    -1,    -1,    -1,    84,    85,    86,
     123,   124,   125,   126,    48,    -1,    -1,    -1,    52,    53,
      -1,    55,    56,    -1,    -1,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    48,    21,
      -1,    75,    52,    53,    -1,    55,    56,    81,    -1,    59,
      60,    61,    -1,    87,    -1,    -1,     3,    67,    68,    69,
      -1,     8,    -1,    -1,    -1,    75,    13,    -1,    -1,    -1,
      52,    81,    54,    -1,    -1,    57,    58,    87,    -1,    -1,
      62,    -1,     3,    65,    66,    -1,    -1,    -1,    -1,    71,
      72,    73,    13,    -1,    76,    77,    -1,    79,    -1,    -1,
      82,    48,    84,    85,    86,    52,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    61,     3,    -1,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    48,    75,    -1,
      -1,    -1,    -1,    54,    81,    -1,    57,    58,    -1,    -1,
      87,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    -1,    -1,    76,    77,    -1,    79,    -1,
      48,    82,    -1,    84,    85,    86,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,    -1,    76,    77,
      -1,    79,    -1,    -1,    82,    -1,    84,    85,    86,    52,
      -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    -1,    -1,    76,    77,    -1,    79,    -1,    -1,    82,
      -1,    84,    85,    86,    57,    58,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    76,    77,    21,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    48,    54,    57,    58,    62,    65,    66,    71,
      72,    73,    76,    77,    79,    82,    84,    85,    86,    89,
      90,    91,    92,    93,    94,    96,    97,    98,   119,   130,
      96,     0,    90,    52,   119,   123,   130,   131,    13,    92,
      96,   120,   133,    49,     3,     8,    13,    48,    53,    55,
      56,    59,    60,    61,    67,    68,    69,    75,    81,    87,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   123,   124,   125,
     126,   127,   128,   129,   131,   134,    96,   119,   123,    21,
     123,   131,    13,   120,    12,     3,    94,    95,    97,   115,
     118,   132,    13,    99,   100,   112,    13,    12,   124,    48,
       3,    48,    13,   115,    48,    48,    41,    47,    40,    45,
      46,    44,    22,    24,    25,    26,    27,    28,    29,    14,
      15,    16,    17,    18,    21,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   117,    11,    13,    53,   134,
      53,   124,    52,   116,   121,   123,   124,    49,    49,    95,
      12,   124,    87,    13,   115,    13,   115,    13,   115,   115,
     102,   115,   103,   104,   105,   106,   107,   108,   108,   108,
     108,   109,   109,   110,   110,   111,   111,   111,   116,   116,
      53,   121,   122,   111,   124,    48,    13,   115,    13,    49,
      49,    49,    12,    11,    53,   115,    49,   115,    13,    13,
     115,   124,   124,   124,   100,    53,   121,    49,   124,    49,
      49,   115,    49,   115,    13,    63,    13,   124,   124,    49,
     124,    49,    49,   115,   124,   124,   124,   124,    49,   124
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1720 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 405 "parser.y"


/**************************************************
                    Epilogue
**************************************************/

main(int argc, char *argv[]) {

    extern FILE *yyin;

    yyin = fopen(argv[0], "r");
    yydebug = 1;
    yyparse();
    return 0;
}

yyerror(char *e) {

    printf("%s\n", e);
    exit(0);
}
