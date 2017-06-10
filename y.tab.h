/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

union YYSTYPE
{
#line 11 "sintatico.y" /* yacc.c:1909  */

  int    iValue; /* valor inteiro*/
  char   cValue; /* valor char*/
  char * sValue; /* valor string */
  float  fValue; /* valor real */



#line 181 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
