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
#line 1 "SqlParser.y" /* yacc.c:339  */

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

void yyerror(char *s, ...);
void emit(char *s, ...);

#line 76 "SqlParser.tab.c" /* yacc.c:339  */

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
   by #include "SqlParser.tab.h".  */
#ifndef YY_YY_SQLPARSER_TAB_H_INCLUDED
# define YY_YY_SQLPARSER_TAB_H_INCLUDED
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
    NAME = 258,
    STRING = 259,
    INTNUM = 260,
    BOOL = 261,
    APPROXNUM = 262,
    USERVAR = 263,
    ASSIGN = 264,
    OR = 265,
    XOR = 266,
    ANDOP = 267,
    IN = 268,
    IS = 269,
    LIKE = 270,
    REGEXP = 271,
    NOT = 272,
    BETWEEN = 273,
    COMPARISON = 274,
    SHIFT = 275,
    MOD = 276,
    UMINUS = 277,
    ADD = 278,
    ALL = 279,
    ALTER = 280,
    ANALYZE = 281,
    AND = 282,
    ANY = 283,
    AS = 284,
    ASC = 285,
    AUTO_INCREMENT = 286,
    BEFORE = 287,
    BIGINT = 288,
    BINARY = 289,
    BIT = 290,
    BLOB = 291,
    BOTH = 292,
    BY = 293,
    CALL = 294,
    CASCADE = 295,
    CASE = 296,
    CHANGE = 297,
    CHAR = 298,
    CHECK = 299,
    COLLATE = 300,
    COLUMN = 301,
    COMMENT = 302,
    CONDITION = 303,
    CONSTRAINT = 304,
    CONTINUE = 305,
    CONVERT = 306,
    CREATE = 307,
    CROSS = 308,
    CURRENT_DATE = 309,
    CURRENT_TIME = 310,
    CURRENT_TIMESTAMP = 311,
    CURRENT_USER = 312,
    CURSOR = 313,
    DATABASE = 314,
    DATABASES = 315,
    DATE = 316,
    DATETIME = 317,
    DAY_HOUR = 318,
    DAY_MICROSECOND = 319,
    DAY_MINUTE = 320,
    DAY_SECOND = 321,
    DECIMAL = 322,
    DECLARE = 323,
    DEFAULT = 324,
    DELAYED = 325,
    DELETE = 326,
    DESC = 327,
    DESCRIBE = 328,
    DETERMINISTIC = 329,
    DISTINCT = 330,
    DISTINCTROW = 331,
    DIV = 332,
    DOUBLE = 333,
    DROP = 334,
    DUAL = 335,
    EACH = 336,
    ELSE = 337,
    ELSEIF = 338,
    ENCLOSED = 339,
    END = 340,
    ENUM = 341,
    ESCAPED = 342,
    EXISTS = 343,
    EXIT = 344,
    EXPLAIN = 345,
    FETCH = 346,
    FLOAT = 347,
    FOR = 348,
    FORCE = 349,
    FOREIGN = 350,
    FROM = 351,
    FULLTEXT = 352,
    GRANT = 353,
    GROUP = 354,
    HAVING = 355,
    HIGH_PRIORITY = 356,
    HOUR_MICROSECOND = 357,
    HOUR_MINUTE = 358,
    HOUR_SECOND = 359,
    IF = 360,
    IGNORE = 361,
    INDEX = 362,
    INFILE = 363,
    INNER = 364,
    INOUT = 365,
    INSENSITIVE = 366,
    INSERT = 367,
    INT = 368,
    INTEGER = 369,
    INTERVAL = 370,
    INTO = 371,
    ITERATE = 372,
    JOIN = 373,
    KEY = 374,
    KEYS = 375,
    KILL = 376,
    LEADING = 377,
    LEAVE = 378,
    LEFT = 379,
    LIMIT = 380,
    LINES = 381,
    LOAD = 382,
    LOCALTIME = 383,
    LOCALTIMESTAMP = 384,
    LOCK = 385,
    LONG = 386,
    LONGBLOB = 387,
    LONGTEXT = 388,
    LOOP = 389,
    LOW_PRIORITY = 390,
    MATCH = 391,
    MEDIUMBLOB = 392,
    MEDIUMINT = 393,
    MEDIUMTEXT = 394,
    MINUTE_MICROSECOND = 395,
    MINUTE_SECOND = 396,
    MODIFIES = 397,
    NATURAL = 398,
    NO_WRITE_TO_BINLOG = 399,
    NULLX = 400,
    NUMBER = 401,
    ON = 402,
    ONDUPLICATE = 403,
    OPTIMIZE = 404,
    OPTION = 405,
    OPTIONALLY = 406,
    ORDER = 407,
    OUT = 408,
    OUTER = 409,
    OUTFILE = 410,
    PRECISION = 411,
    PRIMARY = 412,
    PROCEDURE = 413,
    PURGE = 414,
    QUICK = 415,
    READ = 416,
    READS = 417,
    REAL = 418,
    REFERENCES = 419,
    RELEASE = 420,
    RENAME = 421,
    REPEAT = 422,
    REPLACE = 423,
    REQUIRE = 424,
    RESTRICT = 425,
    RETURN = 426,
    REVOKE = 427,
    RIGHT = 428,
    ROLLUP = 429,
    SCHEMA = 430,
    SCHEMAS = 431,
    SECOND_MICROSECOND = 432,
    SELECT = 433,
    SENSITIVE = 434,
    SEPARATOR = 435,
    SET = 436,
    SHOW = 437,
    SMALLINT = 438,
    SOME = 439,
    SONAME = 440,
    SPATIAL = 441,
    SPECIFIC = 442,
    SQL = 443,
    SQLEXCEPTION = 444,
    SQLSTATE = 445,
    SQLWARNING = 446,
    SQL_BIG_RESULT = 447,
    SQL_CALC_FOUND_ROWS = 448,
    SQL_SMALL_RESULT = 449,
    SSL = 450,
    STARTING = 451,
    STRAIGHT_JOIN = 452,
    TABLE = 453,
    TEMPORARY = 454,
    TEXT = 455,
    TERMINATED = 456,
    THEN = 457,
    TIME = 458,
    TIMESTAMP = 459,
    TINYBLOB = 460,
    TINYINT = 461,
    TINYTEXT = 462,
    TO = 463,
    TRAILING = 464,
    TRIGGER = 465,
    UNDO = 466,
    UNION = 467,
    UNIQUE = 468,
    UNLOCK = 469,
    UNSIGNED = 470,
    UPDATE = 471,
    USAGE = 472,
    USE = 473,
    USING = 474,
    UTC_DATE = 475,
    UTC_TIME = 476,
    UTC_TIMESTAMP = 477,
    VALUES = 478,
    VARBINARY = 479,
    VARCHAR = 480,
    VARYING = 481,
    WHEN = 482,
    WHERE = 483,
    WHILE = 484,
    WITH = 485,
    WRITE = 486,
    YEAR = 487,
    YEAR_MONTH = 488,
    ZEROFILL = 489,
    FSUBSTRING = 490,
    FTRIM = 491,
    FDATE_ADD = 492,
    FDATE_SUB = 493,
    FCOUNT = 494
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "SqlParser.y" /* yacc.c:355  */

int intval;
double floatval;
char *strval;
int subtok;

#line 363 "SqlParser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SQLPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 380 "SqlParser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1530

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  254
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  300
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  620

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   494

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    28,    22,     2,
     251,   252,    26,    24,   253,    25,   250,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   249,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
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
      15,    16,    17,    19,    20,    23,    29,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   287,   287,   288,   290,   291,   292,   293,   294,   295,
     296,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   320,   321,   322,   323,   324,   326,   328,   329,
     331,   332,   334,   335,   336,   337,   338,   341,   343,   344,
     345,   346,   347,   348,   349,   351,   352,   353,   355,   356,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   369,
     370,   371,   372,   374,   375,   377,   378,   380,   381,   383,
     384,   385,   387,   390,   392,   393,   395,   396,   397,   398,
     401,   403,   406,   407,   408,   410,   411,   413,   414,   415,
     416,   418,   418,   419,   421,   422,   424,   425,   427,   428,
     430,   432,   434,   436,   438,   440,   442,   446,   447,   448,
     450,   451,   452,   453,   456,   457,   459,   460,   463,   464,
     466,   467,   469,   470,   473,   475,   477,   479,   481,   484,
     485,   486,   488,   489,   491,   492,   494,   495,   496,   498,
     499,   501,   502,   505,   507,   509,   511,   513,   514,   516,
     517,   519,   522,   524,   528,   529,   530,   531,   533,   536,
     537,   540,   540,   541,   547,   549,   554,   555,   557,   558,
     559,   560,   561,   563,   563,   565,   566,   568,   569,   571,
     572,   573,   574,   576,   582,   585,   588,   591,   595,   599,
     601,   606,   611,   616,   618,   624,   625,   626,   629,   632,
     635,   638,   644,   647,   649,   652,   653,   658,   660,   663,
     667,   671,   674,   679,   683,   684,   686,   687,   689,   690,
     691,   692,   693,   696,   696,   698,   699,   700,   701,   703,
     705,   707,   709,   711,   713,   714,   715,   716,   720,   721,
     722,   724,   725,   727,   728,   729,   731,   732,   733,   737,
     738,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   765,   766,   768,
     769,   772,   774,   775,   776,   779,   781,   782,   782,   784,
     786
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "IN", "IS",
  "LIKE", "REGEXP", "NOT", "'!'", "BETWEEN", "COMPARISON", "'|'", "'&'",
  "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS",
  "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC",
  "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH",
  "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE",
  "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT",
  "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", "DATE", "DATETIME",
  "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL",
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE",
  "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP",
  "DUAL", "EACH", "ELSE", "ELSEIF", "ENCLOSED", "END", "ENUM", "ESCAPED",
  "EXISTS", "EXIT", "EXPLAIN", "FETCH", "FLOAT", "FOR", "FORCE", "FOREIGN",
  "FROM", "FULLTEXT", "GRANT", "GROUP", "HAVING", "HIGH_PRIORITY",
  "HOUR_MICROSECOND", "HOUR_MINUTE", "HOUR_SECOND", "IF", "IGNORE",
  "INDEX", "INFILE", "INNER", "INOUT", "INSENSITIVE", "INSERT", "INT",
  "INTEGER", "INTERVAL", "INTO", "ITERATE", "JOIN", "KEY", "KEYS", "KILL",
  "LEADING", "LEAVE", "LEFT", "LIMIT", "LINES", "LOAD", "LOCALTIME",
  "LOCALTIMESTAMP", "LOCK", "LONG", "LONGBLOB", "LONGTEXT", "LOOP",
  "LOW_PRIORITY", "MATCH", "MEDIUMBLOB", "MEDIUMINT", "MEDIUMTEXT",
  "MINUTE_MICROSECOND", "MINUTE_SECOND", "MODIFIES", "NATURAL",
  "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ON", "ONDUPLICATE", "OPTIMIZE",
  "OPTION", "OPTIONALLY", "ORDER", "OUT", "OUTER", "OUTFILE", "PRECISION",
  "PRIMARY", "PROCEDURE", "PURGE", "QUICK", "READ", "READS", "REAL",
  "REFERENCES", "RELEASE", "RENAME", "REPEAT", "REPLACE", "REQUIRE",
  "RESTRICT", "RETURN", "REVOKE", "RIGHT", "ROLLUP", "SCHEMA", "SCHEMAS",
  "SECOND_MICROSECOND", "SELECT", "SENSITIVE", "SEPARATOR", "SET", "SHOW",
  "SMALLINT", "SOME", "SONAME", "SPATIAL", "SPECIFIC", "SQL",
  "SQLEXCEPTION", "SQLSTATE", "SQLWARNING", "SQL_BIG_RESULT",
  "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL", "STARTING",
  "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TEXT", "TERMINATED", "THEN",
  "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO", "TRAILING",
  "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED", "UPDATE",
  "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME", "UTC_TIMESTAMP",
  "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN", "WHERE", "WHILE",
  "WITH", "WRITE", "YEAR", "YEAR_MONTH", "ZEROFILL", "FSUBSTRING", "FTRIM",
  "FDATE_ADD", "FDATE_SUB", "FCOUNT", "';'", "'.'", "'('", "')'", "','",
  "$accept", "stmt_list", "expr", "val_list", "opt_val_list", "trim_ltb",
  "interval_exp", "case_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_orderby", "opt_limit", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "opt_as_alias",
  "table_references", "table_reference", "table_factor", "opt_as",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "opt_temporary", "create_col_list", "create_definition", "$@1",
  "column_atts", "opt_length", "opt_binary", "opt_uz", "opt_csc",
  "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    33,   273,
     274,   124,    38,   275,    43,    45,    42,    47,    37,   276,
      94,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,    59,
      46,    40,    41,    44
};
# endif

#define YYPACT_NINF -349

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-349)))

#define YYTABLE_NINF -220

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-220)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,   -59,  -349,  -349,  -349,  -349,     4,     0,   104,  -201,
    -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,   -22,   -22,
    -349,   -85,    27,   118,   118,   308,   288,  -112,  -349,   238,
       1,  -349,   -71,  -349,   101,   147,   223,   -22,    -2,   268,
    -349,  -349,  -349,   -79,  -349,  -349,  -349,  -349,  -349,   289,
     295,  -168,  -349,  -349,  -349,  -349,   309,   679,   679,   679,
    -349,  -349,   679,   405,  -349,  -349,  -349,  -349,  -349,    73,
    -349,  -349,  -349,  -349,  -349,    77,    88,   106,   117,   119,
    1396,   -78,  -349,   679,   679,     4,     3,     5,     7,     2,
    -167,   213,  -349,  -349,   342,  -349,  -349,  -349,  -349,   380,
     358,  -349,    -6,  -101,     1,   391,  -148,  -144,   393,   679,
     679,   726,   726,  -349,  -349,   679,   971,   -75,   217,   679,
     196,   679,   679,   454,  -349,   679,   679,   679,   166,    14,
     679,   679,    36,   679,   130,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   423,  -349,     1,   679,  1461,
    1461,  -349,   428,   103,   181,    16,   432,     1,  -349,  -349,
    -349,   -89,  -349,     1,   310,   276,  -349,   442,    13,  -349,
     679,   304,     1,  -197,    -2,   447,   453,  -163,   447,  -137,
    -349,   758,  -349,   244,  1461,  1023,   -55,   679,  -349,   679,
     246,    51,   247,  -349,  -349,  -349,   248,   679,   779,   807,
     249,   876,  1481,  1500,  1158,   470,  -349,    23,  -349,  1203,
    1203,   252,   679,   679,  1434,   254,   255,   256,   217,   600,
     890,   926,   580,   373,   373,   478,   478,   478,   478,  -349,
    -349,  -197,  -349,    15,   384,   387,   388,  -349,  -349,  -349,
     -18,    35,   213,   276,   276,   401,   374,     1,  -349,   402,
    -349,  -349,  -349,   528,   179,  -349,   342,  1461,   485,   404,
    -197,  -349,  -349,   520,  -122,  -349,    37,   290,   385,  -122,
     290,   385,   679,  -349,   679,   679,  -349,  1320,  1054,  -349,
     679,  -349,  -349,  1299,   415,   415,  -349,  -349,   291,   293,
    -349,  -349,   470,  1203,  1203,   679,   217,   217,   217,   294,
     439,   103,   446,   446,   446,   679,   546,   547,   304,  -349,
    -349,     1,   679,  -141,     1,   -31,   108,   306,   307,   431,
      53,  -349,   557,   217,   679,   679,  -349,  -349,   519,   433,
     560,  -349,  -349,   561,   568,  -114,  -349,  -349,  -114,  -349,
    -349,  1461,  1341,  -349,   679,   855,   679,   679,   313,   314,
    -349,  -349,   316,   318,   710,   325,   326,   327,  -349,   533,
     472,  -349,   460,   337,   338,   339,  1461,   571,   -13,   404,
    -349,  1461,   679,   341,  -349,  -349,  -141,   179,  -349,   343,
     344,   453,   453,   345,   -26,   179,  1067,  -349,  1362,   361,
     834,  -349,  1461,   390,   597,  -349,  -349,  1461,    68,   368,
    -349,  -349,  -349,  1461,   679,  -349,   383,   950,  -349,  -349,
    -349,  -349,  -349,  -349,  -349,   679,   679,   304,  -349,   631,
     631,   631,   679,   679,   633,  -349,  1461,   453,  -349,    90,
     453,   453,    97,   114,   453,  -349,  -349,   386,   386,   386,
    -349,   386,  -349,  -349,   386,   386,   389,   386,   386,   386,
    -349,   596,  -349,   386,   596,   386,   392,   386,   596,  -349,
    -349,  -349,   386,   596,   396,   397,  -349,  -349,  -349,  -349,
    -349,   679,   679,   447,   595,  -349,   663,   568,   918,  -349,
    -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,   -23,
    1461,   404,  -349,   154,   163,   168,  1461,  1461,   622,   201,
      61,   211,   214,  -349,  -349,   229,   639,  -349,  -349,  -349,
    -349,  -349,  -349,   650,  -349,  -349,  -349,  -349,  -349,  -349,
    -349,  -349,   650,  -349,  -349,  -349,  -349,   656,   657,   113,
    1362,  1461,   403,  -349,  1461,  -349,  1461,   231,  -349,   480,
    -349,   530,  -349,   661,  -349,  -349,   679,  -349,  -349,  -349,
    -349,  -349,   233,  -183,   131,  -183,  -183,  -349,   237,  -183,
    -183,  -183,   131,  -183,   131,  -183,   239,  -183,   131,  -183,
     131,   420,   422,   521,  -349,   672,   382,  -349,  -349,   549,
    -111,  -349,  -349,  -349,   453,  -349,  -349,  1461,  -349,   673,
    -349,  -349,   489,   685,  -349,   686,  -349,  -349,  -349,  -349,
    -349,  -349,  -349,  -349,  -349,  -349,  -349,   453,   438,   441,
     690,  -349,   131,  -349,   131,   131,   241,  -349,  -349,  -349
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   224,   167,   178,   178,   108,     0,   178,     0,     0,
      83,   162,   174,   199,   203,   212,   217,   295,   215,   215,
     225,     0,     0,   184,   184,     0,     0,   296,   297,     0,
       0,     1,     0,     2,     0,     0,     0,   215,   171,     0,
     166,   164,   165,     0,   180,   181,   182,   183,   179,     0,
       0,     4,     7,     8,    10,     9,     6,     0,     0,     0,
     119,   109,     0,     0,    80,    81,    79,   110,   111,     0,
     112,   115,   116,   114,   113,     0,     0,     0,     0,     0,
     123,    84,   117,     0,     0,     0,   182,   179,   123,     0,
       0,   124,   126,   127,   133,     3,   216,   213,   214,     0,
       0,   169,    86,     0,     0,     0,   185,   185,     0,    40,
       0,    25,    26,    17,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,     0,   300,
     299,   298,     0,   156,     0,     0,     0,     0,   141,   140,
     144,   148,   145,     0,     0,   142,   132,     0,   292,   172,
       0,    99,     0,    86,   171,     0,     0,     0,     0,     0,
       5,    38,    41,     0,    36,     0,     0,     0,    71,     0,
       0,    38,     0,    57,    55,    56,     0,     0,     0,     0,
       0,     0,    19,    20,    18,     0,    34,     0,    32,    75,
      77,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      21,    22,    24,    11,    12,    13,    14,    15,    16,    23,
     121,    86,   118,   123,     0,     0,     0,   128,   161,   131,
       0,    86,   125,   142,   142,     0,   135,     0,   143,     0,
     130,   293,   294,     0,   233,   221,   133,    87,     0,   101,
      86,   168,   170,     0,   176,   106,     0,     0,   176,   176,
       0,   176,     0,    47,     0,     0,    69,     0,     0,    46,
       0,    50,    53,     0,     0,     0,    48,    49,     0,     0,
      35,    33,     0,    76,    78,     0,     0,     0,     0,     0,
      88,   156,   158,   158,   158,     0,     0,     0,    99,   146,
     147,     0,     0,   149,     0,   292,     0,     0,     0,     0,
       0,   226,     0,     0,     0,     0,   163,   173,     0,     0,
       0,   193,   186,     0,     0,   176,   198,   201,   176,   202,
      39,    73,     0,    72,     0,     0,     0,     0,     0,     0,
      42,    44,     0,     0,    37,     0,     0,     0,    28,     0,
      97,   129,     0,     0,     0,     0,   208,     0,     0,   101,
     138,   136,     0,     0,   134,   150,     0,   233,   223,     0,
       0,     0,     0,     0,   292,   233,     0,   291,    92,   100,
     102,   195,   194,     0,     0,   107,   190,   189,     0,     0,
     175,   200,    70,    74,     0,    51,     0,     0,    58,    59,
      43,    45,    31,    29,    30,     0,     0,    99,   157,     0,
       0,     0,     0,     0,     0,   204,   151,     0,   137,     0,
       0,     0,     0,     0,     0,   220,   227,   248,   248,   248,
     280,   248,   270,   273,   248,   248,     0,   248,   248,   248,
     282,   251,   281,   248,   251,   248,     0,   248,   251,   271,
     272,   279,   248,   251,     0,     0,   274,   235,    93,    94,
      90,     0,     0,     0,     0,   187,     0,     0,     0,    54,
      60,    61,    62,    63,    66,    67,    68,    65,    64,    95,
      98,   101,   159,     0,     0,     0,   209,   210,     0,     0,
     292,     0,     0,   230,   229,     0,     0,   253,   277,   259,
     256,   253,   253,     0,   253,   253,   253,   252,   256,   253,
     256,   253,     0,   253,   256,   253,   256,     0,     0,   234,
      92,   103,   177,   197,   196,   192,   191,     0,    52,     0,
      89,   104,   155,     0,   154,   153,     0,   152,   222,   231,
     232,   228,     0,   265,   275,   269,   267,   289,     0,   268,
     263,   264,   286,   262,   285,   266,     0,   261,   284,   260,
     283,     0,     0,     0,   242,     0,     0,   246,   237,     0,
       0,    91,   188,    96,     0,    85,   160,   211,   249,     0,
     254,   255,     0,     0,   256,     0,   256,   278,   256,   236,
     247,   238,   239,   241,   240,   245,   244,     0,   105,     0,
       0,   258,   287,   290,   288,   276,     0,   250,   257,   243
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -349,  -349,   -25,  -106,  -349,  -349,   410,   587,   697,    40,
      42,  -349,   292,   178,  -349,  -349,  -297,  -348,  -349,  -222,
    -349,  -349,   562,   -63,   197,   552,   -37,   455,  -349,  -349,
      -9,  -349,  -349,  -349,   336,   418,   -38,   -60,  -349,  -349,
    -349,   681,   550,  -349,  -214,   175,   699,   614,   487,   281,
    -177,  -349,  -349,  -349,  -349,  -349,   192,  -349,  -349,   348,
     376,  -349,  -349,   651,   -99,   -87,  -242,  -349,   240,  -293,
    -349,  -349,  -349,   674
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,   181,   182,   183,   197,   348,   117,     9,    10,
     171,   360,   389,   470,   540,   417,   259,   326,   585,   266,
      25,    81,    82,   146,    90,    91,    92,   167,    93,   164,
     249,   165,   245,   374,   375,   237,   363,   493,    94,    11,
      22,    43,   101,    12,   331,    23,    49,   177,   335,   398,
     264,    13,    14,    30,   241,    15,    35,    16,    21,   320,
     321,   322,   529,   507,   518,   553,   554,   467,   558,   255,
     256,    17,    27,    28
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,   269,   305,  -205,    88,    88,  -207,   423,  -206,    18,
     124,   369,    26,   192,   196,   372,   187,   606,   124,   188,
     206,   425,   378,   156,     5,   153,   104,   147,     1,   290,
      38,   207,   111,   112,   113,   329,   275,   114,   116,   276,
     170,   590,   175,   329,   243,   145,   178,     2,    33,   211,
       5,   212,   213,   145,   336,   337,   157,   339,   149,   150,
     591,   125,   126,   127,   128,   129,   130,   131,   132,   267,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   108,   109,   251,   184,   157,   373,     3,   251,
     185,   435,    34,   244,   191,   270,   198,   199,   201,   288,
     202,   203,   204,   176,    31,   209,   210,   176,   214,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     491,   400,    37,    80,   401,    19,   246,   172,   251,   154,
     573,   330,    39,    51,    52,    53,    54,    55,    56,   399,
     607,    85,    40,   541,     4,   257,   252,    57,    58,    20,
      97,   252,   105,   574,     5,    59,   280,     6,   190,   432,
     433,   189,   277,   215,   278,     1,   340,   216,   208,   575,
     301,    41,   283,    62,   105,   148,   251,   291,    95,    24,
      63,   189,    29,   592,     2,   593,   352,   293,   294,     5,
     252,   576,     7,    64,    65,    66,    42,    44,    96,    51,
      52,    53,    54,    55,    56,   499,   234,   548,   501,   502,
     313,    36,   505,    57,    58,   261,   539,   268,   235,   271,
     377,    59,  -171,  -218,   379,     3,    98,    69,    45,    99,
     471,   170,   306,    46,   309,   310,   380,   424,   252,    62,
     406,   577,   193,    47,   100,   289,    63,  -171,   100,   341,
     342,  -205,    89,    89,  -207,   345,  -206,   152,   299,    64,
      65,    66,    48,   253,   254,   364,   365,   578,   239,   157,
     354,   102,   170,   300,   370,   158,   562,   376,   564,   579,
     366,     4,   568,   308,   570,   316,   155,   371,   307,   332,
     333,     5,   106,    69,     6,   317,   532,    83,   107,   388,
     390,   173,   327,   392,   272,   384,   385,   318,    84,   397,
    -219,    51,    52,    53,    54,    55,    56,    44,   110,   403,
     475,   476,   407,   217,   118,    57,    58,   194,   119,     7,
     236,   159,   353,    59,    60,   580,   355,   356,   357,   120,
    -139,    61,   500,   385,   231,   319,   160,   426,    45,   503,
     333,    62,   612,    86,   614,   520,   615,   121,    63,   524,
     494,   495,   608,   387,   526,   161,   504,   333,   122,   260,
     123,    64,    65,    66,    75,    76,    77,    78,    79,   478,
     166,   218,    87,   168,   169,   616,   601,   602,   603,   604,
     388,   490,    67,    68,   174,   162,   180,   496,   497,   140,
     141,   142,   143,   144,     5,    69,   542,   543,    51,    52,
      53,    54,    55,    56,   195,   544,   543,   205,    70,   163,
     545,   543,    57,    58,   555,   556,   230,   559,   560,   561,
      59,   233,   563,   238,   565,   240,   567,   247,   569,   248,
      75,    76,    77,    78,    79,   250,   530,   531,    62,   534,
     263,   536,   397,   547,   333,    63,   265,    51,    52,    53,
      54,    55,    56,   549,   333,   258,   550,   333,    64,    65,
      66,    57,    58,    51,    52,    53,    54,    55,    56,    59,
     200,   551,   333,   582,   476,   588,   589,    57,    58,   594,
     595,   596,   595,   619,   333,    59,   273,    62,   279,   281,
     282,   286,    69,   292,    63,   296,   297,   298,   144,    71,
      72,    73,   302,    62,    74,   303,   304,    64,    65,    66,
      63,   587,    51,    52,    53,    54,    55,    56,   311,   314,
     312,   315,   324,    64,    65,    66,    57,    58,   325,   347,
     328,   334,   329,   350,    59,   351,   358,   359,   362,   367,
     368,    69,    75,    76,    77,    78,    79,   381,   382,   383,
     386,   393,    62,   394,   395,   408,   409,    69,   410,    63,
     411,    51,    52,    53,    54,    55,    56,   412,   413,   414,
     415,   416,    64,    65,    66,    57,    58,   418,   419,   420,
     421,   422,   427,    59,   430,   431,   434,   391,    51,    52,
      53,    54,    55,    56,   138,   139,   140,   141,   142,   143,
     144,    62,    57,    58,   471,   473,    69,   474,    63,   477,
      59,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,    64,    65,    66,   492,   479,   498,   506,    62,   517,
     513,   115,   546,   522,   552,    63,   396,   527,   528,    75,
      76,    77,    78,    79,   557,   584,   330,     5,    64,    65,
      66,   571,   572,   583,   586,    69,    51,    52,    53,    54,
      55,    56,   597,   533,   598,   599,   600,   605,   609,   610,
      57,    58,    51,    52,    53,    54,    55,    56,    59,   611,
     613,   333,    69,   617,   618,   349,    57,    58,    75,    76,
      77,    78,    79,   186,    59,    32,    62,   489,   581,   242,
     232,   323,   428,    63,    75,    76,    77,    78,    79,   361,
     103,   179,    62,    50,   262,   429,    64,    65,    66,    63,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   535,    64,    65,    66,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   338,   537,   151,
      69,   436,   566,    75,    76,    77,    78,    79,   125,   126,
     127,   128,   129,   130,   131,   132,    69,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   125,
     126,   127,   128,   129,   130,   131,   132,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,     0,    75,    76,    77,    78,    79,   125,   126,   127,
     128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,    75,
      76,    77,    78,    79,   125,   126,   127,   128,   129,   130,
     131,   132,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   125,   126,   127,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   125,   126,   127,   128,
     129,   130,   131,   132,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    75,    76,    77,
      78,    79,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,     0,    75,    76,    77,    78,    79,   125,   126,
     127,   128,   129,   130,   131,   132,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   137,
     138,   139,   140,   141,   142,   143,   144,   404,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   132,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   272,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   480,   481,   482,   483,     0,     0,     0,     0,
       0,     0,   284,   125,   126,   127,   128,   129,   130,   131,
     132,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     285,   484,   485,   486,   125,   126,   127,   128,   129,   130,
     131,   132,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,     0,   472,     0,   508,
     509,     0,   510,     0,     0,   511,   512,     0,   514,   515,
     516,     0,     0,     0,   519,     0,   521,   405,   523,   437,
     438,   439,   440,   525,     0,     0,     0,     0,     0,   441,
       0,     0,     0,     0,     0,     0,     0,     0,   287,     0,
       0,     0,     0,     0,     0,     0,     0,   442,   443,     0,
       0,     0,     0,   444,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   445,     0,     0,     0,     0,     0,
       0,     0,   446,     0,     0,     0,     0,     0,   447,     0,
     538,   128,   129,   130,   131,   132,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   448,
     449,   487,   488,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,   450,   451,
       0,     0,     0,   452,   453,   454,  -220,  -220,  -220,  -220,
     132,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   274,     0,     0,     0,     0,   455,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   456,     0,   457,
       0,     0,     0,     0,     0,   344,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   458,     0,     0,   459,
     460,   461,   462,   463,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     464,   465,     0,     0,     0,     0,     0,     0,   466,   125,
     126,   127,   128,   129,   130,   131,   132,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     125,   126,   127,   128,   129,   130,   131,   132,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   125,   126,   127,   128,   129,   130,   131,   132,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     0,     0,     0,     0,     0,     0,   124,
       0,   468,     0,     0,   346,     0,   125,   126,   127,   128,
     129,   130,   131,   132,   343,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,     0,     0,
       0,     0,     0,     0,   145,   402,     0,     0,     0,     0,
       0,     0,     0,   469,   125,   126,   127,   128,   129,   130,
     131,   132,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     295,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   127,   128,   129,   130,   131,   132,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144
};

static const yytype_int16 yycheck[] =
{
      25,   178,    20,     3,     3,     3,     3,    20,     3,    68,
       3,   308,     8,   119,   120,   156,    91,   128,     3,    94,
       6,   369,   315,   190,   187,    88,   105,   105,    61,     6,
       3,    17,    57,    58,    59,   157,    91,    62,    63,    94,
     237,   224,   190,   157,   133,    38,   190,    80,   249,    13,
     187,    15,    16,    38,   268,   269,   253,   271,    83,    84,
     243,    10,    11,    12,    13,    14,    15,    16,    17,   232,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   250,   251,   115,   110,   253,   228,   121,   115,
     115,   384,   114,   182,   119,   232,   121,   122,   123,   205,
     125,   126,   127,   251,     0,   130,   131,   251,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     417,   335,   207,   148,   338,   184,   163,   228,   115,    89,
      17,   253,   105,     3,     4,     5,     6,     7,     8,   253,
     251,   253,   115,   491,   177,   170,   177,    17,    18,   208,
       3,   177,   253,    40,   187,    25,   105,   190,   118,   381,
     382,   236,   187,    33,   189,    61,   272,    37,   154,    56,
     233,   144,   197,    43,   253,   253,   115,   154,   249,     4,
      50,   236,     7,    52,    80,    54,   292,   212,   213,   187,
     177,    78,   225,    63,    64,    65,   169,    79,    97,     3,
       4,     5,     6,     7,     8,   427,   103,   500,   430,   431,
     247,    19,   434,    17,    18,   173,   239,   177,   115,   179,
     251,    25,   228,   249,   116,   121,     3,    97,   110,    37,
     253,   237,   250,   115,   243,   244,   128,   250,   177,    43,
     346,   128,    46,   125,   250,   205,    50,   253,   250,   274,
     275,   251,   251,   251,   251,   280,   251,   250,   218,    63,
      64,    65,   144,   250,   251,   303,   304,   154,   252,   253,
     295,     3,   237,   231,   311,    62,   518,   314,   520,   166,
     305,   177,   524,   241,   526,   106,    89,   312,   253,   252,
     253,   187,     3,    97,   190,   116,   473,     9,     3,   324,
     325,   104,   260,   328,   253,   252,   253,   128,    20,   334,
     249,     3,     4,     5,     6,     7,     8,    79,     9,   344,
     252,   253,   347,   193,   251,    17,    18,   131,   251,   225,
     227,   118,   292,    25,    26,   222,   296,   297,   298,   251,
     127,    33,   252,   253,   147,   166,   133,   372,   110,   252,
     253,    43,   594,   115,   596,   454,   598,   251,    50,   458,
     420,   421,   584,   323,   463,   152,   252,   253,   251,   172,
     251,    63,    64,    65,   244,   245,   246,   247,   248,   404,
      38,   251,   144,     3,    26,   607,     4,     5,     6,     7,
     415,   416,    84,    85,     3,   182,     3,   422,   423,    26,
      27,    28,    29,    30,   187,    97,   252,   253,     3,     4,
       5,     6,     7,     8,   218,   252,   253,   251,   110,   206,
     252,   253,    17,    18,   511,   512,     3,   514,   515,   516,
      25,     3,   519,   252,   521,     3,   523,   127,   525,   163,
     244,   245,   246,   247,   248,     3,   471,   472,    43,   474,
       3,   476,   477,   252,   253,    50,     3,     3,     4,     5,
       6,     7,     8,   252,   253,   161,   252,   253,    63,    64,
      65,    17,    18,     3,     4,     5,     6,     7,     8,    25,
      26,   252,   253,   252,   253,   252,   253,    17,    18,   252,
     253,   252,   253,   252,   253,    25,   252,    43,   252,   252,
     252,   252,    97,   251,    50,   251,   251,   251,    30,   201,
     202,   203,   128,    43,   206,   128,   128,    63,    64,    65,
      50,   546,     3,     4,     5,     6,     7,     8,   127,   127,
     156,     3,    47,    63,    64,    65,    17,    18,   134,   124,
      20,   251,   157,   252,    25,   252,   252,   108,   102,     3,
       3,    97,   244,   245,   246,   247,   248,   251,   251,   128,
       3,   128,    43,     3,     3,   252,   252,    97,   252,    50,
     252,     3,     4,     5,     6,     7,     8,   252,   252,   252,
      47,   109,    63,    64,    65,    17,    18,   127,   251,   251,
     251,    20,   251,    25,   251,   251,   251,    78,     3,     4,
       5,     6,     7,     8,    24,    25,    26,    27,    28,    29,
      30,    43,    17,    18,   253,   225,    97,    20,    50,   251,
      25,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    63,    64,    65,     3,   252,     3,   251,    43,    43,
     251,   236,    20,   251,     5,    50,    78,   251,   251,   244,
     245,   246,   247,   248,     4,   125,   253,   187,    63,    64,
      65,     5,     5,   183,     3,    97,     3,     4,     5,     6,
       7,     8,   252,    78,   252,   154,     4,   128,     5,   190,
      17,    18,     3,     4,     5,     6,     7,     8,    25,     4,
       4,   253,    97,   252,     4,   285,    17,    18,   244,   245,
     246,   247,   248,   116,    25,     8,    43,   415,   530,   157,
     148,   256,   376,    50,   244,   245,   246,   247,   248,   301,
      39,   107,    43,    24,   174,   377,    63,    64,    65,    50,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    78,    63,    64,    65,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   270,   477,    85,
      97,   385,   522,   244,   245,   246,   247,   248,    10,    11,
      12,    13,    14,    15,    16,    17,    97,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,   244,   245,   246,   247,   248,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   244,
     245,   246,   247,   248,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   244,   245,   246,
     247,   248,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,   244,   245,   246,   247,   248,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    23,
      24,    25,    26,    27,    28,    29,    30,   102,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,   253,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
     253,   111,   112,   113,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,   253,    -1,   438,
     439,    -1,   441,    -1,    -1,   444,   445,    -1,   447,   448,
     449,    -1,    -1,    -1,   453,    -1,   455,   252,   457,    42,
      43,    44,    45,   462,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
     252,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   122,
     123,   241,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,   141,   142,
      -1,    -1,    -1,   146,   147,   148,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   211,    -1,    -1,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,   192,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,   234,    -1,    -1,    -1,    -1,    -1,    -1,   241,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    39,    -1,    -1,   105,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    94,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    61,    80,   121,   177,   187,   190,   225,   255,   262,
     263,   293,   297,   305,   306,   309,   311,   325,    68,   184,
     208,   312,   294,   299,   299,   274,     8,   326,   327,   299,
     307,     0,   262,   249,   114,   310,   310,   207,     3,   105,
     115,   144,   169,   295,    79,   110,   115,   125,   144,   300,
     300,     3,     4,     5,     6,     7,     8,    17,    18,    25,
      26,    33,    43,    50,    63,    64,    65,    84,    85,    97,
     110,   201,   202,   203,   206,   244,   245,   246,   247,   248,
     256,   275,   276,     9,    20,   253,   115,   144,     3,   251,
     278,   279,   280,   282,   292,   249,    97,     3,     3,   310,
     250,   296,     3,   295,   105,   253,     3,     3,   250,   251,
       9,   256,   256,   256,   256,   236,   256,   261,   251,   251,
     251,   251,   251,   251,     3,    10,    11,    12,    13,    14,
      15,    16,    17,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    38,   277,   105,   253,   256,
     256,   327,   250,   277,   263,   278,   190,   253,    62,   118,
     133,   152,   182,   206,   283,   285,    38,   281,     3,    26,
     237,   264,   228,   278,     3,   190,   251,   301,   190,   301,
       3,   256,   257,   258,   256,   256,   261,    91,    94,   236,
     263,   256,   257,    46,   131,   218,   257,   259,   256,   256,
      26,   256,   256,   256,   256,   251,     6,    17,   154,   256,
     256,    13,    15,    16,   256,    33,    37,   193,   251,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
       3,   278,   276,     3,   103,   115,   227,   289,   252,   252,
       3,   308,   279,   133,   182,   286,   280,   127,   163,   284,
       3,   115,   177,   250,   251,   323,   324,   256,   161,   270,
     278,   264,   296,     3,   304,     3,   273,   232,   263,   304,
     232,   263,   253,   252,   211,    91,    94,   256,   256,   252,
     105,   252,   252,   256,   253,   253,   252,   252,   257,   263,
       6,   154,   251,   256,   256,    36,   251,   251,   251,   263,
     264,   277,   128,   128,   128,    20,   250,   253,   264,   284,
     284,   127,   156,   280,   127,     3,   106,   116,   128,   166,
     313,   314,   315,   281,    47,   134,   271,   264,    20,   157,
     253,   298,   252,   253,   251,   302,   298,   298,   302,   298,
     257,   256,   256,    94,   211,   256,   105,   124,   260,   260,
     252,   252,   257,   263,   256,   263,   263,   263,   252,   108,
     265,   289,   102,   290,   290,   290,   256,     3,     3,   270,
     280,   256,   156,   228,   287,   288,   280,   251,   323,   116,
     128,   251,   251,   128,   252,   253,     3,   263,   256,   266,
     256,    78,   256,   128,     3,     3,    78,   256,   303,   253,
     298,   298,    94,   256,   102,   252,   257,   256,   252,   252,
     252,   252,   252,   252,   252,    47,   109,   269,   127,   251,
     251,   251,    20,    20,   250,   271,   256,   251,   288,   313,
     251,   251,   273,   273,   251,   323,   314,    42,    43,    44,
      45,    52,    70,    71,    76,    87,    95,   101,   122,   123,
     141,   142,   146,   147,   148,   172,   190,   192,   209,   212,
     213,   214,   215,   216,   233,   234,   241,   321,    39,    81,
     267,   253,   253,   225,    20,   252,   253,   251,   256,   252,
      72,    73,    74,    75,   111,   112,   113,   241,   242,   266,
     256,   270,     3,   291,   291,   291,   256,   256,     3,   273,
     252,   273,   273,   252,   252,   273,   251,   317,   317,   317,
     317,   317,   317,   251,   317,   317,   317,    43,   318,   317,
     318,   317,   251,   317,   318,   317,   318,   251,   251,   316,
     256,   256,   304,    78,   256,    78,   256,   303,   252,   239,
     268,   271,   252,   253,   252,   252,    20,   252,   323,   252,
     252,   252,     5,   319,   320,   319,   319,     4,   322,   319,
     319,   319,   320,   319,   320,   319,   322,   319,   320,   319,
     320,     5,     5,    17,    40,    56,    78,   128,   154,   166,
     222,   267,   252,   183,   125,   272,     3,   256,   252,   253,
     224,   243,    52,    54,   252,   253,   252,   252,   252,   154,
       4,     4,     5,     6,     7,   128,   128,   251,   273,     5,
     190,     4,   320,     4,   320,   320,   273,   252,     4,   252
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   254,   255,   255,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   257,   257,
     258,   258,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   259,   259,   259,   256,   256,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   256,
     256,   256,   256,   261,   261,   256,   256,   256,   256,   256,
     256,   256,   256,   262,   263,   263,   264,   264,   265,   265,
     266,   266,   267,   267,   267,   268,   268,   269,   269,   270,
     270,   271,   271,   271,   272,   272,   273,   273,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   275,   275,   275,
     276,   277,   277,   277,   278,   278,   279,   279,   280,   280,
     280,   280,   281,   281,   282,   282,   282,   282,   282,   283,
     283,   283,   284,   284,   285,   285,   286,   286,   286,   287,
     287,   288,   288,   289,   289,   289,   289,   290,   290,   291,
     291,   292,   262,   293,   294,   294,   294,   294,   293,   295,
     295,   296,   296,   293,   262,   297,   298,   298,   299,   299,
     299,   299,   299,   300,   300,   301,   301,   302,   302,   303,
     303,   303,   303,   297,   304,   304,   304,   304,   297,   262,
     305,   305,   305,   262,   306,   307,   307,   307,   308,   308,
     308,   308,   262,   309,   309,   310,   310,   262,   311,   311,
     311,   311,   311,   311,   312,   312,   313,   313,   314,   314,
     314,   314,   314,   315,   314,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   317,   317,
     317,   318,   318,   319,   319,   319,   320,   320,   320,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   322,
     322,   323,   324,   324,   324,   262,   325,   326,   326,   327,
     327
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     5,     6,
       6,     6,     3,     4,     3,     4,     3,     5,     1,     3,
       0,     1,     5,     6,     5,     6,     4,     4,     4,     4,
       4,     6,     8,     4,     7,     1,     1,     1,     6,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     3,     5,     4,     5,     3,     4,     3,     4,     1,
       1,     1,     2,     1,     3,    11,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     0,     2,     4,     0,     2,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       2,     2,     1,     0,     1,     3,     1,     1,     3,     5,
       3,     3,     1,     0,     5,     3,     5,     6,     5,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     0,
       1,     2,     4,     6,     6,     6,     0,     2,     0,     1,
       3,     3,     1,     7,     2,     2,     2,     0,     6,     2,
       4,     0,     2,     7,     1,     8,     0,     4,     0,     2,
       2,     2,     2,     1,     0,     0,     3,     3,     5,     1,
       1,     3,     3,     7,     3,     3,     5,     5,     7,     1,
       8,     7,     7,     1,     8,     0,     2,     2,     3,     5,
       5,     7,     1,     4,     4,     0,     2,     1,     8,    10,
       9,     6,    11,     8,     0,     1,     1,     3,     5,     4,
       4,     5,     5,     0,     4,     0,     3,     2,     3,     3,
       3,     3,     2,     5,     3,     3,     2,     3,     0,     3,
       5,     0,     1,     0,     2,     2,     0,     4,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     3,     5,     2,     4,     1,
       1,     1,     1,     3,     3,     3,     3,     5,     5,     1,
       3,     3,     0,     1,     1,     1,     2,     1,     3,     3,
       3
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
        case 4:
#line 290 "SqlParser.y" /* yacc.c:1646  */
    { emit("NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2142 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 291 "SqlParser.y" /* yacc.c:1646  */
    { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 2148 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 292 "SqlParser.y" /* yacc.c:1646  */
    { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2154 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 293 "SqlParser.y" /* yacc.c:1646  */
    { emit("STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2160 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 294 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER %d", (yyvsp[0].intval)); }
#line 2166 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 295 "SqlParser.y" /* yacc.c:1646  */
    { emit("FLOAT %g", (yyvsp[0].floatval)); }
#line 2172 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 296 "SqlParser.y" /* yacc.c:1646  */
    { emit("BOOL %d", (yyvsp[0].intval)); }
#line 2178 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 298 "SqlParser.y" /* yacc.c:1646  */
    { emit("ADD"); }
#line 2184 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 299 "SqlParser.y" /* yacc.c:1646  */
    { emit("SUB"); }
#line 2190 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 300 "SqlParser.y" /* yacc.c:1646  */
    { emit("MUL"); }
#line 2196 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 301 "SqlParser.y" /* yacc.c:1646  */
    { emit("DIV"); }
#line 2202 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 302 "SqlParser.y" /* yacc.c:1646  */
    { emit("MOD"); }
#line 2208 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 303 "SqlParser.y" /* yacc.c:1646  */
    { emit("MOD"); }
#line 2214 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 304 "SqlParser.y" /* yacc.c:1646  */
    { emit("NEG"); }
#line 2220 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 305 "SqlParser.y" /* yacc.c:1646  */
    { emit("AND"); }
#line 2226 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 306 "SqlParser.y" /* yacc.c:1646  */
    { emit("OR"); }
#line 2232 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 307 "SqlParser.y" /* yacc.c:1646  */
    { emit("XOR"); }
#line 2238 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 308 "SqlParser.y" /* yacc.c:1646  */
    { emit("BITOR"); }
#line 2244 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 309 "SqlParser.y" /* yacc.c:1646  */
    { emit("BITAND"); }
#line 2250 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 310 "SqlParser.y" /* yacc.c:1646  */
    { emit("BITXOR"); }
#line 2256 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 311 "SqlParser.y" /* yacc.c:1646  */
    { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2262 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 312 "SqlParser.y" /* yacc.c:1646  */
    { emit("NOT"); }
#line 2268 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 313 "SqlParser.y" /* yacc.c:1646  */
    { emit("NOT"); }
#line 2274 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 314 "SqlParser.y" /* yacc.c:1646  */
    { emit("CMP %d", (yyvsp[-1].subtok)); }
#line 2280 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 315 "SqlParser.y" /* yacc.c:1646  */
    { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2286 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 316 "SqlParser.y" /* yacc.c:1646  */
    { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2292 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 317 "SqlParser.y" /* yacc.c:1646  */
    { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2298 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 318 "SqlParser.y" /* yacc.c:1646  */
    { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2304 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 320 "SqlParser.y" /* yacc.c:1646  */
    { emit("ISNULL"); }
#line 2310 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 321 "SqlParser.y" /* yacc.c:1646  */
    { emit("ISNULL"); emit("NOT"); }
#line 2316 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 322 "SqlParser.y" /* yacc.c:1646  */
    { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2322 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 323 "SqlParser.y" /* yacc.c:1646  */
    { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2328 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 324 "SqlParser.y" /* yacc.c:1646  */
    { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2334 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 326 "SqlParser.y" /* yacc.c:1646  */
    { emit("BETWEEN"); }
#line 2340 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 328 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2346 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 329 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2352 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 331 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2358 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 334 "SqlParser.y" /* yacc.c:1646  */
    { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2364 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 335 "SqlParser.y" /* yacc.c:1646  */
    { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2370 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 336 "SqlParser.y" /* yacc.c:1646  */
    { emit("CMPANYSELECT 4"); }
#line 2376 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 337 "SqlParser.y" /* yacc.c:1646  */
    { emit("CMPALLSELECT 3"); }
#line 2382 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 338 "SqlParser.y" /* yacc.c:1646  */
    { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2388 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 341 "SqlParser.y" /* yacc.c:1646  */
    { emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2394 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 343 "SqlParser.y" /* yacc.c:1646  */
    { emit("COUNTALL"); }
#line 2400 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 344 "SqlParser.y" /* yacc.c:1646  */
    { emit(" CALL 1 COUNT"); }
#line 2406 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 345 "SqlParser.y" /* yacc.c:1646  */
    { emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2412 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 346 "SqlParser.y" /* yacc.c:1646  */
    { emit("CALL 2 SUBSTR"); }
#line 2418 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 347 "SqlParser.y" /* yacc.c:1646  */
    { emit("CALL 3 SUBSTR"); }
#line 2424 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 348 "SqlParser.y" /* yacc.c:1646  */
    { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2430 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 349 "SqlParser.y" /* yacc.c:1646  */
    { emit("CALL 3 TRIM"); }
#line 2436 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 351 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 1"); }
#line 2442 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 352 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 2"); }
#line 2448 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 353 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 3"); }
#line 2454 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 355 "SqlParser.y" /* yacc.c:1646  */
    { emit("CALL 3 DATE_ADD"); }
#line 2460 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 356 "SqlParser.y" /* yacc.c:1646  */
    { emit("CALL 3 DATE_SUB"); }
#line 2466 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 358 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 1"); }
#line 2472 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 359 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 2"); }
#line 2478 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 360 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 3"); }
#line 2484 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 361 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 4"); }
#line 2490 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 362 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 5"); }
#line 2496 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 363 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 6"); }
#line 2502 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 364 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 7"); }
#line 2508 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 365 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 8"); }
#line 2514 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 366 "SqlParser.y" /* yacc.c:1646  */
    { emit("NUMBER 9"); }
#line 2520 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 369 "SqlParser.y" /* yacc.c:1646  */
    { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2526 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 370 "SqlParser.y" /* yacc.c:1646  */
    { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2532 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 371 "SqlParser.y" /* yacc.c:1646  */
    { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2538 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 372 "SqlParser.y" /* yacc.c:1646  */
    { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2544 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 374 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2550 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 375 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2556 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 377 "SqlParser.y" /* yacc.c:1646  */
    { emit("LIKE"); }
#line 2562 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 378 "SqlParser.y" /* yacc.c:1646  */
    { emit("LIKE"); emit("NOT"); }
#line 2568 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 380 "SqlParser.y" /* yacc.c:1646  */
    { emit("REGEXP"); }
#line 2574 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 381 "SqlParser.y" /* yacc.c:1646  */
    { emit("REGEXP"); emit("NOT"); }
#line 2580 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 383 "SqlParser.y" /* yacc.c:1646  */
    { emit("NOW"); }
#line 2586 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 384 "SqlParser.y" /* yacc.c:1646  */
    { emit("NOW"); }
#line 2592 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 385 "SqlParser.y" /* yacc.c:1646  */
    { emit("NOW"); }
#line 2598 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 387 "SqlParser.y" /* yacc.c:1646  */
    { emit("STRTOBIN"); }
#line 2604 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 390 "SqlParser.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 2610 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 392 "SqlParser.y" /* yacc.c:1646  */
    { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2616 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 393 "SqlParser.y" /* yacc.c:1646  */
    { emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval)); }
#line 2622 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 396 "SqlParser.y" /* yacc.c:1646  */
    { emit("WHERE"); }
#line 2628 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 399 "SqlParser.y" /* yacc.c:1646  */
    { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2634 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 402 "SqlParser.y" /* yacc.c:1646  */
    { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2640 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 404 "SqlParser.y" /* yacc.c:1646  */
    { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2646 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 406 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2652 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 407 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2658 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 408 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2664 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 410 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2670 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 411 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2676 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 414 "SqlParser.y" /* yacc.c:1646  */
    { emit("HAVING"); }
#line 2682 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 416 "SqlParser.y" /* yacc.c:1646  */
    { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2688 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 418 "SqlParser.y" /* yacc.c:1646  */
    { emit("LIMIT 1"); }
#line 2694 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 419 "SqlParser.y" /* yacc.c:1646  */
    { emit("LIMIT 2"); }
#line 2700 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 422 "SqlParser.y" /* yacc.c:1646  */
    { emit("INTO %d", (yyvsp[0].intval)); }
#line 2706 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 424 "SqlParser.y" /* yacc.c:1646  */
    { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2712 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 425 "SqlParser.y" /* yacc.c:1646  */
    { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2718 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 427 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2724 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 429 "SqlParser.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2730 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 431 "SqlParser.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2736 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 433 "SqlParser.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2742 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 435 "SqlParser.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2748 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 437 "SqlParser.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2754 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 439 "SqlParser.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2760 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 441 "SqlParser.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2766 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 443 "SqlParser.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) =
(yyvsp[-1].intval) | 0200; }
#line 2773 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 446 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2779 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 447 "SqlParser.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2785 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 448 "SqlParser.y" /* yacc.c:1646  */
    { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2791 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 451 "SqlParser.y" /* yacc.c:1646  */
    { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2797 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 452 "SqlParser.y" /* yacc.c:1646  */
    { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2803 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 456 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2809 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 457 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2815 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 463 "SqlParser.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2821 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 464 "SqlParser.y" /* yacc.c:1646  */
    { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2828 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 466 "SqlParser.y" /* yacc.c:1646  */
    { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2834 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 467 "SqlParser.y" /* yacc.c:1646  */
    { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2840 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 474 "SqlParser.y" /* yacc.c:1646  */
    { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2846 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 476 "SqlParser.y" /* yacc.c:1646  */
    { emit("JOIN %d", 200); }
#line 2852 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 478 "SqlParser.y" /* yacc.c:1646  */
    { emit("JOIN %d", 200); }
#line 2858 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 480 "SqlParser.y" /* yacc.c:1646  */
    { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2864 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 482 "SqlParser.y" /* yacc.c:1646  */
    { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2870 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 484 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2876 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 485 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2882 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 486 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 2888 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 488 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2894 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 489 "SqlParser.y" /* yacc.c:1646  */
    {(yyval.intval) = 4; }
#line 2900 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 491 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2906 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 492 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 2912 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 494 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2918 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 495 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2924 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 496 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2930 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 501 "SqlParser.y" /* yacc.c:1646  */
    { emit("ONEXPR"); }
#line 2936 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 502 "SqlParser.y" /* yacc.c:1646  */
    { emit("USING %d", (yyvsp[-1].intval)); }
#line 2942 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 506 "SqlParser.y" /* yacc.c:1646  */
    { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 2948 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 508 "SqlParser.y" /* yacc.c:1646  */
    { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 2954 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 510 "SqlParser.y" /* yacc.c:1646  */
    { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 2960 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 513 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2966 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 514 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2972 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 516 "SqlParser.y" /* yacc.c:1646  */
    { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2978 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 517 "SqlParser.y" /* yacc.c:1646  */
    { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2984 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 519 "SqlParser.y" /* yacc.c:1646  */
    { emit("SUBQUERY"); }
#line 2990 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 522 "SqlParser.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 2996 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 526 "SqlParser.y" /* yacc.c:1646  */
    { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3002 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 528 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 3008 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 529 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 3014 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 530 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 3020 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 531 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3026 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 535 "SqlParser.y" /* yacc.c:1646  */
    { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 3032 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 536 "SqlParser.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 3038 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 538 "SqlParser.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 3044 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 544 "SqlParser.y" /* yacc.c:1646  */
    { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 3050 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 547 "SqlParser.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3056 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 552 "SqlParser.y" /* yacc.c:1646  */
    { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3062 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 555 "SqlParser.y" /* yacc.c:1646  */
    { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 3068 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 557 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3074 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 558 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3080 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 559 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 3086 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 560 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 3092 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 561 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3098 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 566 "SqlParser.y" /* yacc.c:1646  */
    { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 3104 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 568 "SqlParser.y" /* yacc.c:1646  */
    { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 3110 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 569 "SqlParser.y" /* yacc.c:1646  */
    { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3116 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 571 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3122 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 572 "SqlParser.y" /* yacc.c:1646  */
    { emit("DEFAULT"); (yyval.intval) = 1; }
#line 3128 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 573 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3134 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 574 "SqlParser.y" /* yacc.c:1646  */
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3140 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 579 "SqlParser.y" /* yacc.c:1646  */
    { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3146 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 583 "SqlParser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3153 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 586 "SqlParser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3160 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 589 "SqlParser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3167 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 592 "SqlParser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3174 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 597 "SqlParser.y" /* yacc.c:1646  */
    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3180 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 599 "SqlParser.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3186 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 604 "SqlParser.y" /* yacc.c:1646  */
    { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3192 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 609 "SqlParser.y" /* yacc.c:1646  */
    { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3198 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 613 "SqlParser.y" /* yacc.c:1646  */
    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3204 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 616 "SqlParser.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3210 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 622 "SqlParser.y" /* yacc.c:1646  */
    { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 3216 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 624 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3222 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 625 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3228 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 626 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3234 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 630 "SqlParser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3241 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 633 "SqlParser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3248 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 636 "SqlParser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
emit("ASSIGN %s.%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3255 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 639 "SqlParser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval));
YYERROR; }
emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3263 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 644 "SqlParser.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3269 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 648 "SqlParser.y" /* yacc.c:1646  */
    { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3275 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 650 "SqlParser.y" /* yacc.c:1646  */
    { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3281 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 652 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3287 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 654 "SqlParser.y" /* yacc.c:1646  */
    { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; }
(yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3294 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 658 "SqlParser.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3300 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 661 "SqlParser.y" /* yacc.c:1646  */
    { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3306 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 664 "SqlParser.y" /* yacc.c:1646  */
    { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval));
free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3313 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 669 "SqlParser.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3319 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 672 "SqlParser.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3325 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 676 "SqlParser.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3332 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 680 "SqlParser.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3339 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 683 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3345 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 684 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1;}
#line 3351 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 686 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3357 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 687 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3363 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 689 "SqlParser.y" /* yacc.c:1646  */
    { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3369 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 690 "SqlParser.y" /* yacc.c:1646  */
    { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3375 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 691 "SqlParser.y" /* yacc.c:1646  */
    { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3381 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 692 "SqlParser.y" /* yacc.c:1646  */
    { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3387 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 693 "SqlParser.y" /* yacc.c:1646  */
    { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3393 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 696 "SqlParser.y" /* yacc.c:1646  */
    { emit("STARTCOL"); }
#line 3399 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 697 "SqlParser.y" /* yacc.c:1646  */
    { emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3405 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 698 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3411 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 699 "SqlParser.y" /* yacc.c:1646  */
    { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3417 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 702 "SqlParser.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3423 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 704 "SqlParser.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3429 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 706 "SqlParser.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3435 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 708 "SqlParser.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3441 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 710 "SqlParser.y" /* yacc.c:1646  */
    { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3447 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 712 "SqlParser.y" /* yacc.c:1646  */
    { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3453 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 713 "SqlParser.y" /* yacc.c:1646  */
    { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3459 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 714 "SqlParser.y" /* yacc.c:1646  */
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3465 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 715 "SqlParser.y" /* yacc.c:1646  */
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3471 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 717 "SqlParser.y" /* yacc.c:1646  */
    { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3477 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 720 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3483 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 721 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3489 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 722 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3495 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 724 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3501 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 725 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 4000; }
#line 3507 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 727 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3513 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 728 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3519 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 729 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3525 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 732 "SqlParser.y" /* yacc.c:1646  */
    { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3531 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 733 "SqlParser.y" /* yacc.c:1646  */
    { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3537 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 737 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3543 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 738 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3549 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 739 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3555 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 740 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3561 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 741 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3567 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 742 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3573 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 743 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3579 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 744 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3585 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 745 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3591 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 746 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3597 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 747 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3603 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 748 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 100001; }
#line 3609 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 749 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 100002; }
#line 3615 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 750 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 100003; }
#line 3621 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 751 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 100004; }
#line 3627 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 752 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 100005; }
#line 3633 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 753 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3639 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 754 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3645 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 755 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3651 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 756 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3657 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 757 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 160001; }
#line 3663 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 758 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 160002; }
#line 3669 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 759 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 160003; }
#line 3675 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 760 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 160004; }
#line 3681 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 761 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3687 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 762 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3693 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 763 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3699 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 764 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3705 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 765 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3711 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 766 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3717 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 768 "SqlParser.y" /* yacc.c:1646  */
    { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3723 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 769 "SqlParser.y" /* yacc.c:1646  */
    { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3729 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 772 "SqlParser.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3735 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 774 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3741 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 775 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3747 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 776 "SqlParser.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 3753 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 779 "SqlParser.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3759 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 784 "SqlParser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; }
emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3766 "SqlParser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 786 "SqlParser.y" /* yacc.c:1646  */
    { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3772 "SqlParser.tab.c" /* yacc.c:1646  */
    break;


#line 3776 "SqlParser.tab.c" /* yacc.c:1646  */
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
#line 789 "SqlParser.y" /* yacc.c:1906  */

void
emit(char *s, ...)
{
extern yylineno;
va_list ap;
va_start(ap, s);
printf("rpn: ");
vfprintf(stdout, s, ap);
printf("\n");
}
void
yyerror(char *s, ...)
{
extern yylineno;
va_list ap;
va_start(ap, s);
fprintf(stderr, "%d: error: ", yylineno);
vfprintf(stderr, s, ap);
fprintf(stderr, "\n");
}

main(int ac, char **av)
{
extern FILE *yyin;
if(ac > 1 && !strcmp(av[1], "-d")) {
yydebug = 1; ac--; av++;
}
if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
perror(av[1]);
exit(1);
}
if(!yyparse())
printf("SQL parse worked\n");
else
printf("SQL parse failed\n");
} /* main */
