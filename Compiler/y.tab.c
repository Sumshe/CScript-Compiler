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
#line 1 "src/gcc.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<ctype.h>
FILE* fptr;
extern FILE *yyin;

extern char *yytext;
char st[100][10];
int top=0;
char i_[4]="0";
char temp[2]="t";
FILE *icg,*prod;
int check_table(int i, char *,int,int);
void yyerror(const char *);
int yylex();
void insert(char* name,int i,int type,double val,int,int);void begin();
int new_label();
int push_label();
int pop_label();
char* decr(char* new);

int arr[10]={0};
int global = 0,loc = 0;

struct sym
{
			char* name;
			int type;
			double val;
			int g;
			int l;
};

struct sym symtab[100];
int type=0;
char* attributes[30] = {"var","long int","long long int","short ","long","long long","char","int","short int","long int","long long int","short ","long","long","long long","char","int","float","double","long double"};

int i=0;

int label_count=0;
int label_stack[100];
int label_stack_top = 0;


#line 114 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INCLUDE = 258,
    HEADER = 259,
    VOID = 260,
    MAIN = 261,
    RETURN = 262,
    IF = 263,
    ELSE = 264,
    WHILE = 265,
    DO = 266,
    EXTERN = 267,
    STATIC = 268,
    REGISTER = 269,
    AUTO = 270,
    VAR = 271,
    SHORT = 272,
    LONG = 273,
    CHAR = 274,
    FLOAT = 275,
    DOUBLE = 276,
    SIGNED = 277,
    UNSIGNED = 278,
    PRINTF = 279,
    SCANF = 280,
    STRING = 281,
    FOR = 282,
    INCR = 283,
    DECR = 284,
    PLUS_E = 285,
    MIN_E = 286,
    LT = 287,
    GT = 288,
    LTE = 289,
    GTE = 290,
    EE = 291,
    NE = 292,
    INT = 293,
    ID = 294,
    NUMBER = 295
  };
#endif
/* Tokens.  */
#define INCLUDE 258
#define HEADER 259
#define VOID 260
#define MAIN 261
#define RETURN 262
#define IF 263
#define ELSE 264
#define WHILE 265
#define DO 266
#define EXTERN 267
#define STATIC 268
#define REGISTER 269
#define AUTO 270
#define VAR 271
#define SHORT 272
#define LONG 273
#define CHAR 274
#define FLOAT 275
#define DOUBLE 276
#define SIGNED 277
#define UNSIGNED 278
#define PRINTF 279
#define SCANF 280
#define STRING 281
#define FOR 282
#define INCR 283
#define DECR 284
#define PLUS_E 285
#define MIN_E 286
#define LT 287
#define GT 288
#define LTE 289
#define GTE 290
#define EE 291
#define NE 292
#define INT 293
#define ID 294
#define NUMBER 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 52 "src/gcc.y" /* yacc.c:355  */

			struct{
						int type;
						char* str;
						double val;
			}type_val;
			int type;
			char *str;

#line 244 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 261 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   210

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  213

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    42,     2,     2,    58,     2,
      46,    47,    55,     3,    50,    54,     2,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
      43,    53,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,    57,    49,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    90,    91,    92,    94,    96,    96,    96,
      97,    97,    97,    99,   100,   100,   100,   100,   100,   101,
     101,   101,   102,   103,   104,   106,   110,   115,   125,   134,
     139,   146,   147,   149,   150,   151,   151,   152,   154,   155,
     156,   157,   158,   159,   160,   162,   162,   162,   174,   174,
     174,   174,   187,   189,   190,   192,   193,   194,   195,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   218,
     219,   220,   222,   223,   224,   226,   226,   228,   228,   230,
     230,   230,   231,   231,   231,   232,   234,   234,   234,   235,
     235,   235,   236,   238,   238,   239,   240,   241,   242,   243,
     245,   246,   247,   248,   250,   252,   253,   255,   255,   256,
     256,   257,   257,   258,   258,   259,   259,   260,   260,   262,
     262,   263,   263
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'+'", "INCLUDE", "HEADER", "VOID",
  "MAIN", "RETURN", "IF", "ELSE", "WHILE", "DO", "EXTERN", "STATIC",
  "REGISTER", "AUTO", "VAR", "SHORT", "LONG", "CHAR", "FLOAT", "DOUBLE",
  "SIGNED", "UNSIGNED", "PRINTF", "SCANF", "STRING", "FOR", "INCR", "DECR",
  "PLUS_E", "MIN_E", "LT", "GT", "LTE", "GTE", "EE", "NE", "INT", "ID",
  "NUMBER", "'#'", "'<'", "'>'", "';'", "'('", "')'", "'{'", "'}'", "','",
  "'['", "']'", "'='", "'-'", "'*'", "'/'", "'|'", "'&'", "$accept",
  "Start", "Program", "Library", "main_func", "$@1", "$@2", "$@3", "$@4",
  "S", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "S1", "P", "Q", "M", "N",
  "O", "Cond", "DeclrList", "$@11", "varDeclrList", "varAssign", "$@12",
  "$@13", "$@14", "$@15", "$@16", "varArrayAssign", "ArrayList",
  "storageClass", "typeSpecifier", "Sign", "expression", "RelExpr", "$@17",
  "LogExpr", "$@18", "E", "$@19", "$@20", "$@21", "$@22", "T", "$@23",
  "$@24", "$@25", "$@26", "F", "$@27", "UnaryExpr", "Unary_op", "u_op",
  "rel_op", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "log_op",
  "$@34", "$@35", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    43,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,    35,    60,    62,    59,    40,    41,   123,   125,
      44,    91,    93,    61,    45,    42,    47,   124,    38
};
# endif

#define YYPACT_NINF -115

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-115)))

#define YYTABLE_NINF -46

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,    -2,  -115,  -115,  -115,  -115,  -115,   -12,    -3,  -115,
    -115,  -115,  -115,  -115,  -115,   -19,    29,    41,  -115,  -115,
      23,  -115,    20,  -115,   163,    14,    84,    25,  -115,    39,
    -115,  -115,     7,   164,    33,    35,    37,  -115,   114,     7,
    -115,     7,    45,  -115,    66,    -4,  -115,  -115,    62,  -115,
    -115,    71,    73,    13,  -115,   164,     5,    40,  -115,  -115,
    -115,  -115,  -115,   111,  -115,  -115,  -115,    72,  -115,  -115,
      79,  -115,    74,  -115,  -115,  -115,  -115,  -115,  -115,   164,
    -115,   164,    11,  -115,   -30,  -115,  -115,  -115,   164,   164,
    -115,    77,    76,  -115,  -115,     8,  -115,  -115,   164,     7,
      91,   164,   164,   164,     9,     9,   114,  -115,   149,  -115,
      40,  -115,   164,    40,  -115,  -115,    90,  -115,   149,   164,
      95,    64,    93,   131,    99,     7,   100,  -115,    97,    27,
    -115,  -115,  -115,   107,   101,   103,  -115,  -115,    15,   164,
    -115,   104,   149,   149,  -115,   164,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,    92,   102,   164,   164,
     108,    42,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,     9,     9,  -115,   164,
     149,  -115,  -115,  -115,  -115,   126,  -115,   110,  -115,  -115,
     149,   140,  -115,   129,   127,   164,  -115,   130,   180,  -115,
    -115,   146,   144,   149,  -115,  -115,   149,  -115,   147,  -115,
    -115,   149,  -115
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    55,    56,    57,    58,    75,    70,    71,    73,
      76,    77,    79,    80,    74,    39,     0,     0,     2,     5,
       0,    37,    41,    44,     0,     0,     0,     0,    67,    72,
      78,    68,     0,     0,     0,     0,     0,     1,     0,     0,
      34,     0,     0,    35,    62,    63,    65,    66,     0,    69,
      38,     0,     0,   103,   105,     0,     0,    95,   102,   107,
     108,    46,    49,     0,     4,    40,    33,     0,    36,    59,
      64,    60,     0,   110,   112,   111,   113,   115,   116,     0,
     104,     0,     0,    89,    43,    92,    96,    99,     0,     0,
       6,     0,     0,    61,     7,     0,   114,   106,     0,     0,
       0,     0,     0,     0,    47,    50,     0,    10,    24,   109,
      90,    42,     0,    93,    97,   100,     0,     3,    24,     0,
       0,    39,     0,     0,     0,     0,     0,    91,     0,    54,
      94,    98,   101,     0,     0,     0,    82,    83,    84,     0,
       8,     0,    24,    24,    52,     0,    45,    51,    11,    23,
     117,   119,   121,   123,   127,   125,     0,     0,     0,     0,
       0,    31,     9,    19,    13,    22,    53,    12,   118,   120,
     122,   124,   128,   126,   129,   131,    85,    87,    28,     0,
      24,   130,   132,    86,    88,     0,    32,     0,    14,    20,
      24,     0,    30,     0,     0,     0,    15,     0,     0,    27,
      29,     0,     0,    24,    16,    21,    24,    25,     0,    17,
      29,    24,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -115,  -115,   -32,  -115,  -115,  -115,  -115,  -115,  -115,  -114,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
     -13,  -115,     0,     2,  -115,   -15,    65,  -115,  -115,  -115,
    -115,  -115,  -115,    54,  -115,     1,  -115,  -112,  -115,  -115,
    -115,  -115,   -33,  -115,  -115,  -115,  -115,   -11,  -115,  -115,
    -115,  -115,   -20,  -115,  -105,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,    46,  -115,  -115
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    18,    91,    19,   108,   162,   118,   167,   122,
     190,   198,   206,   210,   180,   191,   208,   123,   201,   185,
     202,   194,   160,   124,    68,    21,    22,    34,    88,    35,
      89,   116,    23,   128,    24,   125,    26,   161,   136,   183,
     137,   184,   138,    98,   127,   101,   130,    57,   102,   131,
     103,   132,    58,    80,    59,    60,    81,   158,   168,   169,
     170,   171,   173,   172,   159,   181,   182
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    25,    20,   126,   134,    27,    64,   135,    83,    40,
      43,    83,    83,   126,    83,    70,    29,    50,    83,    30,
      99,    42,    82,   100,    65,    41,    66,    28,   164,   165,
      83,    32,    33,    36,   -45,    71,    31,   126,   126,    25,
      20,    37,    75,    76,    77,    78,    95,    15,   150,   151,
     152,   153,   154,   155,    15,   104,   105,    84,    97,    85,
     109,    96,    85,    85,    79,    85,   187,   186,    38,    85,
      39,    48,   156,   157,   117,   126,   192,   145,    49,   129,
      63,    85,   114,   115,   111,   126,    61,   110,    62,   205,
     113,    67,   207,    75,    76,    86,    87,   212,   126,   156,
     157,   126,    44,    45,    46,    69,   126,    25,    20,    72,
      43,    73,   129,    74,    32,    33,    90,   -45,    93,    92,
       1,   106,    94,    47,   107,   176,   177,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   112,
     133,   139,   140,   141,   142,   143,   144,   146,   149,   174,
     148,   193,   163,    14,    15,   178,    16,   119,   120,   189,
     175,   -26,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   188,   195,   196,   199,    51,    52,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   121,
     200,   203,   204,    51,    52,   197,   209,   211,   147,   166,
       0,     0,    14,    15,    53,    54,     0,   179,     0,     0,
      55
};

static const yytype_int16 yycheck[] =
{
      33,     0,     0,   108,   118,     7,    38,   119,     3,    24,
      25,     3,     3,   118,     3,    19,    19,    32,     3,    22,
      50,     7,    55,    53,    39,    24,    41,    39,   142,   143,
       3,    50,    51,     4,    53,    39,    39,   142,   143,    38,
      38,     0,    29,    30,    31,    32,    79,    40,    33,    34,
      35,    36,    37,    38,    40,    88,    89,    52,    47,    54,
      52,    81,    54,    54,    51,    54,   180,   179,    45,    54,
      50,    46,    57,    58,   106,   180,   190,    50,    39,   112,
      43,    54,   102,   103,    99,   190,    53,    98,    53,   203,
     101,    46,   206,    29,    30,    55,    56,   211,   203,    57,
      58,   206,    18,    19,    20,    39,   211,   106,   106,    47,
     125,    40,   145,    40,    50,    51,     5,    53,    39,    47,
       6,    44,    48,    39,    48,   158,   159,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    48,
      50,    46,    49,    12,    45,    45,    49,    40,    45,    57,
      49,    11,    48,    39,    40,    47,    42,     8,     9,    49,
      58,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    48,    46,    49,    47,    29,    30,
      17,    18,    19,    20,    21,    22,    23,    24,    39,    40,
      10,    45,    48,    29,    30,   195,    49,   210,   133,   145,
      -1,    -1,    39,    40,    40,    41,    -1,   161,    -1,    -1,
      46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    39,    40,    42,    60,    61,    63,
      82,    84,    85,    91,    93,    94,    95,     7,    39,    19,
      22,    39,    50,    51,    86,    88,     4,     0,    45,    50,
      84,    94,     7,    84,    18,    19,    20,    39,    46,    39,
      84,    29,    30,    40,    41,    46,   101,   106,   111,   113,
     114,    53,    53,    43,    61,    84,    84,    46,    83,    39,
      19,    39,    47,    40,    40,    29,    30,    31,    32,    51,
     112,   115,   101,     3,    52,    54,    55,    56,    87,    89,
       5,    62,    47,    39,    48,   101,   111,    47,   102,    50,
      53,   104,   107,   109,   101,   101,    44,    48,    64,    52,
     106,    84,    48,   106,   111,   111,    90,    61,    66,     8,
       9,    40,    68,    76,    82,    94,   113,   103,    92,   101,
     105,   108,   110,    50,    68,    96,    97,    99,   101,    46,
      49,    12,    45,    45,    49,    50,    40,    85,    49,    45,
      33,    34,    35,    36,    37,    38,    57,    58,   116,   123,
      81,    96,    65,    48,    68,    68,    92,    67,   117,   118,
     119,   120,   122,   121,    57,    58,   101,   101,    47,   123,
      73,   124,   125,    98,   100,    78,    96,    68,    48,    49,
      69,    74,    68,    11,    80,    46,    49,    81,    70,    47,
      10,    77,    79,    45,    48,    68,    71,    68,    75,    49,
      72,    79,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    61,    62,    64,    65,    63,
      66,    67,    63,    68,    69,    70,    71,    72,    68,    73,
      74,    68,    68,    68,    68,    75,    76,    77,    78,    79,
      80,    81,    81,    82,    82,    83,    82,    82,    84,    84,
      84,    84,    84,    84,    84,    86,    87,    85,    88,    89,
      90,    85,    91,    92,    92,    93,    93,    93,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    96,    96,    96,    98,    97,   100,    99,   102,
     103,   101,   104,   105,   101,   101,   107,   108,   106,   109,
     110,   106,   106,   112,   111,   111,   111,   111,   111,   111,
     113,   113,   113,   113,   114,   115,   115,   117,   116,   118,
     116,   119,   116,   120,   116,   121,   116,   122,   116,   124,
     123,   125,   123
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     3,     1,     1,     0,     0,     9,
       0,     0,     9,     3,     0,     0,     0,     0,    20,     0,
       0,    14,     3,     3,     0,     1,     0,     0,     0,     0,
       0,     1,     3,     3,     2,     0,     3,     1,     3,     1,
       3,     1,     6,     4,     1,     0,     0,     5,     0,     0,
       0,     8,     8,     3,     1,     1,     1,     1,     1,     3,
       3,     4,     2,     2,     3,     2,     2,     2,     2,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     2,     1,
       1,     0,     1,     1,     1,     0,     4,     0,     4,     0,
       0,     5,     0,     0,     5,     1,     0,     0,     5,     0,
       0,     5,     1,     0,     2,     1,     3,     1,     1,     4,
       2,     2,     2,     2,     3,     1,     1,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       3,     0,     3
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
#line 78 "src/gcc.y" /* yacc.c:1646  */
    {
																																							fprintf(prod,"\nStart = Program");
																																							FILE * sym_fil = fopen("./../IR/SymTab.table","w");
																																							printf("\n\t---------valid--------\n");
																																							fprintf(sym_fil,"\n\t ___________________________________________\n\t|            SYMBOL TABLE ENTRIES           |\n\t ___________________________________________\n");
																																							fprintf(sym_fil,"\n\t\tNAME\t\t\tTYPE\t\t\tVAL\t\t\tGlobal\t\t\tLocal\n\t\t____\t\t\t____\t\t\t____\t\t\t____\t\t\t____\n");
																																							for(int j=0;j<i;j++)
																																							{
																																										fprintf(sym_fil,"\n\t%d\t %s\t\t\t%s\t\t\t%f\t\t%d\t\t\t%d\n",j+1,symtab[j].name,attributes[symtab[j].type],symtab[j].val,symtab[j].g,symtab[j].l);
																																							}
																																							YYACCEPT;
																																				}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 90 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nProgram = # include library program");}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 91 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nProgram = DeclrList Program");}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 92 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nProgram = main_func");}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 96 "src/gcc.y" /* yacc.c:1646  */
    {global++;loc++;}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 96 "src/gcc.y" /* yacc.c:1646  */
    {arr[loc--]=1;}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 96 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nmain_func = main S");}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 97 "src/gcc.y" /* yacc.c:1646  */
    {global++;loc++;}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "src/gcc.y" /* yacc.c:1646  */
    {arr[loc--]=1;}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 97 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nmain_func = typeSpecifier MAIN S");}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 99 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nS = DeclrList S");}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 100 "src/gcc.y" /* yacc.c:1646  */
    {global++;loc++;}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 100 "src/gcc.y" /* yacc.c:1646  */
    {arr[loc--]=1;}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 100 "src/gcc.y" /* yacc.c:1646  */
    {global++;loc++;}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 100 "src/gcc.y" /* yacc.c:1646  */
    {arr[loc--]=1;}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nS = ifelse COND S S1 S");}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "src/gcc.y" /* yacc.c:1646  */
    {global++;loc++;}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 101 "src/gcc.y" /* yacc.c:1646  */
    {arr[loc--]=1;}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 101 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nS = dowhile S COND S");}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 102 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nS = UnaryExpr S");}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 104 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nS = ε");}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nS1 = S");}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 110 "src/gcc.y" /* yacc.c:1646  */
    { 		int l = new_label();
																							push_label(l);
																							fprintf(icg,"\nL%d :",l);
																				}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "src/gcc.y" /* yacc.c:1646  */
    {
																						int l1 = pop_label();
																						strcpy(temp,"t");
																						char *new_i = decr(i_);
																					  strcat(temp,new_i);
																						fprintf(icg,"\nif %s goto L%d",temp,l1);
																						int l2 = new_label();
																						push_label(l2);
																						fprintf(icg,"\ngoto L%d\nL%d :",l2,pop_label());
																				}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 125 "src/gcc.y" /* yacc.c:1646  */
    {
																						int l = new_label();
																						strcpy(temp,"t");
																						char *new_i = decr(i_);
																					  strcat(temp,new_i);
																						fprintf(icg,"\nifFalse %s goto L%d",temp,l);
																						push_label(l);
																				}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 134 "src/gcc.y" /* yacc.c:1646  */
    {
																						int l = pop_label();
																						fprintf(icg,"\nL%d :",l);
																				}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 139 "src/gcc.y" /* yacc.c:1646  */
    {
																						int l1 = pop_label();
																						int l2 = new_label();
																						push_label(l2);
																						push_label(l1);
																						fprintf(icg,"\ngoto L%d",l2);
																				}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 146 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nCOND = expression");}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 147 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nCOND = expression log_op expression");}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 149 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nDeclrList = storageClass typeSpecifier varDeclrList");}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 150 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nDeclrList = storageClass varDeclrList");}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 151 "src/gcc.y" /* yacc.c:1646  */
    {type=0;}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 151 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nDeclrList = typeSpecifier varDeclrList");}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 152 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nDeclrList = varDeclrList");}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 154 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nvarDeclrList = ID varDeclrList");}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 155 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nvarDeclrList = ID");}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 156 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nvarDeclrList = varAssign varDeclrList");}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 157 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nvarDeclrList = varAssign");}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 162 "src/gcc.y" /* yacc.c:1646  */
    {push_2((yyvsp[0].type_val).str);}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 162 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 162 "src/gcc.y" /* yacc.c:1646  */
    {
																																								fprintf(prod,"\nvarAssign = <ID,%s> = E",(yyvsp[-4].type_val).str);
																																							codegen_assign();
																																							int j = check_table(i,(yyvsp[-4].type_val).str,global,loc);
																																							if(j==i){
																																								insert((yyvsp[-4].type_val).str,i,type,(yyvsp[0].type_val).val,global,loc);
																																								i++;
																																							}
																																							else{
																																								insert((yyvsp[-4].type_val).str,j,type,(yyvsp[0].type_val).val,global,loc);
																																							}
																																				}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 174 "src/gcc.y" /* yacc.c:1646  */
    {push_2((yyvsp[0].type_val).str);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 174 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 174 "src/gcc.y" /* yacc.c:1646  */
    {
																																														  codegen_assign();
																																															int j = check_table(i,(yyvsp[-4].type_val).str,global,loc);
																																															if(j==i){
																																																insert((yyvsp[-4].type_val).str,i,type,(yyvsp[0].type_val).val,global,loc);
																																																i++;
																																															}
																																															else{
																																																insert((yyvsp[-4].type_val).str,j,type,(yyvsp[0].type_val).val,global,loc);
																																															}
																																								 }
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 185 "src/gcc.y" /* yacc.c:1646  */
    {printf("\nvarAssign = <ID,%s> = E varAssign",(yyvsp[-7].type_val).str);}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 197 "src/gcc.y" /* yacc.c:1646  */
    { type = 1; }
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 198 "src/gcc.y" /* yacc.c:1646  */
    { type = 2; }
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 199 "src/gcc.y" /* yacc.c:1646  */
    { type = 3; }
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 200 "src/gcc.y" /* yacc.c:1646  */
    { type = 4; }
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 201 "src/gcc.y" /* yacc.c:1646  */
    { type = 5; }
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 202 "src/gcc.y" /* yacc.c:1646  */
    { type = 6; }
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 203 "src/gcc.y" /* yacc.c:1646  */
    { type = 7; }
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 204 "src/gcc.y" /* yacc.c:1646  */
    { type = 8; }
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 205 "src/gcc.y" /* yacc.c:1646  */
    { type = 9; }
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 206 "src/gcc.y" /* yacc.c:1646  */
    { type = 10; }
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 207 "src/gcc.y" /* yacc.c:1646  */
    { type = 11; }
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 208 "src/gcc.y" /* yacc.c:1646  */
    { type = 12; }
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 209 "src/gcc.y" /* yacc.c:1646  */
    { type = 13; }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 210 "src/gcc.y" /* yacc.c:1646  */
    { type = 14; }
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 211 "src/gcc.y" /* yacc.c:1646  */
    { type = 15; }
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 212 "src/gcc.y" /* yacc.c:1646  */
    { type = 16; }
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 213 "src/gcc.y" /* yacc.c:1646  */
    { type = 0; }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 214 "src/gcc.y" /* yacc.c:1646  */
    { type = 17; }
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 215 "src/gcc.y" /* yacc.c:1646  */
    { type = 18; }
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 216 "src/gcc.y" /* yacc.c:1646  */
    { type = 19; }
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 222 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nexpression = RelExpr");}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 223 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nexpression = LogExpr");}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 224 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nexpression = E");}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 226 "src/gcc.y" /* yacc.c:1646  */
    {codegen_relog();}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 226 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nRelExpr = E rel_op T");}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 228 "src/gcc.y" /* yacc.c:1646  */
    {codegen_relog();}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 228 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nLogExpr = E log_op T");}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 230 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 230 "src/gcc.y" /* yacc.c:1646  */
    {codegen();}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 230 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nE = E + T");(yyval.type_val).val=(yyvsp[-4].type_val).val+(yyvsp[-1].type_val).val;}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 231 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 231 "src/gcc.y" /* yacc.c:1646  */
    {codegen();}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 231 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nE = E - T");(yyval.type_val).val=(yyvsp[-4].type_val).val-(yyvsp[-1].type_val).val;}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 232 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nE = T");(yyval.type_val).val=(yyvsp[0].type_val).val;}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 234 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 234 "src/gcc.y" /* yacc.c:1646  */
    {codegen();}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 234 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nT = T * F");(yyval.type_val).val=(yyvsp[-4].type_val).val*(yyvsp[-1].type_val).val;}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 235 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 235 "src/gcc.y" /* yacc.c:1646  */
    {codegen();}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 235 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nT = T / F");(yyval.type_val).val=(yyvsp[-4].type_val).val/(yyvsp[-1].type_val).val;}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 236 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nT = F"); (yyval.type_val).val=(yyvsp[0].type_val).val; }
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 238 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nF = <ID,%s>",(yyvsp[0].type_val).str);}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 238 "src/gcc.y" /* yacc.c:1646  */
    { (yyval.type_val).str=(yyvsp[-1].type_val).str;push_2((yyval.type_val).str); }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 239 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nF = <NUMBER,%d>",atoi(yytext));push();(yyval.type_val).val=atoi(yytext);}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 240 "src/gcc.y" /* yacc.c:1646  */
    { fprintf(prod,"\nF = E");(yyval.type_val)=(yyvsp[-1].type_val); }
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 245 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nUnaryExpr = <++> ID");}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 246 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nUnaryExpr = ID <++>");}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 247 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nUnaryExpr = <--> ID");}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 248 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nUnaryExpr = ID <-->");}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 250 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nUnary_op = ID u_op F");}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 252 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nu_op = <PLUS_E>");}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 253 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nu_op = <MIN_E>");}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 255 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 255 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nrel_op = <LT>");}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 256 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 256 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nrel_op = <GT>");}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 257 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 257 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nrel_op = <LTE>");}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 258 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 258 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nrel_op = <GTE>");}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 259 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 259 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nrel_op = <NE>");}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 260 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 260 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nrel_op = <EE>");}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 262 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 262 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nlog_op = <||>");}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 263 "src/gcc.y" /* yacc.c:1646  */
    {push();}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 263 "src/gcc.y" /* yacc.c:1646  */
    {fprintf(prod,"\nlog_op = <&&>");}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2241 "y.tab.c" /* yacc.c:1646  */
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
#line 265 "src/gcc.y" /* yacc.c:1906  */

int check_table(int i,char* name,int g,int l){

	for(int j=0;j<i;j++){
		if(strcmp(name,symtab[j].name)==0 && arr[symtab[j].l]!=1){
			printf("\nchecking table %s,l %d,g %d returning %d",name,g,l,j);
			return j;
		}
	}
	printf("\nchecking table %s,l %d,g %d returning %d not same scope",name,g,l,i);
	return i;
}
void insert(char* name,int i,int type,double val,int g,int l)
{
			if(type==16){
				val=(int)val;
			}
			if(type==0){
				if(isalpha((char)val+'0')){
					type=15;
				}
				if( isdigit( (char)val+'0' ) ){
					printf("\v----val=%f----\n",val);
					if( (double)(int)val==val ){
						printf("\n----%d-----\n",val);
						type=16;
					}
					else{
						type=18;
					}
				}
			}
			symtab[i].name=(char *)malloc(sizeof(char)*100);
			symtab[i].name=name;
			symtab[i].val=val;
			symtab[i].type=type;
			symtab[i].l=l;
			symtab[i].g=g;
}
int new_label()
{
			label_count++;
			return label_count-1;
}
int push_label(int label)
{
			label_stack[label_stack_top++] = label;
			return 0;
}
int pop_label()
{
			int i = 0;
			label_stack_top--;
			return label_stack[label_stack_top];
}
void yyerror(const char *str)
{
			printf("\terror\n");
}
void push()
{
  strcpy(st[++top],yytext);
}
void push_2(char *arg)
{
  strcpy(st[++top],arg);
}
void codegen()
{
 		strcpy(temp,"t");
 		strcat(temp,i_);
  	fprintf(icg,"\n%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
  	top-=2;
 		strcpy(st[top],temp);
 		incr();
 }
 void codegen_assign()
 {
 		fprintf(icg,"\n%s = %s\n",st[top-2],st[top]);
 		top-=2;
 }
 void codegen_relog()
 {
	 strcpy(temp,"t");
	 strcat(temp,i_);
	 fprintf(icg,"\n%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
	 top-=2;
	 strcpy(st[top],temp);
	 incr();
}
void incr()
{
	int x;
	sscanf(i_,"%d",&x);
	x = x + 1;
	sprintf(i_,"%d",x);
}
char *decr(char *new)
{
	char *ret = malloc(sizeof(char)*strlen(new)+1);
	strcpy(ret,new);
	int x;
	sscanf(ret,"%d",&x);
	x = x - 1;
	sprintf(ret,"%d",x);
	return ret;
}
int main()
{		fptr = fopen("./../PreProcess/test.c.comments","w");
		//yyin = fopen("test","r");
		icg = fopen("./../IR/irc.3ac","w");
		prod = fopen("./../IR/parse.log","w");
			if( !yyparse() )
			{
						printf("\tsuccessful !\n");
			}
			fclose(icg);
			fclose(fptr);
}
