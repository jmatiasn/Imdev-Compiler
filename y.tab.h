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
    ID = 258,
    V_INTEIRO = 259,
    V_REAL = 260,
    TIPO_CHAR = 261,
    TIPO_VOID = 262,
    TIPO_REAL = 263,
    TIPO_INT = 264,
    TIPO_STRING = 265,
    VERDADE = 266,
    FALSO = 267,
    VAR = 268,
    CONST = 269,
    MAIN = 270,
    SE = 271,
    SENAO = 272,
    ENTAO = 273,
    FIM_SE = 274,
    ENQUANTO = 275,
    FIM_ENQUANTO = 276,
    PARA = 277,
    FIM_PARA = 278,
    FACA = 279,
    IMPRIME = 280,
    ALOCA = 281,
    LIBERA = 282,
    OP_ATRIBUICAO = 283,
    PONTO_VIRGULA = 284,
    DOIS_PONTOS = 285,
    VIRGULA = 286,
    ABRE_PAREN = 287,
    FECHA_PAREN = 288,
    ABRE_COLCHETE = 289,
    FECHA_COLCHETE = 290,
    ABRE_CHAVES = 291,
    FECHA_CHAVES = 292,
    OP_SOMA = 293,
    OP_SUB = 294,
    OP_MULT = 295,
    OP_DIV = 296,
    OP_RESTO = 297,
    OP_LOGICO_OU = 298,
    OP_LOGICO_E = 299,
    OP_LOGICO_NEG = 300,
    OP_MENOR = 301,
    OP_MAIOR = 302,
    OP_MENOR_IGUAL = 303,
    OP_MAIOR_IGUAL = 304,
    OP_IGUAL = 305,
    OP_DIFERENTE = 306,
    OP_INC = 307,
    OP_DEC = 308
  };
#endif
/* Tokens.  */
#define ID 258
#define V_INTEIRO 259
#define V_REAL 260
#define TIPO_CHAR 261
#define TIPO_VOID 262
#define TIPO_REAL 263
#define TIPO_INT 264
#define TIPO_STRING 265
#define VERDADE 266
#define FALSO 267
#define VAR 268
#define CONST 269
#define MAIN 270
#define SE 271
#define SENAO 272
#define ENTAO 273
#define FIM_SE 274
#define ENQUANTO 275
#define FIM_ENQUANTO 276
#define PARA 277
#define FIM_PARA 278
#define FACA 279
#define IMPRIME 280
#define ALOCA 281
#define LIBERA 282
#define OP_ATRIBUICAO 283
#define PONTO_VIRGULA 284
#define DOIS_PONTOS 285
#define VIRGULA 286
#define ABRE_PAREN 287
#define FECHA_PAREN 288
#define ABRE_COLCHETE 289
#define FECHA_COLCHETE 290
#define ABRE_CHAVES 291
#define FECHA_CHAVES 292
#define OP_SOMA 293
#define OP_SUB 294
#define OP_MULT 295
#define OP_DIV 296
#define OP_RESTO 297
#define OP_LOGICO_OU 298
#define OP_LOGICO_E 299
#define OP_LOGICO_NEG 300
#define OP_MENOR 301
#define OP_MAIOR 302
#define OP_MENOR_IGUAL 303
#define OP_MAIOR_IGUAL 304
#define OP_IGUAL 305
#define OP_DIFERENTE 306
#define OP_INC 307
#define OP_DEC 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "sintatico.y" /* yacc.c:1909  */

	int    iValue; 	/* valor inteiro*/
	char   cValue; 	/* valor char*/
	char * sValue;  /* valor string */
  float  fValue;  /* valor real */
  //bool   bValue;


#line 169 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
