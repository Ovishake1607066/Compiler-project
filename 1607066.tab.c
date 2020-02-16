
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
#line 1 "1607066.y"

	#include<stdio.h>
	#include <math.h>
	#include <string.h>
	#include<stdlib.h>
	#define max_value 10000000
	int c1=1,c2=1,ans=0,temp=0;
	struct st {
    	char *str;
    	int n;
	};
	struct st first[max_value];
	struct st second[max_value];


/* Line 189 of yacc.c  */
#line 89 "1607066.tab.c"

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
     NUM = 258,
     VAR = 259,
     GO = 260,
     IF = 261,
     ELIF = 262,
     ELSE = 263,
     GCD = 264,
     LCM = 265,
     SQUARE = 266,
     SQUAREROOT = 267,
     MAX = 268,
     MIN = 269,
     ABS = 270,
     FUNCTION = 271,
     INT = 272,
     FLOAT = 273,
     CHAR = 274,
     POWER = 275,
     FACTORIAL = 276,
     FOR = 277,
     COL = 278,
     WHILE = 279,
     BREAK = 280,
     DEFAULT = 281,
     SWITCH = 282,
     INC = 283,
     DEC = 284,
     NOT = 285,
     GREAT = 286,
     LESS = 287,
     IFX = 288,
     ELIFX = 289
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 16 "1607066.y"

        int number;
        char *string;



/* Line 214 of yacc.c  */
#line 166 "1607066.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 178 "1607066.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   327

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNRULES -- Number of states.  */
#define YYNSTATES  147

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      39,    40,    37,    35,    44,    36,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,    45,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    17,    21,    23,    25,
      27,    31,    33,    37,    39,    45,    48,    56,    64,    70,
      78,    86,    91,    98,   110,   128,   139,   146,   154,   156,
     159,   160,   163,   168,   173,   175,   177,   181,   185,   189,
     193,   198,   201,   204,   207,   210,   214,   218,   222,   225,
     228,   231,   233
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,     5,    39,    40,    41,    48,    42,    -1,
      -1,    48,    52,    -1,    48,    49,    -1,    50,    51,    43,
      -1,    17,    -1,    18,    -1,    19,    -1,    51,    44,     4,
      -1,     4,    -1,     4,    45,     3,    -1,    43,    -1,    27,
      58,    41,    53,    42,    -1,    57,    43,    -1,     4,    45,
       9,     3,    44,     3,    43,    -1,     4,    45,    10,     3,
      44,     3,    43,    -1,     4,    45,    11,     3,    43,    -1,
       4,    45,    13,     3,    44,     3,    43,    -1,     4,    45,
      14,     3,    44,     3,    43,    -1,     4,    45,    57,    43,
      -1,     6,    57,    41,    57,    43,    42,    -1,     6,    57,
      41,    57,    43,    42,     8,    41,    57,    43,    42,    -1,
       6,    57,    41,    57,    43,    42,     7,    57,    41,    57,
      43,    42,     8,    41,    57,    43,    42,    -1,    22,    39,
       3,    44,     3,    44,     3,    40,    41,    42,    -1,    24,
      39,     3,    40,    41,    42,    -1,    16,    50,    39,     3,
      44,     3,    40,    -1,    54,    -1,    54,    56,    -1,    -1,
      54,    55,    -1,     3,    23,    57,    43,    -1,    26,    23,
      57,    43,    -1,     3,    -1,     4,    -1,    57,    35,    57,
      -1,    57,    36,    57,    -1,    57,    37,    57,    -1,    57,
      38,    57,    -1,    20,    57,    44,    57,    -1,    11,    57,
      -1,    12,    57,    -1,    15,    57,    -1,    21,    57,    -1,
      57,    32,    57,    -1,    57,    31,    57,    -1,    39,    57,
      40,    -1,    57,    28,    -1,    57,    29,    -1,    57,    30,
      -1,     3,    -1,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    36,    37,    38,    40,    42,    43,    44,
      46,    57,    68,    82,    83,    84,    85,   110,   136,   157,
     181,   205,   225,   236,   247,   261,   268,   276,   282,   283,
     286,   287,   290,   300,   309,   311,   313,   315,   317,   319,
     329,   334,   338,   342,   350,   360,   362,   364,   366,   368,
     370,   382,   384
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "GO", "IF", "ELIF", "ELSE",
  "GCD", "LCM", "SQUARE", "SQUAREROOT", "MAX", "MIN", "ABS", "FUNCTION",
  "INT", "FLOAT", "CHAR", "POWER", "FACTORIAL", "FOR", "COL", "WHILE",
  "BREAK", "DEFAULT", "SWITCH", "INC", "DEC", "NOT", "GREAT", "LESS",
  "IFX", "ELIFX", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'{'", "'}'",
  "';'", "','", "'='", "$accept", "start", "main", "declare", "TYPE",
  "ID1", "statement", "BASE", "Bas", "Cs", "Dflt", "expression",
  "switch_expression", 0
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
     285,   286,   287,   288,   289,    43,    45,    42,    47,    40,
      41,   123,   125,    59,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    49,    50,    50,    50,
      51,    51,    51,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    53,    53,
      54,    54,    55,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    58
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     2,     3,     1,     1,     1,
       3,     1,     3,     1,     5,     2,     7,     7,     5,     7,
       7,     4,     6,    11,    17,    10,     6,     7,     1,     2,
       0,     2,     4,     4,     1,     1,     3,     3,     3,     3,
       4,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,    34,    35,
       0,     0,     0,     0,     0,     7,     8,     9,     0,     0,
       0,     0,     0,     0,     2,    13,     5,     0,     4,     0,
       0,    35,     0,    41,    42,    43,     0,     0,    44,     0,
       0,    51,    52,     0,     0,    11,     0,    48,    49,    50,
       0,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    47,
       0,     6,     0,    46,    45,    36,    37,    38,    39,     0,
       0,    34,     0,     0,    21,     0,     0,    40,     0,     0,
       0,    28,    12,    10,     0,     0,    18,     0,     0,     0,
       0,     0,     0,    14,     0,     0,    31,    29,     0,     0,
       0,     0,    22,     0,     0,    26,     0,     0,    16,    17,
      19,    20,     0,     0,    27,     0,     0,     0,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,    25,     0,
      23,     0,     0,     0,     0,     0,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    26,    27,    46,    28,    90,    91,   106,
     107,    33,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -36
static const yytype_int16 yypact[] =
{
      -3,   -35,     7,    -5,   -36,    12,   -36,    48,   -36,    26,
      73,    73,    73,    73,    -4,   -36,   -36,   -36,    73,    73,
      -1,    34,    18,    73,   -36,   -36,   -36,    53,   -36,   120,
      16,   -36,   248,   289,   289,   289,    35,   109,    50,    78,
      79,   -36,   -36,    42,   276,    41,     6,   -36,   -36,   -36,
      73,    73,    73,    73,    73,    73,   -36,    86,    89,    93,
      92,    95,   136,    73,    96,    73,    56,    61,   -36,   -36,
      99,   -36,   102,     4,     4,   -20,   -20,    50,    50,    59,
      63,    68,    72,    74,   -36,   152,    75,   289,   114,    80,
      81,    -2,   -36,   -36,   117,   121,   -36,   122,   124,    87,
     125,    90,    88,   -36,   108,   110,   -36,   -36,   100,   111,
     116,   118,    54,   129,   132,   -36,    73,    73,   -36,   -36,
     -36,   -36,    73,   101,   -36,   130,   168,   184,   262,    73,
     119,   -36,   -36,    73,   200,   133,   216,   134,   -36,   135,
     -36,   154,   137,    73,   232,   143,   -36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -36,   -36,   -36,   -36,   172,   -36,   -36,   -36,   -36,   -36,
     -36,    -7,   -36
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      29,   104,     1,    32,     3,    34,    35,     4,    47,    48,
      49,    37,    38,    15,    16,    17,    44,    54,    55,     8,
      31,    41,    42,    62,   105,    57,    58,    59,    12,    60,
      61,    13,    47,    48,    49,     5,    18,    19,    39,    52,
      53,    54,    55,    73,    74,    75,    76,    77,    78,    71,
      72,     8,     9,     6,    10,    23,    85,    45,    87,    11,
      12,   122,   123,    13,    14,    15,    16,    17,    18,    19,
      20,    30,    21,    40,    64,    22,     8,    31,    47,    48,
      49,    66,    67,    68,    11,    12,    70,    23,    13,    79,
      24,    25,    80,    18,    19,    82,    81,    31,    83,    86,
      88,    89,    92,    94,    11,    12,    93,    95,    13,   126,
     127,    96,    23,    18,    19,   128,    97,   101,    98,   100,
     108,   102,   134,   103,   109,   110,   136,   111,   113,   112,
     115,   116,    23,   117,   114,   125,   144,    47,    48,    49,
      50,    51,   129,   118,    52,    53,    54,    55,    47,    48,
      49,    50,    51,    65,   119,    52,    53,    54,    55,   120,
     135,   121,   142,    56,    47,    48,    49,    50,    51,   124,
     130,    52,    53,    54,    55,   138,   140,   141,   143,    84,
      47,    48,    49,    50,    51,   146,    36,    52,    53,    54,
      55,     0,     0,     0,     0,    99,    47,    48,    49,    50,
      51,     0,     0,    52,    53,    54,    55,     0,     0,     0,
       0,   131,    47,    48,    49,    50,    51,     0,     0,    52,
      53,    54,    55,     0,     0,     0,     0,   132,    47,    48,
      49,    50,    51,     0,     0,    52,    53,    54,    55,     0,
       0,     0,     0,   137,    47,    48,    49,    50,    51,     0,
       0,    52,    53,    54,    55,     0,     0,     0,     0,   139,
      47,    48,    49,    50,    51,     0,     0,    52,    53,    54,
      55,     0,     0,     0,     0,   145,    47,    48,    49,    50,
      51,     0,     0,    52,    53,    54,    55,     0,     0,    63,
      47,    48,    49,    50,    51,     0,     0,    52,    53,    54,
      55,     0,     0,   133,    47,    48,    49,    50,    51,     0,
       0,    52,    53,    54,    55,     0,    69,    47,    48,    49,
      50,    51,     0,     0,    52,    53,    54,    55
};

static const yytype_int16 yycheck[] =
{
       7,     3,     5,    10,    39,    12,    13,     0,    28,    29,
      30,    18,    19,    17,    18,    19,    23,    37,    38,     3,
       4,     3,     4,    30,    26,     9,    10,    11,    12,    13,
      14,    15,    28,    29,    30,    40,    20,    21,    39,    35,
      36,    37,    38,    50,    51,    52,    53,    54,    55,    43,
      44,     3,     4,    41,     6,    39,    63,     4,    65,    11,
      12,     7,     8,    15,    16,    17,    18,    19,    20,    21,
      22,    45,    24,    39,    39,    27,     3,     4,    28,    29,
      30,     3,     3,    41,    11,    12,    45,    39,    15,     3,
      42,    43,     3,    20,    21,     3,     3,     4,     3,     3,
      44,    40,     3,    44,    11,    12,     4,    44,    15,   116,
     117,    43,    39,    20,    21,   122,    44,     3,    44,    44,
       3,    41,   129,    42,     3,     3,   133,     3,     3,    42,
      42,    23,    39,    23,    44,     3,   143,    28,    29,    30,
      31,    32,    41,    43,    35,    36,    37,    38,    28,    29,
      30,    31,    32,    44,    43,    35,    36,    37,    38,    43,
      41,    43,     8,    43,    28,    29,    30,    31,    32,    40,
      40,    35,    36,    37,    38,    42,    42,    42,    41,    43,
      28,    29,    30,    31,    32,    42,    14,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    43,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    43,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    43,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    43,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    43,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    -1,    40,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    47,    39,     0,    40,    41,    48,     3,     4,
       6,    11,    12,    15,    16,    17,    18,    19,    20,    21,
      22,    24,    27,    39,    42,    43,    49,    50,    52,    57,
      45,     4,    57,    57,    57,    57,    50,    57,    57,    39,
      39,     3,     4,    58,    57,     4,    51,    28,    29,    30,
      31,    32,    35,    36,    37,    38,    43,     9,    10,    11,
      13,    14,    57,    41,    39,    44,     3,     3,    41,    40,
      45,    43,    44,    57,    57,    57,    57,    57,    57,     3,
       3,     3,     3,     3,    43,    57,     3,    57,    44,    40,
      53,    54,     3,     4,    44,    44,    43,    44,    44,    43,
      44,     3,    41,    42,     3,    26,    55,    56,     3,     3,
       3,     3,    42,     3,    44,    42,    23,    23,    43,    43,
      43,    43,     7,     8,    40,     3,    57,    57,    57,    41,
      40,    43,    43,    41,    57,    41,    57,    43,    42,    43,
      42,    42,     8,    41,    57,    43,    42
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
        case 2:

/* Line 1455 of yacc.c  */
#line 34 "1607066.y"
    { printf("\nI have done it\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 40 "1607066.y"
    { printf("\nVariable declared\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 46 "1607066.y"
    {
						if(findkey1((yyvsp[(3) - (3)].string)))
						{
							printf("%s is already declared\n", (yyvsp[(3) - (3)].string) );
						}
						else
						{
							copy(&first[c1],(yyvsp[(3) - (3)].string), c1);
							c1++;	
						}
			;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 57 "1607066.y"
    {
				if(findkey1((yyvsp[(1) - (1)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (1)].string) );
				}
				else
				{
					copy(&first[c1],(yyvsp[(1) - (1)].string), c1);
							c1++;
				}
			;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 68 "1607066.y"
    {
				if(findkey1((yyvsp[(1) - (3)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (3)].string) );
				}
				else
				{
					copy(&first[c1],(yyvsp[(1) - (3)].string), c1);
							c1++;
					copy(&second[c2], (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].number));
							c2++;
				}
			;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 83 "1607066.y"
    {printf("Switch is done \n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 85 "1607066.y"
    {
							if(findkey1((yyvsp[(1) - (7)].string))){
								int x;
								int i=1;
								    for(i=1; i <= (yyvsp[(4) - (7)].number) && i <= (yyvsp[(6) - (7)].number); ++i)
    								{
        								if((yyvsp[(4) - (7)].number)%i==0 && (yyvsp[(6) - (7)].number)%i==0)
           								  x=i;
    								}
								i =findkey2((yyvsp[(1) - (7)].string));
								if (i==0){
									copy(&second[c2], (yyvsp[(1) - (7)].string), x);
									c2++;
								}
								else
								{
									int tt=findkey1((yyvsp[(1) - (7)].string));
									second[tt].n = x;
								}
								printf("\nThe gcd of %d and %d is : %d\t\n",(yyvsp[(4) - (7)].number),(yyvsp[(6) - (7)].number),x);
							}
							else {
								printf("%s is not declared\n",(yyvsp[(1) - (7)].string));
							}
	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 110 "1607066.y"
    {
							if(findkey1((yyvsp[(1) - (7)].string))){
								int x;
								int i=1;
								    for(i=1; i <= (yyvsp[(4) - (7)].number) && i <= (yyvsp[(6) - (7)].number); ++i)
    								{
        								if((yyvsp[(4) - (7)].number)%i==0 && (yyvsp[(6) - (7)].number)%i==0)
           								  x=i;
    								}
    								x=((yyvsp[(4) - (7)].number)*(yyvsp[(6) - (7)].number))/x;
								i =findkey2((yyvsp[(1) - (7)].string));
								if (i==0){
									copy(&second[c2], (yyvsp[(1) - (7)].string), x);
									c2++;
								}
								else
								{
									int tt=findkey1((yyvsp[(1) - (7)].string));
									second[tt].n = x;
								}
								printf("\nThe lcm of %d and %d is : %d\t\n",(yyvsp[(4) - (7)].number),(yyvsp[(6) - (7)].number),x);
							}
							else {
								printf("%s not declared yet\n",(yyvsp[(1) - (7)].string));
							}
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 136 "1607066.y"
    {
							if(findkey1((yyvsp[(1) - (5)].string))){
								int x;
								int i=1;
								x=(yyvsp[(4) - (5)].number)*(yyvsp[(4) - (5)].number);
								i =findkey2((yyvsp[(1) - (5)].string));
								if (i==0){
									copy(&second[c2], (yyvsp[(1) - (5)].string), x);
									c2++;
								}
								else
								{
									int tt=findkey1((yyvsp[(1) - (5)].string));
									second[tt].n = x;
								}
								printf("\nThe square of %d  is : %d\t\n",(yyvsp[(4) - (5)].number),x);
							}
							else {
								printf("%s not declared yet\n",(yyvsp[(1) - (5)].string));
							}
	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 157 "1607066.y"
    {
							if(findkey1((yyvsp[(1) - (7)].string))){
								int x;
								int i=1;
								if((yyvsp[(4) - (7)].number)>=(yyvsp[(6) - (7)].number))
									x=(yyvsp[(4) - (7)].number);
								else
									x=(yyvsp[(6) - (7)].number);
								i =findkey2((yyvsp[(1) - (7)].string));
								if (i==0){
									copy(&second[c2], (yyvsp[(1) - (7)].string), x);
									c2++;
								}
								else
								{
									int tt=findkey1((yyvsp[(1) - (7)].string));
									second[tt].n = x;
								}
								printf("\nThe maximum of %d and %d is : %d\t\n",(yyvsp[(4) - (7)].number),(yyvsp[(6) - (7)].number),x);
							}
							else {
								printf("%s not declared yet\n",(yyvsp[(1) - (7)].string));
							}
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 181 "1607066.y"
    {
							if(findkey1((yyvsp[(1) - (7)].string))){
								int x;
								int i=1;
								if((yyvsp[(4) - (7)].number)<=(yyvsp[(6) - (7)].number))
									x=(yyvsp[(4) - (7)].number);
								else
									x=(yyvsp[(6) - (7)].number);
								i =findkey2((yyvsp[(1) - (7)].string));
								if (i==0){
									copy(&second[c2], (yyvsp[(1) - (7)].string), x);
									c2++;
								}
								else
								{
									int tt=findkey1((yyvsp[(1) - (7)].string));
									second[tt].n = x;
								}
								printf("\nThe minimum of %d and %d is : %d\t\n",(yyvsp[(4) - (7)].number),(yyvsp[(6) - (7)].number),x);
							}
							else {
								printf("%s not declared yet\n",(yyvsp[(1) - (7)].string));
							}
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 205 "1607066.y"
    {
							if(findkey1((yyvsp[(1) - (4)].string))){
								int i =findkey2((yyvsp[(1) - (4)].string));
								if (i==0){
									copy(&second[c2], (yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].number));
									c2++;
								}
								else
								{
									int tt=findkey1((yyvsp[(1) - (4)].string));
									second[tt].n = (yyvsp[(3) - (4)].number);
								}
								printf("\nValue of the variable %s=: %d\t\n",(yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].number));
							}
							else {
								printf("%s not declared yet\n",(yyvsp[(1) - (4)].string));
							}
							
						;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 225 "1607066.y"
    {
								if((yyvsp[(2) - (6)].number))
								{
									printf("\nvalue of expression in IF: %d\n",((yyvsp[(4) - (6)].number)));
								}
								else
								{
									printf("\ncondition value is false\n");
								}
							;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 236 "1607066.y"
    {
								 	if((yyvsp[(2) - (11)].number))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(4) - (11)].number));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(9) - (11)].number));
									}
								   ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 247 "1607066.y"
    {
								 	if((yyvsp[(2) - (17)].number))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(4) - (17)].number));
									}
									else if((yyvsp[(8) - (17)].number))
									{
										printf("\nvalue of expression in ELIF: %d\n",(yyvsp[(10) - (17)].number));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(15) - (17)].number));
									}
								   ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 261 "1607066.y"
    {
	   int i=0;
	   for(i=(yyvsp[(3) - (10)].number);i<=(yyvsp[(5) - (10)].number);i=i+(yyvsp[(7) - (10)].number)){
	  	 printf("inside for loop counting %d\n",i);
	   }
		printf("\nFor loop is Done\n");
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 268 "1607066.y"
    {
										int i=0;
										for(i=(yyvsp[(3) - (6)].number);i>0;i--)
										{
											printf("inside while loop counting %d\n",i);
										}
										printf("\nWhile loop is Done\n");
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 276 "1607066.y"
    {
				printf("Function Declared\n");
				printf("Return value is = %d\n",(yyvsp[(4) - (7)].number)+(yyvsp[(6) - (7)].number));
		;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 290 "1607066.y"
    {
						
						if(ans==(yyvsp[(1) - (4)].number)){
							  temp=1;
							  printf("\nCase No : %d  and Result :  %d\n",(yyvsp[(1) - (4)].number),(yyvsp[(3) - (4)].number));
						}
						
					;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 300 "1607066.y"
    {
						if(temp!=1){
							printf("\nResult in default Value is :  %d\n",(yyvsp[(3) - (4)].number));
						}
						temp=0;
					;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 309 "1607066.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); 	;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 311 "1607066.y"
    { (yyval.number) = findkey2((yyvsp[(1) - (1)].string)); printf("Variable value var %s : %d",(yyvsp[(1) - (1)].string),(yyval.number));}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 313 "1607066.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 315 "1607066.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 317 "1607066.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 319 "1607066.y"
    { 	if((yyvsp[(3) - (3)].number)) 
				  		{
				     			(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 329 "1607066.y"
    { 
		(yyval.number) = pow((yyvsp[(2) - (4)].number),(yyvsp[(4) - (4)].number)); 
		printf("\nPower of %d to %d is %d\n",(yyvsp[(2) - (4)].number),(yyvsp[(4) - (4)].number),(yyval.number));
	;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 334 "1607066.y"
    {
				(yyval.number)=(yyvsp[(2) - (2)].number)*(yyvsp[(2) - (2)].number);
				printf("square of %d is %d\n",(yyvsp[(2) - (2)].number),(yyval.number));
	;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 338 "1607066.y"
    {
				(yyval.number)=sqrt((yyvsp[(2) - (2)].number));
				printf("squareroot of %d is %d\n",(yyvsp[(2) - (2)].number),(yyval.number));
	;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 342 "1607066.y"
    {
				if((yyvsp[(2) - (2)].number)<0)
					(yyval.number)=((yyvsp[(2) - (2)].number))*(-1);
				else
					(yyval.number)=(yyvsp[(2) - (2)].number);
				printf("Absolute value of %d is %d\n",(yyvsp[(2) - (2)].number),(yyval.number));
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 350 "1607066.y"
    {
						int mult=1 ,i;
						for(i=(yyvsp[(2) - (2)].number);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval.number)=mult;
						printf("\nFactorial of %d is %d\n",(yyvsp[(2) - (2)].number),(yyval.number));
					 ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 360 "1607066.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) < (yyvsp[(3) - (3)].number); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 362 "1607066.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) > (yyvsp[(3) - (3)].number); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 364 "1607066.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number);	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 366 "1607066.y"
    { (yyval.number)=(yyvsp[(1) - (2)].number)+1; printf("inc: %d\n",(yyval.number));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 368 "1607066.y"
    { (yyval.number)=(yyvsp[(1) - (2)].number)-1; printf("dec: %d\n",(yyval.number));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 370 "1607066.y"
    {
						if((yyvsp[(1) - (2)].number) != 0)
						{
							(yyval.number) = 0; printf("negative: %d\n",(yyval.number));
						}
						else{
							(yyval.number) = 1 ; printf("positive: %d\n",(yyval.number));
						}
					;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 382 "1607066.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); ans = (yyval.number); printf("\none");}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 384 "1607066.y"
    { (yyval.number) = findkey2((yyvsp[(1) - (1)].string)); ans = (yyval.number);;}
    break;



/* Line 1455 of yacc.c  */
#line 2056 "1607066.tab.c"
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
#line 387 "1607066.y"


void copy(struct st *ss, char *s, int n)
{
  ss->str = s;
  ss->n = n;
}

int findkey1(char *key)
{
    int i = 1;
    char *name = first[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return i;
        name = first[++i].str;
    }
    return 0;
}

int findkey2(char *key)
{
    int i = 1;
    char *name = second[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return second[i].n;
        name = second[++i].str;
    }
    return 0;
}


int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}


