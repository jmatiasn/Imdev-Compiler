/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sintatico.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <string.h>
    #include "util.h"
    #include <mcheck.h>
    
    int yylex(void);
    int yyerror(char *msg);
    extern int yylineno;
    extern char * yytext;

#line 78 "y.tab.c" /* yacc.c:339  */

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
    V_INTEIRO = 258,
    V_REAL = 259,
    V_STRING = 260,
    ID = 261,
    MAIN = 262,
    RETORNO = 263,
    FUNC = 264,
    PROC = 265,
    TIPO_CHAR = 266,
    TIPO_VOID = 267,
    TIPO_REAL = 268,
    TIPO_INT = 269,
    TIPO_STRING = 270,
    TIPO_BOOL = 271,
    VERDADE = 272,
    FALSO = 273,
    VAR = 274,
    CONST = 275,
    SE = 276,
    SENAO = 277,
    ENTAO = 278,
    FIM_SE = 279,
    ENQUANTO = 280,
    FIM_ENQUANTO = 281,
    PARA = 282,
    FIM_PARA = 283,
    OP_ATRIBUICAO = 284,
    PONTO_VIRGULA = 285,
    DOIS_PONTOS = 286,
    VIRGULA = 287,
    FACA = 288,
    IMPRIME = 289,
    ALOCA = 290,
    LIBERA = 291,
    ABRE_PAREN = 292,
    FECHA_PAREN = 293,
    ABRE_COLCHETE = 294,
    FECHA_COLCHETE = 295,
    ABRE_CHAVES = 296,
    FECHA_CHAVES = 297,
    OP_SOMA = 298,
    OP_SUB = 299,
    OP_MULT = 300,
    OP_DIV = 301,
    OP_RESTO = 302,
    OP_LOGICO_OU = 303,
    OP_LOGICO_E = 304,
    OP_LOGICO_NEG = 305,
    OP_MENOR = 306,
    OP_MAIOR = 307,
    OP_MENOR_IGUAL = 308,
    OP_MAIOR_IGUAL = 309,
    OP_IGUALDADE = 310,
    OP_DIFERENTE = 311,
    OP_INC = 312,
    OP_DEC = 313,
    OP_IGUAL = 314
  };
#endif
/* Tokens.  */
#define V_INTEIRO 258
#define V_REAL 259
#define V_STRING 260
#define ID 261
#define MAIN 262
#define RETORNO 263
#define FUNC 264
#define PROC 265
#define TIPO_CHAR 266
#define TIPO_VOID 267
#define TIPO_REAL 268
#define TIPO_INT 269
#define TIPO_STRING 270
#define TIPO_BOOL 271
#define VERDADE 272
#define FALSO 273
#define VAR 274
#define CONST 275
#define SE 276
#define SENAO 277
#define ENTAO 278
#define FIM_SE 279
#define ENQUANTO 280
#define FIM_ENQUANTO 281
#define PARA 282
#define FIM_PARA 283
#define OP_ATRIBUICAO 284
#define PONTO_VIRGULA 285
#define DOIS_PONTOS 286
#define VIRGULA 287
#define FACA 288
#define IMPRIME 289
#define ALOCA 290
#define LIBERA 291
#define ABRE_PAREN 292
#define FECHA_PAREN 293
#define ABRE_COLCHETE 294
#define FECHA_COLCHETE 295
#define ABRE_CHAVES 296
#define FECHA_CHAVES 297
#define OP_SOMA 298
#define OP_SUB 299
#define OP_MULT 300
#define OP_DIV 301
#define OP_RESTO 302
#define OP_LOGICO_OU 303
#define OP_LOGICO_E 304
#define OP_LOGICO_NEG 305
#define OP_MENOR 306
#define OP_MAIOR 307
#define OP_MENOR_IGUAL 308
#define OP_MAIOR_IGUAL 309
#define OP_IGUALDADE 310
#define OP_DIFERENTE 311
#define OP_INC 312
#define OP_DEC 313
#define OP_IGUAL 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 13 "sintatico.y" /* yacc.c:355  */

  int    iValue; /* valor inteiro*/
  char   cValue; /* valor char*/
  char * sValue; /* valor string */
  float  fValue; /* valor real */
  struct Item* item;


#line 245 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 260 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   409

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  204

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    60,    60,    65,    66,    70,    71,    72,
      73,    77,    79,    84,    86,    91,    92,    96,   100,   101,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   117,
     123,   124,   125,   129,   131,   136,   137,   141,   142,   146,
     147,   152,   153,   152,   157,   162,   163,   164,   168,   169,
     170,   171,   175,   176,   180,   181,   182,   187,   188,   192,
     193,   194,   199,   200,   201,   202,   203,   207,   208,   212,
     213,   214,   215,   216,   217,   220,   221,   222,   223,   227,
     228,   229,   230,   239,   240,   244,   245,   246,   247,   248,
     249,   253,   254,   258,   259
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "V_INTEIRO", "V_REAL", "V_STRING", "ID",
  "MAIN", "RETORNO", "FUNC", "PROC", "TIPO_CHAR", "TIPO_VOID", "TIPO_REAL",
  "TIPO_INT", "TIPO_STRING", "TIPO_BOOL", "VERDADE", "FALSO", "VAR",
  "CONST", "SE", "SENAO", "ENTAO", "FIM_SE", "ENQUANTO", "FIM_ENQUANTO",
  "PARA", "FIM_PARA", "OP_ATRIBUICAO", "PONTO_VIRGULA", "DOIS_PONTOS",
  "VIRGULA", "FACA", "IMPRIME", "ALOCA", "LIBERA", "ABRE_PAREN",
  "FECHA_PAREN", "ABRE_COLCHETE", "FECHA_COLCHETE", "ABRE_CHAVES",
  "FECHA_CHAVES", "OP_SOMA", "OP_SUB", "OP_MULT", "OP_DIV", "OP_RESTO",
  "OP_LOGICO_OU", "OP_LOGICO_E", "OP_LOGICO_NEG", "OP_MENOR", "OP_MAIOR",
  "OP_MENOR_IGUAL", "OP_MAIOR_IGUAL", "OP_IGUALDADE", "OP_DIFERENTE",
  "OP_INC", "OP_DEC", "OP_IGUAL", "$accept", "programa", "principal",
  "$@1", "subprogramas", "subprograma", "proc", "funcao", "params",
  "param", "sentencas", "sentenca", "atribuicao", "atribuicaoArray",
  "instanciaArray", "listaValoresArray", "se", "enquanto", "$@2", "$@3",
  "para", "expr", "termo", "acessoArray", "exprUnaria", "exprBinaria",
  "operadorBinario", "operadorAritmetico", "operadorLogico",
  "operadorRelacional", "imprime", "literal", "literalBool",
  "tipoPrimitivo", "listaIds", "chamadaProcOuFuncao", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -96

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-96)))

#define YYTABLE_NINF -52

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     113,   -13,   -11,    28,    29,    32,    47,    54,   -96,   -96,
     113,   -96,   -96,   -96,   -96,    19,    27,    20,    36,    55,
      59,   -96,   -96,   -96,   -96,   -96,   -10,   -96,   -96,    19,
     166,   166,   145,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
      34,   140,   149,    31,    67,    14,     9,   353,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,    19,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,    62,    57,    64,    91,    58,
      65,   191,    79,   191,    80,    86,   283,    72,    84,    85,
     -96,   -96,   109,   191,   100,   191,   -96,   109,    94,    97,
      19,    98,    19,   -96,    19,   112,   -96,   -96,    22,    19,
     107,   120,   121,   131,   168,   134,   109,   -96,   -96,   -96,
     -96,   165,   -96,   185,   136,   191,   -96,   137,   109,   151,
     205,   152,   225,   -96,   -96,   245,    19,   -96,    82,   143,
     155,   -96,   -96,   -96,   109,   141,   -96,   144,     0,   -96,
       0,   -96,   -96,   320,    19,    19,   184,   186,   187,   188,
     -96,   181,   109,   -96,   -96,    19,   -96,   -96,   204,   339,
     265,   212,   213,   214,   215,   -96,   220,   206,   301,   109,
     230,     5,   -96,   -96,   -96,   -96,   -96,   -96,    19,    44,
     -96,   209,   -96,   109,   -96,   109,   231,   241,   240,   109,
     -96,   -96,   239,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     9,     2,
       5,     7,     8,    10,    32,     0,     0,     0,     0,     0,
       0,     1,     6,    79,    80,    81,    49,    83,    84,     0,
       0,     0,     0,    45,    50,    46,    47,    48,    82,    51,
       0,     0,     0,     0,     0,     0,     0,    56,    54,    55,
      31,    62,    63,    64,    65,    66,    68,    67,    72,    71,
      74,    73,    69,    70,     0,    59,    60,    61,     3,    86,
      88,    87,    85,    89,    90,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
      57,    58,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    52,    53,    49,     0,
       0,     0,     0,     0,     0,     0,    18,    20,    22,    23,
      24,     0,    25,    27,     0,     0,    16,     0,     0,     0,
       0,     0,     0,    92,    94,     0,     0,    41,     0,     0,
       0,     4,    19,    26,     0,     0,    11,     0,     0,    29,
       0,    30,    28,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,    12,    35,     0,    33,    34,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,    37,     0,
       0,     0,    76,    77,    75,    78,    14,    36,     0,     0,
      42,     0,    38,     0,    39,     0,     0,     0,     0,     0,
      40,    43,     0,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   -96,   272,   -96,   -96,   -96,   -37,   -96,
     -95,   -96,     3,   -96,   133,    96,   -96,   -96,   -96,   -96,
     -96,   -15,   -23,   -96,   -63,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -33,   182,   -88
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,    92,     9,    10,    11,    12,    76,    77,
     115,   116,   117,    14,   166,   177,   118,   119,   154,   195,
     120,   121,    33,    34,    35,    36,    64,    65,    66,    67,
     122,    37,    38,    78,    87,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    91,   127,    13,   123,    80,   164,    48,    49,   123,
      82,    84,    88,    13,    47,    89,    15,    23,    24,    25,
      26,   142,    23,    24,    25,    26,    16,    45,   123,    46,
      86,    27,    28,   147,    17,    18,    27,    28,    19,   165,
     123,    90,    69,    70,    71,    72,    73,    74,    99,   161,
     101,    15,    85,    20,    21,    29,   123,    41,   126,    45,
     124,    46,    30,    31,    29,    40,   193,   176,   194,    29,
      81,    30,    31,    42,   123,    68,    30,    31,    69,    70,
      71,    72,    73,    74,   189,   130,    43,   132,     1,    86,
      44,   123,   145,    93,   135,    94,    95,    96,   197,    97,
     198,     5,     6,    98,   202,   123,    83,   123,   100,   102,
     105,   123,    23,    24,    25,   108,   103,   109,   191,     1,
       2,   153,     3,     4,   106,   107,    27,    28,     5,     6,
     110,   125,     5,     6,   111,   128,   112,   129,   131,   169,
     170,   155,   134,   113,   136,   114,   156,   157,   158,   159,
     178,    69,    70,    71,    72,    73,    74,   137,   138,    29,
      69,    70,    71,    72,    73,    74,    30,    31,   139,    23,
      24,    25,    26,   178,   140,    50,   141,   144,    75,   146,
     148,   150,   162,    27,    28,   160,   163,    79,    51,    52,
      53,    54,    55,    56,    57,   143,    58,    59,    60,    61,
      62,    63,    69,    70,    71,    72,    73,    74,    51,    52,
      53,    54,    55,    56,    57,   -51,    58,    59,    60,    61,
      62,    63,   171,   175,   172,   173,   174,   179,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   149,   -51,   -51,   -51,   -51,
     -51,   -51,   182,   183,   184,   185,   187,   196,    51,    52,
      53,    54,    55,    56,    57,   151,    58,    59,    60,    61,
      62,    63,   186,   190,   199,   200,   201,   203,    51,    52,
      53,    54,    55,    56,    57,   152,    58,    59,    60,    61,
      62,    63,    22,   167,   192,     0,   133,     0,    51,    52,
      53,    54,    55,    56,    57,   181,    58,    59,    60,    61,
      62,    63,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,    56,    57,   104,    58,    59,    60,    61,
      62,    63,     0,     0,     0,     0,    51,    52,    53,    54,
      55,    56,    57,   188,    58,    59,    60,    61,    62,    63,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,     0,    58,    59,    60,    61,    62,    63,   168,     0,
       0,     0,     0,    51,    52,    53,    54,    55,    56,    57,
       0,    58,    59,    60,    61,    62,    63,   180,     0,     0,
       0,     0,    51,    52,    53,    54,    55,    56,    57,     0,
      58,    59,    60,    61,    62,    63,    51,    52,    53,    54,
      55,    56,    57,     0,    58,    59,    60,    61,    62,    63
};

static const yytype_int16 yycheck[] =
{
      15,    64,    97,     0,    92,    42,     6,    30,    31,    97,
      43,    44,     3,    10,    29,     6,    29,     3,     4,     5,
       6,   116,     3,     4,     5,     6,    37,    37,   116,    39,
      45,    17,    18,   128,     6,     6,    17,    18,     6,    39,
     128,    64,    11,    12,    13,    14,    15,    16,    81,   144,
      83,    29,    38,     6,     0,    50,   144,    37,    95,    37,
      93,    39,    57,    58,    50,    38,    22,   162,    24,    50,
      39,    57,    58,    37,   162,    41,    57,    58,    11,    12,
      13,    14,    15,    16,   179,   100,    31,   102,     6,   104,
      31,   179,   125,    31,   109,    38,    32,     6,   193,    41,
     195,    19,    20,    38,   199,   193,    39,   195,    29,    29,
      38,   199,     3,     4,     5,     6,    30,     8,   181,     6,
       7,   136,     9,    10,    40,    40,    17,    18,    19,    20,
      21,    31,    19,    20,    25,    41,    27,    40,    40,   154,
     155,   138,    30,    34,    37,    36,     3,     4,     5,     6,
     165,    11,    12,    13,    14,    15,    16,    37,    37,    50,
      11,    12,    13,    14,    15,    16,    57,    58,    37,     3,
       4,     5,     6,   188,     6,    30,    42,    41,    38,    42,
      29,    29,    41,    17,    18,    30,    42,    38,    43,    44,
      45,    46,    47,    48,    49,    30,    51,    52,    53,    54,
      55,    56,    11,    12,    13,    14,    15,    16,    43,    44,
      45,    46,    47,    48,    49,    30,    51,    52,    53,    54,
      55,    56,    38,    42,    38,    38,    38,    23,    43,    44,
      45,    46,    47,    48,    49,    30,    51,    52,    53,    54,
      55,    56,    30,    30,    30,    30,    40,    38,    43,    44,
      45,    46,    47,    48,    49,    30,    51,    52,    53,    54,
      55,    56,    42,    33,    33,    24,    26,    28,    43,    44,
      45,    46,    47,    48,    49,    30,    51,    52,    53,    54,
      55,    56,    10,   150,   188,    -1,   104,    -1,    43,    44,
      45,    46,    47,    48,    49,    30,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    32,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    32,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    38,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    38,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     9,    10,    19,    20,    61,    62,    64,
      65,    66,    67,    72,    73,    29,    37,     6,     6,     6,
       6,     0,    64,     3,     4,     5,     6,    17,    18,    50,
      57,    58,    81,    82,    83,    84,    85,    91,    92,    95,
      38,    37,    37,    31,    31,    37,    39,    81,    82,    82,
      30,    43,    44,    45,    46,    47,    48,    49,    51,    52,
      53,    54,    55,    56,    86,    87,    88,    89,    41,    11,
      12,    13,    14,    15,    16,    38,    68,    69,    93,    38,
      68,    39,    93,    39,    93,    38,    81,    94,     3,     6,
      82,    84,    63,    31,    38,    32,     6,    41,    38,    93,
      29,    93,    29,    30,    32,    38,    40,    40,     6,     8,
      21,    25,    27,    34,    36,    70,    71,    72,    76,    77,
      80,    81,    90,    95,    93,    31,    68,    70,    41,    40,
      81,    40,    81,    94,    30,    81,    37,    37,    37,    37,
       6,    42,    70,    30,    41,    93,    42,    70,    29,    30,
      29,    30,    30,    81,    78,    72,     3,     4,     5,     6,
      30,    70,    41,    42,     6,    39,    74,    74,    38,    81,
      81,    38,    38,    38,    38,    42,    70,    75,    81,    23,
      38,    30,    30,    30,    30,    30,    42,    40,    32,    70,
      33,    84,    75,    22,    24,    79,    38,    70,    70,    33,
      24,    26,    70,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    63,    62,    64,    64,    65,    65,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    70,    70,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    72,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    78,    79,    77,    80,    81,    81,    81,    82,    82,
      82,    82,    83,    83,    84,    84,    84,    85,    85,    86,
      86,    86,    87,    87,    87,    87,    87,    88,    88,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    90,    91,
      91,    91,    91,    92,    92,    93,    93,    93,    93,    93,
      93,    94,    94,    95,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     7,     1,     2,     1,     1,     1,
       1,     7,     8,     9,    10,     1,     3,     2,     1,     2,
       1,     3,     1,     1,     1,     1,     2,     1,     3,     7,
       7,     4,     1,     8,     8,     1,     3,     1,     3,     7,
       9,     0,     0,     9,    10,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     2,     2,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     5
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
#line 55 "sintatico.y" /* yacc.c:1646  */
    {printf("\n\npassou no teste\n\n");
                                                                                print_itens();}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 60 "sintatico.y" /* yacc.c:1646  */
    {escreverMain();}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 61 "sintatico.y" /* yacc.c:1646  */
    {escrever("}");}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 65 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 66 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 70 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 71 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 72 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 73 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 78 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 80 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 85 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 87 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 91 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 105 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 106 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 107 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 108 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 109 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 111 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 112 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 113 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 117 "sintatico.y" /* yacc.c:1646  */
    {
                                                                                verificarIDJaDecl((yyvsp[-5].sValue));
                                                                                char* tipo = verificarCompatTipos((yyvsp[-3].sValue), (yyvsp[-1].item));
                                                                                adicionarID((yyvsp[-5].sValue), (yyvsp[-1].item));
                                                                                escreverAtribuicao((yyvsp[-3].sValue),(yyvsp[-5].sValue),(yyvsp[-1].item));
                                                                                }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 123 "sintatico.y" /* yacc.c:1646  */
    {/*escreverAtribuicaoConst($2,$6);*/}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 124 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 125 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 132 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 136 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 137 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 141 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 142 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 146 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 148 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 152 "sintatico.y" /* yacc.c:1646  */
    {escrever("while (");}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 153 "sintatico.y" /* yacc.c:1646  */
    {escrever(") {\n");}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 153 "sintatico.y" /* yacc.c:1646  */
    {escrever("}\n");}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 158 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 162 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 163 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 164 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 168 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 169 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = obterItem((yyvsp[0].sValue));}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 170 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 171 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 175 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 176 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 180 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = incrementar((yyvsp[0].item));}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 181 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = decrementar((yyvsp[0].item));}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 182 "sintatico.y" /* yacc.c:1646  */
    {verificarSeExprEhBooleano((yyvsp[0].item));
                                                                                (yyval.item) = negarExprBooleano((yyvsp[0].item));}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 187 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = processarExprBin((yyvsp[-2].item), (yyvsp[-1].sValue), (yyvsp[0].item));}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 188 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = processarExprBin((yyvsp[-2].item), (yyvsp[-1].sValue), (yyvsp[0].item));}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 192 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 193 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 194 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 199 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 200 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 201 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 202 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 203 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 207 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 208 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 212 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 213 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 214 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 215 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 216 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 217 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 220 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 221 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 222 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 223 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 227 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = criarItemCompleto(convIntParaChar((yyvsp[0].iValue)));}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 228 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = criarItemCompleto(convFloatParaChar((yyvsp[0].fValue)));}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 229 "sintatico.y" /* yacc.c:1646  */
    {(yyval.item) = criarItemCompleto((yyvsp[0].sValue));}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 230 "sintatico.y" /* yacc.c:1646  */
    {
                                                                                    Item* item = novoItem();
                                                                                    item->tipoCompleto->tipo = "booleano";
                                                                                    item->tipoCompleto->sValor = (yyvsp[0].sValue);
                                                                                    (yyval.item) = item;
                                                                                }
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 239 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 240 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 244 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 245 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 246 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 247 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 248 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 249 "sintatico.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 253 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 254 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 258 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 259 "sintatico.y" /* yacc.c:1646  */
    {}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2093 "y.tab.c" /* yacc.c:1646  */
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
#line 262 "sintatico.y" /* yacc.c:1906  */

int yyerror(char *msg) {
    fprintf(stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
    return 0;


}

int main (void) {
	return yyparse ( );
	escreverInclude();
}
