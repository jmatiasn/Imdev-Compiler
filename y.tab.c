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
    int yylex(void);
    int yyerror(char *msg);
    extern int yylineno;
    extern char * yytext;

#line 75 "y.tab.c" /* yacc.c:339  */

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
#line 10 "sintatico.y" /* yacc.c:355  */

  int    iValue; /* valor inteiro*/
  char   cValue; /* valor char*/
  char * sValue; /* valor string */
  float  fValue; /* valor real */



#line 242 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 257 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   224

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

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
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    49,    53,    54,    58,    59,    60,    61,
      65,    67,    72,    74,    79,    80,    84,    88,    89,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   105,   106,
     107,   108,   112,   114,   119,   120,   124,   125,   129,   130,
     135,   140,   145,   146,   150,   151,   152,   153,   154,   156,
     157,   158,   159,   160,   161,   162,   166,   167,   171,   172,
     173,   174,   175,   179,   180,   184,   185,   186,   187,   188,
     189,   192,   196,   197,   201,   202,   206,   207,   208,   209,
     210,   211,   215,   216,   220,   221
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
  "subprogramas", "subprograma", "proc", "funcao", "params", "param",
  "sentencas", "sentenca", "atribuicao", "atribuicaoarray",
  "instanciaarray", "listavaloresarray", "se", "enquanto", "para",
  "exprUnaria", "expr", "acessoarray", "operador", "oplogico",
  "oprelacional", "imprime", "literal", "tbool", "tprimitivo", "listaids",
  "chamadaprocoufuncao", YY_NULLPTR
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

#define YYPACT_NINF -78

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-78)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      76,   -24,   -25,    19,    27,    51,    54,    59,   -78,   -78,
      76,   -78,   -78,   -78,   -78,    20,    23,    26,    35,    45,
      47,   -78,   -78,   -78,   -78,   124,   -78,   -78,    25,    50,
     -78,   101,   -78,   -78,    48,   121,   127,    40,    53,    12,
       1,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,    20,    20,    20,   -78,   -78,   -78,
      20,    20,    95,   -78,   -78,   -78,   -78,   -78,   -78,    57,
      43,    61,    88,    69,    60,   170,    73,   170,    83,    87,
      81,    80,    79,    84,   -78,   -78,   -78,   -78,   -78,   -23,
      20,    86,    89,   113,   114,   119,   116,    95,   -78,   -78,
     -78,   -78,   130,   -78,   -78,   170,   131,   170,   -78,    95,
     123,   134,    20,   147,    20,   -78,    20,   158,   -78,   -78,
     -78,   -78,   159,    20,    20,     2,   185,   161,   -78,   -78,
     -78,   151,   170,   -78,   152,    95,   164,   165,   167,   168,
     -78,   -78,   -78,   162,   163,    20,   166,   -78,    95,   156,
     -78,   157,     5,   -78,     5,   -78,   179,   172,   173,   176,
     169,    95,   -78,   -78,    20,   -78,   -78,    95,    95,   201,
     -78,   -78,   171,   174,   177,    -5,   182,   -30,   178,   -78,
     -78,    20,    95,   -78,   -78,   184,   -78,   186,    95,   -78,
     187,   -78
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     8,     2,
       4,     6,     7,     9,    31,     0,     0,     0,     0,     0,
       0,     1,     5,    72,    73,    44,    74,    75,     0,     0,
      48,    45,    49,    55,     0,     0,     0,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    64,    63,    68,    67,
      70,    69,    65,    66,     0,     0,     0,    51,    50,    30,
       0,     0,     0,    77,    79,    78,    76,    80,    81,     0,
       0,    14,     0,     0,     0,     0,     0,     0,     0,     0,
      82,     0,     0,     0,    47,    54,    53,    46,    52,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    19,    21,
      22,    23,     0,    24,    26,     0,     0,     0,    16,     0,
       0,     0,     0,     0,     0,    84,     0,     0,    56,    57,
      42,    43,     0,     0,     0,     0,     0,     0,     3,    18,
      25,     0,     0,    15,     0,     0,     0,     0,     0,     0,
      83,    85,    27,     0,     0,     0,     0,    20,     0,     0,
      10,     0,     0,    28,     0,    29,     0,     0,     0,     0,
       0,     0,    11,    34,     0,    32,    33,     0,     0,     0,
      71,    12,     0,     0,    36,     0,     0,     0,     0,    13,
      35,     0,     0,    38,    40,     0,    37,     0,     0,    39,
       0,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -78,   -78,   202,   -78,   -78,   -78,   -34,   -78,   -77,
     -78,     3,   -78,    64,    38,   -78,   -78,   -78,    52,   -15,
     -78,   189,   -78,   191,   -78,   -78,   195,   -28,   108,   -61
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    70,    71,    96,
      97,    98,    14,   165,   173,    99,   100,   101,   102,    80,
      30,    54,    55,    56,   103,    31,    32,    72,    81,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      29,   104,    74,    13,    82,    15,    15,    83,     1,    76,
      78,   163,    16,    13,    39,    23,    24,   182,    25,   183,
     129,     5,     6,    23,    24,    17,    25,   120,   121,    26,
      27,    57,   134,    18,   120,   121,   104,    26,    27,    84,
      85,    86,    26,    27,   164,    87,    88,   111,   104,   113,
      79,    63,    64,    65,    66,    67,    68,    19,   151,    21,
      20,    34,    28,    35,    63,    64,    65,    66,    67,    68,
      28,   160,    36,   133,   104,   122,    37,   131,    38,    75,
      59,   106,     1,     2,   172,     3,     4,   104,   105,    62,
     175,   176,    77,   107,   108,     5,     6,   137,   110,   139,
     104,    89,   112,    90,   149,   187,   104,   104,   143,   144,
     109,   190,   114,   116,     5,     6,    91,   115,   117,   118,
      92,   104,    93,   123,   119,   127,   124,   104,   145,    94,
     158,    95,    63,    64,    65,    66,    67,    68,    63,    64,
      65,    66,    67,    68,    41,    42,    43,    44,    45,   174,
     125,   126,    48,    49,    50,    51,    52,    53,   128,    69,
     130,    39,   132,    40,   135,    73,   174,    41,    42,    43,
      44,    45,    46,    47,   136,    48,    49,    50,    51,    52,
      53,    63,    64,    65,    66,    67,    68,   138,   141,   142,
     146,   147,   148,   152,   150,   153,   154,   161,   155,   162,
     156,   157,   167,   169,   159,   168,   170,   177,   184,   181,
     189,   171,    22,   179,   180,   191,   185,   188,   166,   186,
      60,   178,    61,    58,   140
};

static const yytype_uint8 yycheck[] =
{
      15,    62,    36,     0,     3,    29,    29,     6,     6,    37,
      38,     6,    37,    10,    37,     3,     4,    22,     6,    24,
      97,    19,    20,     3,     4,     6,     6,    57,    58,    17,
      18,     6,   109,     6,    57,    58,    97,    17,    18,    54,
      55,    56,    17,    18,    39,    60,    61,    75,   109,    77,
      38,    11,    12,    13,    14,    15,    16,     6,   135,     0,
       6,    38,    50,    37,    11,    12,    13,    14,    15,    16,
      50,   148,    37,   107,   135,    90,    31,   105,    31,    39,
      30,    38,     6,     7,   161,     9,    10,   148,    31,    41,
     167,   168,    39,    32,     6,    19,    20,   112,    38,   114,
     161,     6,    29,     8,   132,   182,   167,   168,   123,   124,
      41,   188,    29,    32,    19,    20,    21,    30,    38,    40,
      25,   182,    27,    37,    40,     6,    37,   188,   125,    34,
     145,    36,    11,    12,    13,    14,    15,    16,    11,    12,
      13,    14,    15,    16,    43,    44,    45,    46,    47,   164,
      37,    37,    51,    52,    53,    54,    55,    56,    42,    38,
      30,    37,    31,    39,    41,    38,   181,    43,    44,    45,
      46,    47,    48,    49,    40,    51,    52,    53,    54,    55,
      56,    11,    12,    13,    14,    15,    16,    40,    30,    30,
       5,    30,    41,    29,    42,    30,    29,    41,    30,    42,
      38,    38,    23,    30,    38,    33,    30,     6,    26,    32,
      24,    42,    10,    42,    40,    28,    38,    33,   154,   181,
      31,   169,    31,    28,   116
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     9,    10,    19,    20,    61,    62,    63,
      64,    65,    66,    71,    72,    29,    37,     6,     6,     6,
       6,     0,    63,     3,     4,     6,    17,    18,    50,    79,
      80,    85,    86,    89,    38,    37,    37,    31,    31,    37,
      39,    43,    44,    45,    46,    47,    48,    49,    51,    52,
      53,    54,    55,    56,    81,    82,    83,     6,    86,    30,
      81,    83,    41,    11,    12,    13,    14,    15,    16,    38,
      67,    68,    87,    38,    67,    39,    87,    39,    87,    38,
      79,    88,     3,     6,    79,    79,    79,    79,    79,     6,
       8,    21,    25,    27,    34,    36,    69,    70,    71,    75,
      76,    77,    78,    84,    89,    31,    38,    32,     6,    41,
      38,    87,    29,    87,    29,    30,    32,    38,    40,    40,
      57,    58,    79,    37,    37,    37,    37,     6,    42,    69,
      30,    87,    31,    67,    69,    41,    40,    79,    40,    79,
      88,    30,    30,    79,    79,    71,     5,    30,    41,    87,
      42,    69,    29,    30,    29,    30,    38,    38,    79,    38,
      69,    41,    42,     6,    39,    73,    73,    23,    33,    30,
      30,    42,    69,    74,    79,    69,    69,     6,    78,    42,
      40,    32,    22,    24,    26,    38,    74,    69,    33,    24,
      69,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    63,    63,    64,    64,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    69,    69,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    71,    71,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    80,    80,    81,    81,
      81,    81,    81,    82,    82,    83,    83,    83,    83,    83,
      83,    84,    85,    85,    86,    86,    87,    87,    87,    87,
      87,    87,    88,    88,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     1,     2,     1,     1,     1,     1,
       7,     8,     9,    10,     1,     3,     2,     1,     2,     1,
       3,     1,     1,     1,     1,     2,     1,     3,     7,     7,
       4,     1,     8,     8,     1,     3,     1,     3,     7,     9,
       7,    10,     2,     2,     1,     1,     3,     3,     1,     1,
       2,     2,     3,     3,     3,     1,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     5
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
#line 45 "sintatico.y" /* yacc.c:1646  */
    {printf("\n\npassou no teste\n\n");}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 49 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 53 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 54 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 58 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 59 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 60 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 61 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 68 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 73 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 75 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 79 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 80 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 88 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 89 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 93 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 94 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 95 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 96 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 97 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 98 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 99 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 100 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 101 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 105 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 106 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 107 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 108 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 113 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 115 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 119 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 120 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 124 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 125 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 129 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 131 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 136 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 141 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 145 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 146 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 150 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 151 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 152 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 153 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 154 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 156 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 157 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 158 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 159 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 160 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 161 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 162 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 166 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 167 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 171 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 172 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 173 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 174 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 175 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 179 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 180 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 184 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 185 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 186 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 187 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 188 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 189 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 192 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 196 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 197 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 201 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 202 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 206 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 207 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 208 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 209 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 210 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 211 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 215 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 216 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 220 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 221 "sintatico.y" /* yacc.c:1646  */
    {}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1979 "y.tab.c" /* yacc.c:1646  */
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
#line 224 "sintatico.y" /* yacc.c:1906  */

int yyerror(char *msg) {
    fprintf(stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
    return 0;


}

int main (void) {
	return yyparse ( );
}
