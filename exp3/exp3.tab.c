/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "exp3.y" /* yacc.c:339  */

    #include <stdio.h>
    int line=1;
    int start_line=1;
    int ch=1;

#line 73 "exp3.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    INT = 259,
    DOUBLE = 260,
    BOOL = 261,
    CHAR = 262,
    ARRAY = 263,
    STRING = 264,
    ADD = 265,
    SUB = 266,
    MUL = 267,
    DIV = 268,
    MOD = 269,
    NOT = 270,
    OR = 271,
    GT = 272,
    LT = 273,
    GE = 274,
    LE = 275,
    NE = 276,
    EQ = 277,
    AND = 278,
    INC = 279,
    DEC = 280,
    ASG = 281,
    OP = 282,
    CP = 283,
    OSQ = 284,
    CSQ = 285,
    OC = 286,
    CC = 287,
    COMMA = 288,
    SEMICO = 289,
    COLON = 290,
    IDENTIFIER = 291,
    VARTYPE = 292,
    INCLUDE = 293,
    INCLUDEFILE = 294,
    IF = 295,
    ELSE = 296,
    ELSEIF = 297,
    WHILE = 298,
    FOR = 299,
    SWITCH = 300,
    CASE = 301,
    DEFAULT = 302,
    CONTINUE = 303,
    RETURN = 304,
    BREAK = 305,
    EOL = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 173 "exp3.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   341

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    34,    39,    40,    41,    42,    47,    48,
      49,    54,    55,    61,    62,    63,    64,    65,    70,    71,
      75,    76,    80,    81,    86,    87,    92,    93,    98,    99,
     100,   101,   102,   103,   104,   105,   110,   111,   116,   121,
     122,   126,   127,   128,   132,   133,   137,   138,   143,   148,
     153,   154,   159,   160,   165,   170,   171,   176,   177,   178,
     179,   183,   188,   189,   190,   191,   192,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   218,   219,   220,   221,   222,   223,
     224,   229,   234
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "INT", "DOUBLE", "BOOL",
  "CHAR", "ARRAY", "STRING", "ADD", "SUB", "MUL", "DIV", "MOD", "NOT",
  "OR", "GT", "LT", "GE", "LE", "NE", "EQ", "AND", "INC", "DEC", "ASG",
  "OP", "CP", "OSQ", "CSQ", "OC", "CC", "COMMA", "SEMICO", "COLON",
  "IDENTIFIER", "VARTYPE", "INCLUDE", "INCLUDEFILE", "IF", "ELSE",
  "ELSEIF", "WHILE", "FOR", "SWITCH", "CASE", "DEFAULT", "CONTINUE",
  "RETURN", "BREAK", "EOL", "$accept", "source", "source_statement",
  "block", "statementseq", "statement", "func_def", "func_def_args_seq",
  "func_def_args", "func_call", "func_call_args_seq", "control",
  "if_block", "if_ifheader", "while_block", "for_init", "for_condition",
  "for_after", "for_block", "switch_block", "caseseq", "casestat",
  "var_def_statement", "var_def_idseq", "var_def", "assignment_statement",
  "assignment", "expression", "factor", "array_def", "array_item", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -81

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-81)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      94,   -12,     0,     4,   -81,   -81,   -81,   -20,    11,    79,
      95,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   130,    17,    13,    54,   -81,   -81,   -81,
     -81,   -81,   -81,   130,   130,   130,   130,    20,   295,   -81,
     -81,   124,    24,   -10,   -81,    46,   -81,   118,   -81,     8,
       8,    72,   243,    89,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   163,   -81,   223,    68,
      80,    82,    84,    88,    62,    90,   -81,   163,   -81,   -81,
     -81,   -81,   -81,    77,   -81,   -81,   -81,   -81,   -81,   120,
     133,   124,   119,   -81,   -81,     8,     8,    72,    72,   295,
     308,   217,   217,   217,   217,   321,   321,   146,    47,   130,
     110,   -22,   130,   -81,   -81,   224,   -81,   -81,   124,   -81,
     130,   -81,   -81,   -81,   131,    31,   295,   256,   124,   269,
     126,    63,   141,   -81,   282,   -81,   -81,   295,   -81,   142,
     130,   124,   -81,   124,   -81,   130,   148,   -81,   295,   -81,
     -81,   143,   295,   116,    63,   130,   145,    23,   -81,   153,
     -81,   204,   163,   -81,   -81,   124,   163,   163,   -81,   163
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     4,     7,     0,     0,    58,
       0,    56,    57,    59,    60,     6,     5,     1,     2,    65,
      66,    63,    64,     0,     0,     0,     0,    54,    84,    85,
      86,    87,    89,     0,     0,     0,     0,    88,    62,    67,
      90,     0,     0,     0,    21,     0,    91,    58,    55,    82,
      83,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     9,    12,    17,
      16,    14,    28,    37,    30,    29,    31,    13,    15,     0,
      22,     0,     0,    92,    68,    69,    70,    71,    72,    73,
      80,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,    41,     0,    32,    34,     0,    33,    11,     0,    61,
       0,    19,    20,     8,     0,     0,    27,     0,     0,     0,
       0,     0,     0,    43,     0,    35,    36,    23,    24,     0,
       0,     0,    40,     0,    42,    44,     0,    25,    26,    38,
      39,     0,    45,     0,    46,     0,     0,     0,    51,     0,
      47,     0,     0,    49,    50,     0,     0,    53,    48,    52
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   181,   -80,   -65,   -67,    91,   -81,    93,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,    35,   123,   -81,   167,   -81,    -1,   -28,   -81,   -81,
      18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    76,    77,    78,    79,    43,    44,    80,
     125,    81,    82,    83,    84,   132,   151,   159,    85,    86,
     157,   158,    87,    10,    11,    88,    89,    38,    39,    13,
      40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      12,   107,     7,     8,    17,    49,    50,    51,    52,    15,
     117,   121,     7,     8,   130,   131,    19,    45,    91,    14,
      56,    57,    58,    92,     9,    12,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   136,    16,
     117,     1,     2,    46,    14,    41,   115,    20,   142,    53,
      28,    29,    30,    31,    42,   163,    32,    33,    34,   139,
      90,   149,    35,   150,   140,    28,    29,    30,    31,   155,
     156,    32,    33,    34,    36,   124,    93,    35,     7,     8,
     126,   127,   129,    37,   134,   168,    58,     7,     8,    36,
      47,     5,   137,    45,     5,   109,   114,   167,    37,   130,
     117,   169,   117,    21,    22,    23,    24,   110,    25,   111,
     133,   112,   148,    28,    29,    30,    31,   152,   118,    32,
      33,    34,   113,     6,   116,    35,     6,   161,    26,    27,
     144,     1,     2,    28,    29,    30,    31,    36,   128,    32,
      33,    34,    21,    22,    23,    35,    37,    25,     7,     8,
      21,    22,    23,   160,   119,    66,    42,    36,    67,   120,
      68,     1,   155,   156,    69,   138,    37,    70,    71,    72,
       7,     8,    73,    74,    75,   145,   147,   154,   123,   153,
     162,   165,    68,     1,    18,   122,    69,     7,     8,    70,
      71,    72,   164,    48,    73,    74,    75,     0,     0,    68,
       1,     0,     0,    69,     0,     0,    70,    71,    72,     0,
       0,    73,    74,    75,    54,    55,    56,    57,    58,     0,
      59,    60,    61,    62,    63,    64,    65,    54,    55,    56,
      57,    58,     0,     0,    54,    55,    56,    57,    58,   166,
      59,    60,    61,    62,    63,    64,    65,    21,    22,    23,
     108,     0,     0,    54,    55,    56,    57,    58,   135,    59,
      60,    61,    62,    63,    64,    65,    54,    55,    56,    57,
      58,    94,    59,    60,    61,    62,    63,    64,    65,    54,
      55,    56,    57,    58,   141,    59,    60,    61,    62,    63,
      64,    65,    54,    55,    56,    57,    58,   143,    59,    60,
      61,    62,    63,    64,    65,    54,    55,    56,    57,    58,
     146,    59,    60,    61,    62,    63,    64,    65,    54,    55,
      56,    57,    58,     0,     0,    60,    61,    62,    63,    64,
      65,    54,    55,    56,    57,    58,     0,     0,    60,    61,
      62,    63
};

static const yytype_int16 yycheck[] =
{
       1,    66,    24,    25,     0,    33,    34,    35,    36,     9,
      77,    91,    24,    25,    36,    37,    36,     4,    28,     1,
      12,    13,    14,    33,    36,    26,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,   118,    39,
     107,    37,    38,    30,    26,    28,    74,    36,   128,    29,
       3,     4,     5,     6,    37,    32,     9,    10,    11,    28,
      36,   141,    15,   143,    33,     3,     4,     5,     6,    46,
      47,     9,    10,    11,    27,    28,    30,    15,    24,    25,
     108,   109,   110,    36,   112,   165,    14,    24,    25,    27,
      36,     0,   120,     4,     3,    27,    34,   162,    36,    36,
     167,   166,   169,    24,    25,    26,    27,    27,    29,    27,
     111,    27,   140,     3,     4,     5,     6,   145,    41,     9,
      10,    11,    34,     0,    34,    15,     3,   155,    33,    34,
     131,    37,    38,     3,     4,     5,     6,    27,    28,     9,
      10,    11,    24,    25,    26,    15,    36,    29,    24,    25,
      24,    25,    26,   154,    34,    31,    37,    27,    34,    26,
      36,    37,    46,    47,    40,    34,    36,    43,    44,    45,
      24,    25,    48,    49,    50,    34,    34,    34,    32,    31,
      35,    28,    36,    37,     3,    92,    40,    24,    25,    43,
      44,    45,   157,    26,    48,    49,    50,    -1,    -1,    36,
      37,    -1,    -1,    40,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    50,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    10,    11,    12,
      13,    14,    -1,    -1,    10,    11,    12,    13,    14,    35,
      16,    17,    18,    19,    20,    21,    22,    24,    25,    26,
      27,    -1,    -1,    10,    11,    12,    13,    14,    34,    16,
      17,    18,    19,    20,    21,    22,    10,    11,    12,    13,
      14,    28,    16,    17,    18,    19,    20,    21,    22,    10,
      11,    12,    13,    14,    28,    16,    17,    18,    19,    20,
      21,    22,    10,    11,    12,    13,    14,    28,    16,    17,
      18,    19,    20,    21,    22,    10,    11,    12,    13,    14,
      28,    16,    17,    18,    19,    20,    21,    22,    10,    11,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    10,    11,    12,    13,    14,    -1,    -1,    17,    18,
      19,    20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    53,    54,    58,    74,    24,    25,    36,
      75,    76,    78,    81,    82,     9,    39,     0,    54,    36,
      36,    24,    25,    26,    27,    29,    33,    34,     3,     4,
       5,     6,     9,    10,    11,    15,    27,    36,    79,    80,
      82,    28,    37,    59,    60,     4,    30,    36,    76,    79,
      79,    79,    79,    29,    10,    11,    12,    13,    14,    16,
      17,    18,    19,    20,    21,    22,    31,    34,    36,    40,
      43,    44,    45,    48,    49,    50,    55,    56,    57,    58,
      61,    63,    64,    65,    66,    70,    71,    74,    77,    78,
      36,    28,    33,    30,    28,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    56,    27,    27,
      27,    27,    27,    34,    34,    79,    34,    57,    41,    34,
      26,    55,    60,    32,    28,    62,    79,    79,    28,    79,
      36,    37,    67,    78,    79,    34,    55,    79,    34,    28,
      33,    28,    55,    28,    78,    34,    28,    34,    79,    55,
      55,    68,    79,    31,    34,    46,    47,    72,    73,    69,
      78,    79,    35,    32,    73,    28,    35,    56,    55,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    54,    54,    55,    55,
      55,    56,    56,    57,    57,    57,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    65,    66,
      66,    67,    67,    67,    68,    68,    69,    69,    70,    71,
      72,    72,    73,    73,    74,    75,    75,    76,    76,    76,
      76,    77,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    80,
      80,    81,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     2,     1,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     5,     6,
       3,     1,     2,     4,     4,     5,     3,     1,     1,     1,
       1,     1,     2,     2,     2,     3,     3,     1,     5,     5,
       4,     0,     2,     1,     0,     1,     0,     1,     9,     7,
       2,     1,     4,     3,     3,     3,     1,     1,     1,     1,
       1,     2,     3,     2,     2,     2,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 33 "exp3.y" /* yacc.c:1646  */
    { printf("source -> source source_statement\n");}
#line 1408 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 34 "exp3.y" /* yacc.c:1646  */
    { printf("source -> source_statement\n");}
#line 1414 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 39 "exp3.y" /* yacc.c:1646  */
    { printf("source_statement -> func_def\n");}
#line 1420 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 40 "exp3.y" /* yacc.c:1646  */
    { printf("source_statement -> INCLUDE INCLUDEFILE\n");}
#line 1426 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 41 "exp3.y" /* yacc.c:1646  */
    { printf("source_statement -> INCLUDE STRING\n");}
#line 1432 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "exp3.y" /* yacc.c:1646  */
    { printf("source_statement -> var_def\n");}
#line 1438 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 47 "exp3.y" /* yacc.c:1646  */
    { printf("[BLOCK]block -> { seq }\n"); }
#line 1444 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 48 "exp3.y" /* yacc.c:1646  */
    { printf("[BLOCK]block -> statementseq\n"); }
#line 1450 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 49 "exp3.y" /* yacc.c:1646  */
    { printf("block -> SEMICO\n");}
#line 1456 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "exp3.y" /* yacc.c:1646  */
    { printf("[STATEMENT SEQ]statementseq -> statementseq statement\n"); }
#line 1462 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 55 "exp3.y" /* yacc.c:1646  */
    { printf("[STATEMENT SEQ]statementseq -> statement\n"); }
#line 1468 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "exp3.y" /* yacc.c:1646  */
    { printf("[STATEMENT]statement -> var_def_statement\n");}
#line 1474 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 62 "exp3.y" /* yacc.c:1646  */
    { printf("[STATEMENT]statement -> control\n");}
#line 1480 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 63 "exp3.y" /* yacc.c:1646  */
    { printf("[STATEMENT]statement -> assignment\n"); }
#line 1486 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 64 "exp3.y" /* yacc.c:1646  */
    {printf("[STATEMENT]statement -> func_call\n");}
#line 1492 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 65 "exp3.y" /* yacc.c:1646  */
    {printf("[STATEMENT]statement -> func_def\n");}
#line 1498 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "exp3.y" /* yacc.c:1646  */
    { printf("[Func %s DEF]func_def -> VARTYPE IDENTIFIER () <block>\n",(yyvsp[-4])); }
#line 1504 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 71 "exp3.y" /* yacc.c:1646  */
    { printf("[Func %s DEF]func_def -> VARTYPE IDENTIFIER (args) <block>\n",(yyvsp[-5])); }
#line 1510 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 86 "exp3.y" /* yacc.c:1646  */
    { printf("[FUNC CALL]func_call -> IDENTIFIER ();\n");}
#line 1516 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 87 "exp3.y" /* yacc.c:1646  */
    { printf("[FUNC CALL]func_call -> IDENTIFIER ();\n");}
#line 1522 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "exp3.y" /* yacc.c:1646  */
    { printf("control->if_block\n"); }
#line 1528 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "exp3.y" /* yacc.c:1646  */
    {printf("control -> for_block\n"); }
#line 1534 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 100 "exp3.y" /* yacc.c:1646  */
    { printf("control -> while_block\n"); }
#line 1540 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 101 "exp3.y" /* yacc.c:1646  */
    { printf("control -> switch_block\n"); }
#line 1546 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 102 "exp3.y" /* yacc.c:1646  */
    {printf("continue\n");}
#line 1552 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 103 "exp3.y" /* yacc.c:1646  */
    {printf("break\n");}
#line 1558 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 104 "exp3.y" /* yacc.c:1646  */
    {printf("return ;\n");}
#line 1564 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 105 "exp3.y" /* yacc.c:1646  */
    {printf("return exp;\n");}
#line 1570 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 110 "exp3.y" /* yacc.c:1646  */
    { printf("[IF]if_block -> if_ifheader ELSE block\n"); }
#line 1576 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 111 "exp3.y" /* yacc.c:1646  */
    { printf("[IF]if_block -> if_ifheader\n"); }
#line 1582 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 116 "exp3.y" /* yacc.c:1646  */
    {printf("if_ifheader -> if () block\n");}
#line 1588 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 121 "exp3.y" /* yacc.c:1646  */
    {printf("[WHILE]while_block -> while(expression) block\n");}
#line 1594 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 122 "exp3.y" /* yacc.c:1646  */
    {printf("[WHILE]while_block -> while() block\n");}
#line 1600 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 127 "exp3.y" /* yacc.c:1646  */
    {printf("for_init -> VARTYPE IDENTIFIER = expression\n");}
#line 1606 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 128 "exp3.y" /* yacc.c:1646  */
    {printf("for_init -> assignment\n");}
#line 1612 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 133 "exp3.y" /* yacc.c:1646  */
    {printf("for_condition -> expression\n");}
#line 1618 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 138 "exp3.y" /* yacc.c:1646  */
    {printf("for_after -> statement\n");}
#line 1624 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 143 "exp3.y" /* yacc.c:1646  */
    {printf("[FOR]for_block -> for(e1;e2;e3) block\n");}
#line 1630 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 148 "exp3.y" /* yacc.c:1646  */
    {printf("[SWITCH]switch_block -> switch(exp){case}\n");}
#line 1636 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 153 "exp3.y" /* yacc.c:1646  */
    {printf("caseseq -> caseseq casestat\n");}
#line 1642 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 154 "exp3.y" /* yacc.c:1646  */
    {printf("caseseq -> casestat\n");}
#line 1648 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 159 "exp3.y" /* yacc.c:1646  */
    {printf("casestat -> CASE expression COLON statementseq\n");}
#line 1654 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 160 "exp3.y" /* yacc.c:1646  */
    {printf("casestat -> DEFAULT COLON statementseq\n");}
#line 1660 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 165 "exp3.y" /* yacc.c:1646  */
    { printf("var_def -> VARTYPE var_def_idseq ;\n"); }
#line 1666 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 170 "exp3.y" /* yacc.c:1646  */
    { printf("var_def_idseq -> var_def_id_idseq var_def\n"); }
#line 1672 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 171 "exp3.y" /* yacc.c:1646  */
    { printf("var_def_idseq -> var_def\n"); }
#line 1678 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 176 "exp3.y" /* yacc.c:1646  */
    { printf("var_def -> assignment\n"); }
#line 1684 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 177 "exp3.y" /* yacc.c:1646  */
    { printf("var_def -> IDENTIFIER\n");}
#line 1690 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 178 "exp3.y" /* yacc.c:1646  */
    { printf("var_def -> array_def\n");}
#line 1696 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 179 "exp3.y" /* yacc.c:1646  */
    {printf("var_def -> array_item\n");}
#line 1702 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 183 "exp3.y" /* yacc.c:1646  */
    { printf("assignment_statement -> assignment ;\n"); }
#line 1708 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 188 "exp3.y" /* yacc.c:1646  */
    { printf("assignment -> IDENTIFIER ASG expression\n"); }
#line 1714 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 198 "exp3.y" /* yacc.c:1646  */
    { printf("factor -> OP expression CP\n"); }
#line 1720 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 218 "exp3.y" /* yacc.c:1646  */
    { printf("factor -> NUMBER\n"); }
#line 1726 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 219 "exp3.y" /* yacc.c:1646  */
    { printf("factor -> INT\n"); }
#line 1732 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 220 "exp3.y" /* yacc.c:1646  */
    { printf("factor -> DOUBLE\n"); }
#line 1738 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 221 "exp3.y" /* yacc.c:1646  */
    { printf("factor -> BOOL\n"); }
#line 1744 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 222 "exp3.y" /* yacc.c:1646  */
    { printf("factor -> IDENTIFIER\n");}
#line 1750 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 223 "exp3.y" /* yacc.c:1646  */
    {printf("factor -> STRING\n");}
#line 1756 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 224 "exp3.y" /* yacc.c:1646  */
    { printf("factor -> array\n");}
#line 1762 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 229 "exp3.y" /* yacc.c:1646  */
    { printf("array -> ID[]\n");}
#line 1768 "exp3.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 234 "exp3.y" /* yacc.c:1646  */
    {printf("array -> ID[n]\n");}
#line 1774 "exp3.tab.c" /* yacc.c:1646  */
    break;


#line 1778 "exp3.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 236 "exp3.y" /* yacc.c:1906  */


int main(int argc, char **argv)
{
  if(argc > 1){
    if( !(yyin = fopen(argv[1], "r")) ){
      perror(argv[1]);
      printf("NO INPUT FILE\n");
      return 1;
    }
  }

  yyparse();
  return 0;
}

yyerror(char *s)
{
  printf("error: L%d, %s\n", line, s);
}
