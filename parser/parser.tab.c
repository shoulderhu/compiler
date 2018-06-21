
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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 201 "parser.tab.c"

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
#define YYLAST   618

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNRULES -- Number of states.  */
#define YYNSTATES  240

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

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
      75,    76,    77,    78,    79,    80
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
static const yytype_int8 yyrhs[] =
{
      82,     0,    -1,    83,    -1,    82,    83,    -1,    84,    -1,
     112,    -1,    89,   116,    -1,    89,   124,   116,    -1,   123,
      89,   116,    -1,   123,    89,   124,   116,    -1,    86,    -1,
      87,    -1,    90,    -1,    47,    -1,    66,    -1,    72,    -1,
      58,    -1,    75,    -1,    78,    -1,    50,    -1,    69,    -1,
      64,    -1,    65,    -1,    59,    -1,    55,    -1,    70,    -1,
      77,    -1,    87,    -1,    90,    -1,    91,    -1,    51,    -1,
      79,    -1,     3,    -1,    41,    89,    42,    -1,    93,    -1,
      94,    -1,    94,    40,   108,     7,    93,    -1,    95,    -1,
      94,    34,    95,    -1,    96,    -1,    95,    33,    96,    -1,
      97,    -1,    96,    38,    97,    -1,    98,    -1,    97,    39,
      98,    -1,    99,    -1,    98,    37,    99,    -1,   100,    -1,
      99,    15,   100,    -1,   101,    -1,   100,    17,   101,    -1,
     100,    19,   101,    -1,   100,    18,   101,    -1,   100,    20,
     101,    -1,   102,    -1,   101,    21,   102,    -1,   101,    22,
     102,    -1,   103,    -1,   102,    10,   103,    -1,   102,     9,
     103,    -1,   104,    -1,   103,    12,   104,    -1,   103,    11,
     104,    -1,   103,    13,   104,    -1,   105,    -1,    41,   111,
      42,   104,    -1,   106,    -1,   107,    -1,     3,    -1,     5,
      -1,    41,   108,    42,    -1,   109,    -1,   108,     6,   109,
      -1,    93,    -1,   105,   110,   109,    -1,    14,    -1,    25,
      -1,    26,    -1,    27,    -1,    23,    -1,    24,    -1,    28,
      -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,   125,
      -1,   123,     8,    -1,   123,   126,     8,    -1,    89,    -1,
      89,    14,   114,    -1,   109,    -1,    45,   115,    46,    -1,
      45,   115,     6,    46,    -1,   114,    -1,   115,     6,   114,
      -1,    45,    46,    -1,    45,   127,    46,    -1,    45,   124,
      46,    -1,    45,   124,   127,    46,    -1,   118,    -1,   119,
      -1,   116,    -1,   120,    -1,   121,    -1,   122,    -1,     3,
       7,   117,    -1,    49,    92,     7,   117,    -1,    53,     7,
     117,    -1,     8,    -1,   108,     8,    -1,    62,    41,   108,
      42,   117,    -1,    62,    41,   108,    42,   117,    56,   117,
      -1,    74,    41,   108,    42,   117,    -1,    80,    41,   108,
      42,   117,    -1,    54,   117,    80,    41,   108,    42,     8,
      -1,    60,    41,     8,     8,    42,   117,    -1,    60,    41,
       8,     8,   108,    42,   117,    -1,    60,    41,     8,   108,
       8,    42,   117,    -1,    60,    41,     8,   108,     8,   108,
      42,   117,    -1,    60,    41,   108,     8,     8,    42,   117,
      -1,    60,    41,   108,     8,     8,   108,    42,   117,    -1,
      60,    41,   108,     8,   108,     8,    42,   117,    -1,    60,
      41,   108,     8,   108,     8,   108,    42,   117,    -1,    61,
       3,     8,    -1,    52,     8,    -1,    48,     8,    -1,    68,
       8,    -1,    68,   108,     8,    -1,    85,    -1,    85,   123,
      -1,   112,    -1,   124,   112,    -1,    88,    -1,    88,   125,
      -1,   113,    -1,   113,   126,    -1,   117,    -1,   127,   117,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,    98,   102,   103,   107,   108,   109,   110,
     114,   115,   116,   120,   121,   122,   123,   124,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   145,   146,   150,
     154,   155,   159,   160,   164,   168,   169,   173,   174,   178,
     179,   183,   184,   188,   189,   193,   194,   198,   199,   203,
     204,   205,   206,   207,   211,   212,   213,   217,   218,   219,
     223,   224,   225,   226,   230,   231,   235,   239,   243,   244,
     245,   249,   250,   254,   255,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   282,   300,   301,   305,
     306,   310,   311,   312,   316,   317,   321,   322,   323,   324,
     328,   329,   330,   331,   332,   333,   337,   338,   339,   343,
     344,   348,   349,   350,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   367,   368,   369,   370,   371,   375,
     376,   380,   381,   385,   386,   390,   391,   395,   396
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "NUMBER", "STRING",
  "COMMA", "COLON", "SEMI", "MINUS", "PLUS", "DIV", "MUL", "MOD", "ASSIGN",
  "EQUAL", "NOTEQUAL", "LESS", "LTEQUAL", "GREATER", "GTEQUAL", "SHIFTL",
  "SHIFTR", "PLUSASN", "MINUSASN", "MULASN", "DIVASN", "MODASN", "SHLASN",
  "SHRASN", "ANDASN", "XORASN", "ORASN", "AND", "OR", "NOT", "COMPL",
  "BITAND", "BITOR", "BITXOR", "QUESTION", "LPAREN", "RPAREN", "LBRACKET",
  "RBEACKET", "LCURLY", "RCURLY", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "$accept",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_specifier", "storage_class_specifier", "type_specifier",
  "specifier_qualifier", "declarator", "type_qualifier",
  "direct_declarator", "constant_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "postfix_expression", "primary_expression",
  "expression", "assignment_expression", "assignment_operator",
  "type_name", "declaration", "init_declarator", "initializer",
  "initializer_list", "compound_statement", "statement",
  "labeled_statement", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "declaration_specifiers",
  "declarations", "specifier_qualifiers", "init_declarators", "statements", 0
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
     335
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    83,    83,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    86,    86,    86,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    88,    89,
      90,    90,    91,    91,    92,    93,    93,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     100,   100,   100,   100,   101,   101,   101,   102,   102,   102,
     103,   103,   103,   103,   104,   104,   105,   106,   107,   107,
     107,   108,   108,   109,   109,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   112,   112,   113,
     113,   114,   114,   114,   115,   115,   116,   116,   116,   116,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   119,
     119,   120,   120,   120,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   122,   122,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   126,   126,   127,   127
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
       0,     1,     3,   130,     0,   131,     6,     0,     0,    87,
      89,   135,     0,    33,    68,    69,   109,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    35,    37,    39,    41,    43,    45,    47,    49,    54,
      57,    60,    64,    66,    67,     0,    71,   102,   137,   100,
     101,   103,   104,   105,     0,     0,    89,   132,     7,     0,
       8,     0,   136,    88,     0,    68,    27,   133,    28,     0,
       0,    86,   126,     0,    34,    64,   125,     0,     0,     0,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    79,    80,    76,    77,    78,
      81,    82,    83,    84,    85,     0,     0,   110,    98,     0,
      97,   138,     0,    91,    90,     9,   106,   134,    70,     0,
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
     100,    35,    41,   154,   192,    77,    78,    79,    80,    81,
      82,    83,    37,    38,   101,    42,    85
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -148
static const yytype_int16 yypact[] =
{
     401,  -148,    21,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,    63,
    -148,  -148,   539,  -148,  -148,   506,  -148,  -148,  -148,     4,
     -20,  -148,  -148,  -148,   154,  -148,  -148,     4,   506,  -148,
     471,    21,    22,  -148,    36,  -148,  -148,   436,  -148,    41,
     120,    87,    95,   375,    75,   117,    90,    18,   108,   136,
    -148,    10,    73,   160,   172,   184,   220,   170,    76,    25,
     171,  -148,   230,  -148,  -148,    12,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,   222,   290,   225,  -148,  -148,    89,
    -148,   506,  -148,  -148,   375,  -148,  -148,   322,  -148,    13,
     199,  -148,  -148,   236,  -148,  -148,  -148,   375,   165,    28,
     238,   120,  -148,    19,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,   120,   120,  -148,  -148,   314,
    -148,  -148,    89,  -148,  -148,  -148,  -148,  -148,  -148,   120,
     375,  -148,   207,    34,    32,  -148,    66,  -148,   103,   131,
      73,   186,   160,   172,   184,   220,   170,    76,    76,    76,
      76,    25,    25,   171,   171,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,     0,  -148,  -148,   120,    11,   118,   244,   375,
     375,   375,   120,    98,  -148,   144,   375,   149,   237,   304,
     162,   194,  -148,  -148,  -148,  -148,  -148,   243,  -148,   375,
     375,   152,   375,   168,   307,   375,  -148,  -148,  -148,   375,
    -148,   375,   375,   175,  -148,  -148,  -148,  -148,   375,  -148
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,   246,  -148,  -148,  -148,   -37,  -148,   134,   -36,
    -148,  -148,   -46,  -148,   150,   190,   192,   169,   193,   191,
     180,   -16,    67,   105,   -42,  -148,  -148,   -44,   -88,  -148,
    -148,     9,  -148,  -147,  -148,   -23,   -53,  -148,  -148,  -148,
    -148,  -148,    29,    65,   218,   275,   234
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     108,   153,    36,    99,   104,   191,   203,     1,   105,    28,
      96,    98,    39,   113,    95,    88,    45,    90,   146,   146,
     147,    95,    43,    45,     1,   146,   112,   167,    28,    29,
      93,    95,   151,    45,   129,   130,   163,    95,   146,    45,
     198,   156,   196,    94,   116,     2,   204,    87,    29,   102,
     117,    33,    47,   206,   161,   158,   216,   188,   189,    47,
      96,    98,     2,    31,   153,   164,     1,   166,   155,    47,
     168,   169,   146,   171,   105,    47,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,    95,    87,    45,   106,   151,   127,   128,    84,
      87,    95,   107,    45,     2,    91,   118,   194,   199,   146,
       3,   181,   182,     4,     5,   153,   109,   105,     6,   197,
     110,     7,     8,    95,   146,    45,   208,     9,    10,    11,
      47,   111,    12,    13,   152,    14,    30,   146,    15,    47,
      16,    17,    18,   152,   215,   200,   211,   212,   213,   114,
     146,   205,   207,   218,   210,   146,   214,    44,   146,    45,
     105,    47,    46,    40,   221,   223,   227,   228,   146,   230,
     224,    86,   234,   201,   146,    86,   235,   115,   236,   237,
     233,   146,   131,   132,   133,   239,   217,   123,   124,   125,
     126,   219,   146,   202,   229,    47,   183,   184,   119,    34,
      48,     3,    49,    50,     4,     5,    51,    52,    53,     6,
     231,   120,     7,     8,    54,    55,    56,   238,     9,    10,
      11,   121,    57,    12,    13,    44,    14,    45,    58,    15,
      46,    16,    17,    18,    59,   122,   185,   186,   187,    89,
      95,   159,    45,   160,   134,   162,   165,    95,   195,    45,
     225,   226,   209,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,    47,   193,    32,   170,    34,   148,     3,
      49,    50,     4,     5,    51,    52,    53,     6,    47,   220,
       7,     8,    54,    55,    56,    47,     9,    10,    11,   174,
      57,    12,    13,    44,    14,    45,    58,    15,    46,    16,
      17,    18,    59,   177,   178,   179,   180,    95,   172,    45,
      95,   173,    45,   176,   175,   157,    92,    44,   149,    45,
       0,     0,    46,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,    34,   150,     0,    49,    50,
       0,     0,    51,    52,    53,    47,   222,     0,    47,   232,
      54,    55,    56,     0,     0,    47,     0,     0,    57,    34,
     190,     0,    49,    50,    58,     0,    51,    52,    53,     0,
      59,     0,     4,     5,    54,    55,    56,     6,    44,     0,
      45,     8,    57,    46,     0,     0,     9,    10,    58,     0,
       0,    12,    13,     0,    59,     0,     0,     0,     0,    16,
      17,    18,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
      34,     0,     0,    49,    50,     0,     0,    51,    52,    53,
       0,     0,     0,     0,     0,    54,    55,    56,     0,    95,
       0,    45,     2,    57,     0,     0,     0,     0,     3,    58,
       0,     4,     5,     0,     0,    59,     6,     0,     0,     7,
       8,     0,     0,     0,     0,     9,    10,    11,     0,     0,
      12,    13,     0,    14,     0,     0,    15,    47,    16,    17,
      18,     0,     0,     0,     0,    89,     4,     5,     0,     0,
       0,     6,     0,     0,     0,     8,     0,     0,     0,     0,
       9,    10,     0,     0,     0,    12,    13,     0,     0,     0,
       0,     0,     0,    16,    17,    18,    34,     0,     3,     0,
       0,     4,     5,     0,     0,     0,     6,     0,     0,     7,
       8,     0,     0,     0,     0,     9,    10,    11,     0,     0,
      12,    13,     0,    14,     0,     0,    15,     0,    16,    17,
      18,    34,     0,     3,     0,     0,     4,     5,     0,     0,
       0,     6,     0,     0,     7,     8,     0,     0,     0,     0,
       9,    10,    11,     0,     0,    12,    13,     0,    14,     0,
       0,    15,     0,    16,    17,    18,     3,     0,     0,     4,
       5,     0,     0,     0,     6,     0,     0,     7,     8,     0,
       0,     0,     0,     9,    10,    11,     0,     0,    12,    13,
       0,    14,     0,     0,    15,     0,    16,    17,    18
};

static const yytype_int16 yycheck[] =
{
      53,    89,    25,    47,    50,   152,     6,     3,    50,     0,
      47,    47,     8,    57,     3,    38,     5,    40,     6,     6,
       8,     3,    42,     5,     3,     6,     8,     8,    19,     0,
       8,     3,    85,     5,     9,    10,     8,     3,     6,     5,
       8,    94,     8,     7,    34,    41,    46,    38,    19,     8,
      40,    22,    41,    42,   107,    42,   203,   145,   146,    41,
      97,    97,    41,     0,   152,   109,     3,   111,    91,    41,
     114,   115,     6,   117,   116,    41,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,     3,    84,     5,     8,   149,    21,    22,    34,
      91,     3,     7,     5,    41,    40,    33,   160,    42,     6,
      47,   127,   128,    50,    51,   203,    41,   159,    55,   163,
       3,    58,    59,     3,     6,     5,     8,    64,    65,    66,
      41,    41,    69,    70,    45,    72,     2,     6,    75,    41,
      77,    78,    79,    45,    46,    42,   199,   200,   201,    41,
       6,   195,   196,   206,   198,     6,   202,     3,     6,     5,
     202,    41,     8,    29,   208,   209,   219,   220,     6,   222,
       8,    37,   225,    42,     6,    41,   229,    41,   231,   232,
     224,     6,    11,    12,    13,   238,    42,    17,    18,    19,
      20,    42,     6,     7,    42,    41,   129,   130,    38,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      42,    39,    58,    59,    60,    61,    62,    42,    64,    65,
      66,    37,    68,    69,    70,     3,    72,     5,    74,    75,
       8,    77,    78,    79,    80,    15,   131,   132,   133,    14,
       3,    42,     5,     7,    14,    80,     8,     3,    41,     5,
      56,     8,     8,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    41,   159,    19,   116,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    41,    42,
      58,    59,    60,    61,    62,    41,    64,    65,    66,   120,
      68,    69,    70,     3,    72,     5,    74,    75,     8,    77,
      78,    79,    80,   123,   124,   125,   126,     3,   118,     5,
       3,   119,     5,   122,   121,    97,    41,     3,    84,     5,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    48,    49,
      -1,    -1,    52,    53,    54,    41,    42,    -1,    41,    42,
      60,    61,    62,    -1,    -1,    41,    -1,    -1,    68,    45,
      46,    -1,    48,    49,    74,    -1,    52,    53,    54,    -1,
      80,    -1,    50,    51,    60,    61,    62,    55,     3,    -1,
       5,    59,    68,     8,    -1,    -1,    64,    65,    74,    -1,
      -1,    69,    70,    -1,    80,    -1,    -1,    -1,    -1,    77,
      78,    79,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    -1,    -1,    48,    49,    -1,    -1,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,     3,
      -1,     5,    41,    68,    -1,    -1,    -1,    -1,    47,    74,
      -1,    50,    51,    -1,    -1,    80,    55,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,
      69,    70,    -1,    72,    -1,    -1,    75,    41,    77,    78,
      79,    -1,    -1,    -1,    -1,    14,    50,    51,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      64,    65,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    45,    -1,    47,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,
      69,    70,    -1,    72,    -1,    -1,    75,    -1,    77,    78,
      79,    45,    -1,    47,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    69,    70,    -1,    72,    -1,
      -1,    75,    -1,    77,    78,    79,    47,    -1,    -1,    50,
      51,    -1,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    -1,    -1,    64,    65,    66,    -1,    -1,    69,    70,
      -1,    72,    -1,    -1,    75,    -1,    77,    78,    79
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    41,    47,    50,    51,    55,    58,    59,    64,
      65,    66,    69,    70,    72,    75,    77,    78,    79,    82,
      83,    84,    85,    86,    87,    89,    90,    91,   112,   123,
      89,     0,    83,   123,    45,   112,   116,   123,   124,     8,
      89,   113,   126,    42,     3,     5,     8,    41,    46,    48,
      49,    52,    53,    54,    60,    61,    62,    68,    74,    80,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   116,   117,   118,
     119,   120,   121,   122,   124,   127,    89,   112,   116,    14,
     116,   124,   126,     8,     7,     3,    87,    88,    90,   108,
     111,   125,     8,    92,    93,   105,     8,     7,   117,    41,
       3,    41,     8,   108,    41,    41,    34,    40,    33,    38,
      39,    37,    15,    17,    18,    19,    20,    21,    22,     9,
      10,    11,    12,    13,    14,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   110,     6,     8,    46,   127,
      46,   117,    45,   109,   114,   116,   117,   125,    42,    42,
       7,   117,    80,     8,   108,     8,   108,     8,   108,   108,
      95,   108,    96,    97,    98,    99,   100,   101,   101,   101,
     101,   102,   102,   103,   103,   104,   104,   104,   109,   109,
      46,   114,   115,   104,   117,    41,     8,   108,     8,    42,
      42,    42,     7,     6,    46,   108,    42,   108,     8,     8,
     108,   117,   117,   117,    93,    46,   114,    42,   117,    42,
      42,   108,    42,   108,     8,    56,     8,   117,   117,    42,
     117,    42,    42,   108,   117,   117,   117,   117,    42,   117
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
#line 1714 "parser.tab.c"
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
#line 398 "parser.y"


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
