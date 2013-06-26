/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "lalg.y"

	#define YYSTYPE double
    #define YYDEBUG 1 /*For Debugging */

	#include <math.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>	
    int yylex (void);
    void yyerror (char *);
    int numerrors=0;
    extern int num_lines;
    extern char *yytext;
	extern int column;


/* Line 268 of yacc.c  */
#line 88 "lalg.tab.c"

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
     T_EOF = 258,
     T_PROGRAM = 259,
     T_BEGIN = 260,
     T_END = 261,
     T_VAR = 262,
     T_CONST = 263,
     T_REAL = 264,
     T_INTEGER = 265,
     T_PROCEDURE = 266,
     T_READ = 267,
     T_WRITE = 268,
     T_WHILE = 269,
     T_IF = 270,
     T_THEN = 271,
     T_ELSE = 272,
     T_FOR = 273,
     T_TO = 274,
     T_DO = 275,
     T_EQUAL = 276,
     T_DIFF = 277,
     T_GREATER_EQ = 278,
     T_LESSER_EQ = 279,
     T_GREATER = 280,
     T_LESSER = 281,
     T_PLUS = 282,
     T_MINUS = 283,
     T_TIMES = 284,
     T_DIVISION = 285,
     T_ASSIGN = 286,
     T_SEMICOLON = 287,
     T_COLON = 288,
     T_L_PAREN = 289,
     T_R_PAREN = 290,
     T_COMMA = 291,
     T_DOT = 292,
     ERR_MF_INTEGER = 293,
     ERR_MF_REAL = 294,
     ERR_MF_ID = 295,
     ERR_LONG_ID = 296,
     ERR_COMMENT = 297,
     ERR_UNKNOWN = 298,
     T_ID = 299,
     T_INUMBER = 300,
     T_RNUMBER = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 175 "lalg.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   184

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNRULES -- Number of states.  */
#define YYNSTATES  226

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    13,    16,    17,    21,    22,
      28,    31,    35,    38,    40,    42,    47,    51,    53,    57,
      60,    61,    62,    67,    68,    75,    79,    82,    85,    88,
      91,    93,    95,    98,    99,   100,   107,   112,   114,   116,
     118,   120,   122,   125,   126,   130,   133,   134,   135,   139,
     140,   141,   142,   149,   150,   156,   159,   160,   164,   168,
     172,   173,   178,   181,   182,   187,   188,   194,   198,   201,
     204,   206,   208,   210,   214,   218,   219,   222,   223,   227,
     230,   231,   232,   236,   237,   241,   242,   243,   247,   248,
     252,   253,   257,   258,   263,   264,   268,   271,   272,   276,
     277,   278,   289,   291,   295,   296,   302,   305,   306,   313,
     317,   319,   321,   323,   325,   327,   329,   331,   334,   336,
     338,   339,   343,   344,   346,   348,   352,   356,   357,   359,
     361,   363,   365,   368,   370,   373,   376,   378
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,     4,    50,    -1,    -1,     1,    32,    49,
      55,    54,    -1,     1,    37,    -1,    -1,    44,    51,    53,
      -1,    -1,     1,    32,    52,    55,    54,    -1,     1,    37,
      -1,    32,    55,    54,    -1,     1,    37,    -1,    37,    -1,
       1,    -1,    57,     5,    95,    56,    -1,    57,     1,     6,
      -1,     6,    -1,    58,    65,    73,    -1,    59,    58,    -1,
      -1,    -1,     8,    60,    44,    62,    -1,    -1,     8,     1,
      21,    61,   122,    32,    -1,     8,     1,    32,    -1,    21,
      63,    -1,     1,    32,    -1,   122,    64,    -1,     1,    32,
      -1,    32,    -1,     1,    -1,    66,    65,    -1,    -1,    -1,
       7,    70,    67,    33,    69,    68,    -1,     7,    70,     1,
      32,    -1,    32,    -1,     1,    -1,     9,    -1,    10,    -1,
       1,    -1,    44,    72,    -1,    -1,     1,    71,    72,    -1,
      36,    70,    -1,    -1,    -1,    75,    74,    73,    -1,    -1,
      -1,    -1,    11,    76,    44,    81,    77,    79,    -1,    -1,
      11,     1,    32,    78,    84,    -1,    32,    84,    -1,    -1,
       1,    80,    84,    -1,    34,    82,    35,    -1,    34,    82,
       1,    -1,    -1,    70,    33,    69,    83,    -1,    32,    82,
      -1,    -1,    88,     5,    95,    86,    -1,    -1,    88,     1,
       6,    85,    87,    -1,    88,     1,    32,    -1,     6,    87,
      -1,     1,    32,    -1,    32,    -1,     1,    -1,    65,    -1,
      34,    90,    35,    -1,    34,    90,     1,    -1,    -1,    44,
      92,    -1,    -1,     1,    91,    92,    -1,    32,    90,    -1,
      -1,    -1,    17,    94,    96,    -1,    -1,    96,    32,    95,
      -1,    -1,    -1,    12,    97,   105,    -1,    -1,    13,    98,
     105,    -1,    -1,    15,    99,   106,    -1,    -1,    44,   100,
      31,   113,    -1,    -1,    44,   101,    89,    -1,     5,   108,
      -1,    -1,    14,   102,   109,    -1,    -1,    -1,    18,   103,
      44,   104,    31,   113,    19,   113,    20,    96,    -1,     1,
      -1,    34,    70,    35,    -1,    -1,   111,    16,   107,    96,
      93,    -1,    95,     6,    -1,    -1,    34,   111,    35,    20,
     110,    96,    -1,   113,   112,   113,    -1,    21,    -1,    22,
      -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,     1,
      -1,   117,   115,    -1,    27,    -1,    28,    -1,    -1,   116,
     117,   115,    -1,    -1,    27,    -1,    28,    -1,   114,   120,
     118,    -1,   119,   120,   118,    -1,    -1,    29,    -1,    30,
      -1,    44,    -1,   122,    -1,    34,   121,    -1,     1,    -1,
     113,    35,    -1,   113,     1,    -1,    45,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    77,    77,    78,    81,    81,    82,    82,
      83,    86,    87,    90,    91,    95,    96,    99,   103,   107,
     108,   111,   111,   112,   112,   113,   116,   117,   120,   121,
     124,   125,   129,   130,   133,   133,   134,   137,   138,   142,
     143,   144,   148,   149,   149,   153,   154,   158,   158,   159,
     162,   162,   162,   163,   163,   166,   167,   167,   171,   172,
     173,   177,   181,   182,   186,   187,   187,   188,   191,   192,
     195,   196,   200,   204,   205,   206,   210,   211,   211,   215,
     216,   220,   220,   221,   225,   228,   233,   233,   234,   234,
     235,   235,   236,   236,   237,   237,   238,   239,   239,   240,
     240,   240,   241,   244,   247,   247,   250,   253,   253,   257,
     261,   262,   263,   264,   265,   266,   267,   271,   275,   276,
     277,   281,   282,   286,   287,   291,   295,   296,   300,   301,
     305,   306,   307,   308,   312,   313,   317,   318
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_EOF", "\"program\"", "\"begin\"",
  "\"end\"", "\"var\"", "\"const\"", "\"real\"", "\"integer\"",
  "\"procedure\"", "\"read\"", "\"write\"", "\"while\"", "\"if\"",
  "\"then\"", "\"else\"", "\"for\"", "\"to\"", "\"do\"", "\"=\"", "\"<>\"",
  "\">=\"", "\"<=\"", "\">\"", "\"<\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"",
  "\":=\"", "\";\"", "\":\"", "\"(\"", "\")\"", "\",\"", "\".\"",
  "ERR_MF_INTEGER", "ERR_MF_REAL", "ERR_MF_ID", "ERR_LONG_ID",
  "ERR_COMMENT", "ERR_UNKNOWN", "\"identificador\"", "\"numero inteiro\"",
  "\"numero real\"", "$accept", "programa", "$@1", "programa1", "$@2",
  "$@3", "programa2", "programa3", "corpo", "corpo1", "dc", "dc_c",
  "dc_c0", "$@4", "$@5", "dc_c1", "dc_c2", "dc_c3", "dc_v", "dc_v0", "$@6",
  "dc_v1", "tipo_var", "variaveis", "$@7", "mais_var", "dc_p", "$@8",
  "dc_p0", "$@9", "$@10", "$@11", "dc_p1", "$@12", "parametros",
  "lista_par", "mais_par", "corpo_p", "$@13", "corpo_p1", "corpo_p2",
  "dc_loc", "lista_arg", "argumentos", "$@14", "mais_ident", "pfalsa",
  "$@15", "comandos", "cmd", "$@16", "$@17", "$@18", "$@19", "$@20",
  "$@21", "$@22", "$@23", "cmd_param", "cmd_if", "$@24", "cmd_begin",
  "cmd_while", "$@25", "condicao", "relacao", "expressao", "op_un",
  "outros_termos", "op_ad", "termo", "mais_fatores", "op_mul", "fator",
  "fator_exp", "numero", 0
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    48,    48,    51,    50,    52,    50,
      50,    53,    53,    54,    54,    55,    55,    56,    57,    58,
      58,    60,    59,    61,    59,    59,    62,    62,    63,    63,
      64,    64,    65,    65,    67,    66,    66,    68,    68,    69,
      69,    69,    70,    71,    70,    72,    72,    74,    73,    73,
      76,    77,    75,    78,    75,    79,    80,    79,    81,    81,
      81,    82,    83,    83,    84,    85,    84,    84,    86,    86,
      87,    87,    88,    89,    89,    89,    90,    91,    90,    92,
      92,    94,    93,    93,    95,    95,    97,    96,    98,    96,
      99,    96,   100,    96,   101,    96,    96,   102,    96,   103,
     104,    96,    96,   105,   107,   106,   108,   110,   109,   111,
     112,   112,   112,   112,   112,   112,   112,   113,   114,   114,
     114,   115,   115,   116,   116,   117,   118,   118,   119,   119,
     120,   120,   120,   120,   121,   121,   122,   122
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     5,     2,     0,     3,     0,     5,
       2,     3,     2,     1,     1,     4,     3,     1,     3,     2,
       0,     0,     4,     0,     6,     3,     2,     2,     2,     2,
       1,     1,     2,     0,     0,     6,     4,     1,     1,     1,
       1,     1,     2,     0,     3,     2,     0,     0,     3,     0,
       0,     0,     6,     0,     5,     2,     0,     3,     3,     3,
       0,     4,     2,     0,     4,     0,     5,     3,     2,     2,
       1,     1,     1,     3,     3,     0,     2,     0,     3,     2,
       0,     0,     3,     0,     3,     0,     0,     3,     0,     3,
       0,     3,     0,     4,     0,     3,     2,     0,     3,     0,
       0,    10,     1,     3,     0,     5,     2,     0,     6,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       0,     3,     0,     1,     1,     3,     3,     0,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     5,     0,     6,     2,     1,
      20,     8,    10,     0,     0,     0,     0,    33,    20,    20,
       0,    20,     7,     0,     0,    14,    13,     4,     0,     0,
       0,    49,    33,    19,     0,    12,     0,    23,    25,     0,
      16,   102,     0,    86,    88,    97,    90,    99,    94,     0,
       0,    43,    46,     0,     0,    18,    47,    32,     9,    11,
       0,     0,     0,    22,     0,    96,     0,     0,     0,   120,
       0,     0,    75,    17,    15,     0,    46,     0,    42,     0,
       0,     0,     0,    49,   136,   137,     0,    27,     0,    26,
       0,   106,     0,    87,    89,   120,    98,   118,   119,    91,
       0,     0,     0,   122,   100,   120,     0,    95,    84,    44,
      45,    36,     0,    53,    60,    48,    24,    29,    31,    30,
      28,     0,     0,   104,   116,   110,   111,   112,   113,   114,
     115,   120,   133,   120,   130,   127,   131,   123,   124,   117,
     120,     0,    93,    77,    80,     0,    41,    39,    40,     0,
      33,     0,    51,   103,     0,     0,   109,     0,   132,   128,
     129,   125,     0,   122,   120,    80,     0,    76,    74,    73,
      38,    37,    35,    72,    54,     0,     0,     0,     0,   107,
      83,   135,   134,   127,   121,     0,    78,    79,     0,     0,
       0,    59,    58,    56,    33,    52,     0,    81,   105,   126,
     120,    65,    67,     0,    63,    33,    55,   108,     0,     0,
       0,     0,     0,    64,     0,    61,    57,    82,     0,    71,
      70,    66,    69,    68,    62,   101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    10,     8,    13,    19,    22,    27,    15,    74,
      16,    17,    18,    24,    60,    63,    89,   120,   173,    32,
      80,   172,   149,   176,    76,    78,    55,    83,    56,    82,
     178,   150,   195,   205,   152,   177,   215,   174,   210,   213,
     221,   175,   107,   145,   165,   167,   198,   208,    49,    50,
      66,    67,    69,    71,    72,    68,    70,   141,    93,    99,
     155,    65,    96,   196,   100,   131,   101,   102,   139,   140,
     103,   161,   162,   135,   158,   136
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -154
static const yytype_int16 yypact[] =
{
      91,   -25,     9,    84,  -154,  -154,   -13,  -154,  -154,  -154,
      85,  -154,  -154,    24,    10,     7,    77,   104,    85,    85,
      60,    85,  -154,    51,    69,  -154,  -154,  -154,   112,     8,
      14,   110,   104,  -154,     7,  -154,     7,  -154,  -154,    16,
    -154,  -154,     8,  -154,  -154,  -154,  -154,  -154,    92,   116,
      93,  -154,    94,     5,    15,  -154,  -154,  -154,  -154,  -154,
      31,    95,     4,  -154,   118,  -154,    97,    97,    98,    87,
      82,   102,   100,  -154,  -154,     8,    94,    14,  -154,    96,
     103,   105,    99,   110,  -154,  -154,   106,  -154,   107,  -154,
      30,  -154,    14,  -154,  -154,    87,  -154,  -154,  -154,  -154,
     113,    79,     2,    89,  -154,    87,    17,  -154,  -154,  -154,
    -154,  -154,    80,  -154,   101,  -154,  -154,  -154,  -154,  -154,
    -154,   109,   111,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,    87,  -154,    87,  -154,    90,  -154,  -154,  -154,  -154,
      87,   114,  -154,  -154,   108,    29,  -154,  -154,  -154,    56,
     104,    14,  -154,  -154,   121,    27,  -154,    33,  -154,  -154,
    -154,  -154,     2,    89,    87,   108,    17,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,    86,   115,    34,    62,  -154,
     125,  -154,  -154,    90,  -154,   130,  -154,  -154,    67,     8,
      80,  -154,  -154,  -154,   104,  -154,    27,  -154,  -154,  -154,
      87,  -154,  -154,    73,   119,   104,  -154,  -154,    27,   132,
      66,   122,    66,  -154,    14,  -154,  -154,  -154,    27,  -154,
    -154,  -154,  -154,  -154,  -154,  -154
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,  -154,  -154,  -154,  -154,  -154,    72,    88,  -154,
    -154,   135,  -154,  -154,  -154,  -154,  -154,  -154,    53,  -154,
    -154,  -154,   -40,   -26,  -154,    81,    75,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,   -59,  -154,  -119,  -154,  -154,
     -56,  -154,  -154,    -7,  -154,    -5,  -154,  -154,   -42,  -153,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,   117,  -154,
    -154,  -154,  -154,  -154,    68,  -154,  -104,  -154,    -2,  -154,
      22,   -19,  -154,     3,  -154,    50
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -93
static const yytype_int16 yytable[] =
{
      64,   142,   180,   132,    53,    88,    79,     4,    25,    41,
       6,    23,     5,    42,   -85,    51,    81,    61,   143,    11,
      43,    44,    45,    46,    12,    20,    47,   156,    41,   157,
     168,   118,    42,   108,   181,   191,   133,    62,   -34,    43,
      44,    45,    46,   207,    26,    47,   134,    84,    85,    84,
      85,   110,    48,     7,   -21,   217,    21,   170,    52,   -50,
     185,   144,   119,   193,   169,   225,   121,   219,   182,   192,
      31,    48,    37,   201,   211,   206,    84,    85,    28,   212,
     124,   146,    29,    38,     9,    57,   216,   188,   171,   147,
     148,   189,     1,    14,   194,     2,   209,    35,   220,   202,
     125,   126,   127,   128,   129,   130,    58,    34,    59,    36,
      86,    30,    90,    39,    97,    98,   137,   138,    40,   159,
     160,    54,    73,   -92,    91,    75,   104,    87,   111,   123,
      77,    92,    95,   105,   106,   151,   112,   113,   116,   117,
     166,   179,   197,   114,   153,   164,   154,   203,   190,   200,
     204,   214,   218,    33,   222,   224,   223,   109,   115,   187,
     186,   184,   163,   122,   199,   183,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-154))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      42,   105,   155,     1,    30,     1,     1,    32,     1,     1,
       1,     1,    37,     5,     6,     1,     1,     1,     1,    32,
      12,    13,    14,    15,    37,     1,    18,   131,     1,   133,
       1,     1,     5,    75,     1,     1,    34,    21,    33,    12,
      13,    14,    15,   196,    37,    18,    44,    45,    46,    45,
      46,    77,    44,    44,    44,   208,    32,     1,    44,    44,
     164,    44,    32,     1,    35,   218,    92,     1,    35,    35,
      17,    44,    21,     6,     1,   194,    45,    46,     1,     6,
       1,     1,     5,    32,     0,    32,   205,     1,    32,     9,
      10,     5,     1,     8,    32,     4,   200,    37,    32,    32,
      21,    22,    23,    24,    25,    26,    34,    19,    36,    21,
      60,     7,    62,    44,    27,    28,    27,    28,     6,    29,
      30,    11,     6,    31,     6,    32,    44,    32,    32,    16,
      36,    34,    34,    31,    34,    34,    33,    32,    32,    32,
      32,    20,    17,    44,    35,    31,    35,   189,    33,    19,
     190,    32,    20,    18,    32,   214,   212,    76,    83,   166,
     165,   163,   140,    95,   183,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    48,    32,    37,     1,    44,    50,     0,
      49,    32,    37,    51,     8,    55,    57,    58,    59,    52,
       1,    32,    53,     1,    60,     1,    37,    54,     1,     5,
       7,    65,    66,    58,    55,    37,    55,    21,    32,    44,
       6,     1,     5,    12,    13,    14,    15,    18,    44,    95,
      96,     1,    44,    70,    11,    73,    75,    65,    54,    54,
      61,     1,    21,    62,    95,   108,    97,    98,   102,    99,
     103,   100,   101,     6,    56,    32,    71,    36,    72,     1,
      67,     1,    76,    74,    45,    46,   122,    32,     1,    63,
     122,     6,    34,   105,   105,    34,   109,    27,    28,   106,
     111,   113,   114,   117,    44,    31,    34,    89,    95,    72,
      70,    32,    33,    32,    44,    73,    32,    32,     1,    32,
      64,    70,   111,    16,     1,    21,    22,    23,    24,    25,
      26,   112,     1,    34,    44,   120,   122,    27,    28,   115,
     116,   104,   113,     1,    44,    90,     1,     9,    10,    69,
      78,    34,    81,    35,    35,   107,   113,   113,   121,    29,
      30,   118,   119,   117,    31,    91,    32,    92,     1,    35,
       1,    32,    68,    65,    84,    88,    70,    82,    77,    20,
      96,     1,    35,   120,   115,   113,    92,    90,     1,     5,
      33,     1,    35,     1,    32,    79,   110,    17,    93,   118,
      19,     6,    32,    95,    69,    80,    84,    96,    94,   113,
      85,     1,     6,    86,    32,    83,    84,    96,    20,     1,
      32,    87,    32,    87,    82,    96
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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

/* Line 1806 of yacc.c  */
#line 76 "lalg.y"
    {}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 77 "lalg.y"
    { yyerror("program"); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 78 "lalg.y"
    { yyerror("program");}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 81 "lalg.y"
    {}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 81 "lalg.y"
    {}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 82 "lalg.y"
    { yyerror("id");}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 83 "lalg.y"
    { yyerror("id");}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 86 "lalg.y"
    {}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 87 "lalg.y"
    { yyerror(";");}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 90 "lalg.y"
    {}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 91 "lalg.y"
    { yyerror(".");}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 95 "lalg.y"
    {}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 96 "lalg.y"
    { yyerror("begin"); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 99 "lalg.y"
    {}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 103 "lalg.y"
    {}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 107 "lalg.y"
    {}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 111 "lalg.y"
    {}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 111 "lalg.y"
    {}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 112 "lalg.y"
    { yyerror("id"); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 113 "lalg.y"
    { yyerror("id"); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 116 "lalg.y"
    {}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 117 "lalg.y"
    { yyerror("="); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 120 "lalg.y"
    {}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 121 "lalg.y"
    { yyerror("numero"); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 124 "lalg.y"
    {}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 125 "lalg.y"
    { yyerror(";"); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 129 "lalg.y"
    {}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 133 "lalg.y"
    {}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 133 "lalg.y"
    {}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 134 "lalg.y"
    { yyerror(":"); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 137 "lalg.y"
    {}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 138 "lalg.y"
    { yyerror(";"); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 142 "lalg.y"
    {}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 143 "lalg.y"
    {}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 144 "lalg.y"
    { yyerror("tipo"); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 148 "lalg.y"
    {}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 149 "lalg.y"
    { yyclearin; yyerror("id"); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 149 "lalg.y"
    {}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 153 "lalg.y"
    {}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 154 "lalg.y"
    {}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 158 "lalg.y"
    {}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 162 "lalg.y"
    {}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 162 "lalg.y"
    {}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 163 "lalg.y"
    { yyclearin; yyerror("id"); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 166 "lalg.y"
    {}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 167 "lalg.y"
    { yyclearin; yyerror(";"); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 171 "lalg.y"
    {}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 172 "lalg.y"
    { yyclearin; yyerror(")"); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 173 "lalg.y"
    {}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 177 "lalg.y"
    {}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 181 "lalg.y"
    {}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 182 "lalg.y"
    {}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 186 "lalg.y"
    {}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 187 "lalg.y"
    { yyerror("begin"); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 188 "lalg.y"
    { yyerror("begin"); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 191 "lalg.y"
    {}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 192 "lalg.y"
    { yyerror("end"); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 196 "lalg.y"
    { yyerror(";"); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 204 "lalg.y"
    {}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 205 "lalg.y"
    { yyerror(")"); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 206 "lalg.y"
    {}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 210 "lalg.y"
    {}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 211 "lalg.y"
    { yyclearin; yyerror("id"); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 211 "lalg.y"
    {}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 215 "lalg.y"
    {}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 216 "lalg.y"
    {}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 220 "lalg.y"
    {}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 233 "lalg.y"
    {}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 233 "lalg.y"
    {}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 234 "lalg.y"
    {}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 234 "lalg.y"
    {}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 235 "lalg.y"
    {}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 236 "lalg.y"
    {}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 236 "lalg.y"
    {}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 237 "lalg.y"
    {}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 237 "lalg.y"
    {}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 238 "lalg.y"
    {}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 239 "lalg.y"
    {}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 239 "lalg.y"
    {}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 240 "lalg.y"
    {}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 240 "lalg.y"
    {}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 240 "lalg.y"
    {}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 241 "lalg.y"
    { yyclearin; yyerror("cmd"); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 244 "lalg.y"
    {}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 247 "lalg.y"
    {}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 247 "lalg.y"
    {}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 253 "lalg.y"
    {}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 253 "lalg.y"
    {}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 257 "lalg.y"
    {}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 261 "lalg.y"
    {}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 262 "lalg.y"
    {}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 263 "lalg.y"
    {}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 264 "lalg.y"
    {}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 265 "lalg.y"
    {}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 266 "lalg.y"
    {}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 267 "lalg.y"
    { yyerror("sinal de relacao"); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 271 "lalg.y"
    {}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 275 "lalg.y"
    {}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 276 "lalg.y"
    {}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 277 "lalg.y"
    {}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 281 "lalg.y"
    {}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 282 "lalg.y"
    {}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 286 "lalg.y"
    {}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 287 "lalg.y"
    {}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 291 "lalg.y"
    {}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 295 "lalg.y"
    {}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 296 "lalg.y"
    {}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 300 "lalg.y"
    {}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 301 "lalg.y"
    {}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 305 "lalg.y"
    {}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 306 "lalg.y"
    {}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 307 "lalg.y"
    {}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 308 "lalg.y"
    { yyclearin; yyerror("sinal de relacao"); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 312 "lalg.y"
    {}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 313 "lalg.y"
    { yyerror(")"); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 317 "lalg.y"
    {}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 318 "lalg.y"
    {}
    break;



/* Line 1806 of yacc.c  */
#line 2435 "lalg.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 321 "lalg.y"


int main (int argc, char *argv[])
{
#ifdef YYDEBUG
	yydebug=0;
#endif
        yyparse();
        if(numerrors==0)
                printf ( "Analise Sintatica Completada\n" );
        else
                printf ( "Analise Sintatica Completada Com %d Erros\n", numerrors);

        return 0;
}

void yyerror (char *s)
{
        if(strcmp(s,"syntax error")){ /*Descartamos as mensagens padrões "syntax error do Bison*/
                fprintf (stderr, "Erro Sintatico: Linha %d, Coluna %d. Era esperado %s, encontrado: %s\n", num_lines, column, s, yytext);
                numerrors++;
        } 
}

