%{
    #include <stdio.h>

    int yylex(void);
    int yyerror(char *s);
    extern int yylineno;
    extern char * yytext;

%}

%union {
	int    iValue; 	/* valor inteiro*/
	char   cValue; 	/* valor char*/
	char * sValue;  /* valor string */
  //bool   bValue;
  float  fValue;
};

%token <sValue> ID
%token <iValue> V_INTEIRO
//%token <bValue> V_BOOL
%token <fValue> V_REAL
%token TIPO_CHAR TIPO_VOID TIPO_REAL TIPO_INT TIPO_STRING VERDADE FALSO
%token VAR CONST MAIN SE SENAO ENTAO FIM_SE ENQUANTO FIM_ENQUANTO PARA FIM_PARA
%token FACA IMPRIME ALOCA LIBERA
%token OP_ATRIBUICAO PONTO_VIRGULA DOIS_PONTOS VIRGULA
%token ABRE_PAREN FECHA_PAREN ABRE_COLCHETE FECHA_COLCHETE ABRE_CHAVES FECHA_CHAVES
%token OP_SOMA OP_SUB OP_MULT OP_DIV OP_RESTO
%token OP_LOGICO_OU OP_LOGICO_E OP_LOGICO_NEG OP_MENOR OP_MAIOR OP_MENOR_IGUAL OP_MAIOR_IGUAL OP_IGUAL OP_DIFERENTE
%token OP_INC OP_DEC

%start programa
%type <sValue> sentenca

%%

programa : sentencas                                                            {}
         ;

sentenca : atribuicao                                                           {}
         | se                                                                   {}
         | enquanto                                                             {}
         | para                                                                 {}
         ;

atribuicao : VAR ID OP_ATRIBUICAO expr PONTO_VIRGULA                            {}
           | CONST ID OP_ATRIBUICAO expr PONTO_VIRGULA                          {}
           ;

se : SE ABRE_PAREN exprsbool FECHA_PAREN ENTAO sentencas FIM_SE                 {}
   | SE ABRE_PAREN exprsbool FECHA_PAREN ENTAO sentencas
            SENAO sentencas FIM_SE                                              {}
   ;

enquanto : ENQUANTO ABRE_PAREN exprsbool FECHA_PAREN
                    ENTAO sentencas FIM_ENQUANTO                                {}
         ;

para : PARA ABRE_PAREN VAR ID OP_ATRIBUICAO expr PONTO_VIRGULA exprsbool
            PONTO_VIRGULA exprUnaria FECHA_PAREN FACA sentencas FIM_PARA        {}
     ;

exprUnaria : ID OP_INC                                                          {}
           | ID OP_DEC                                                          {}
           ;

exprbool : VERDADE                                                              {}
         | FALSO                                                                {}
         ;

expr : ID                                                                       {}
     | literal                                                                  {}
     | expr operador literal                                                    {}
     | expr operador ID                                                         {}
     ;

operador : OP_SOMA                                                              {}
         | OP_SUB                                                               {}
         | OP_MULT                                                              {}
         | OP_DIV                                                               {}
         | OP_RESTO                                                             {}
         ;

oplogico : OP_LOGICO_E                                                          {}
         | OP_LOGICO_OU                                                         {}
         | OP_LOGICO_NEG                                                        {}
         ;

literal : V_INTEIRO                                                             {}
        ;

sentencas : sentenca                                                            {}
          | sentencas PONTO_VIRGULA sentenca                                    {}
          ;

exprsbool: exprbool                                                             {}
         | exprsbool oplogico exprbool                                          {}
         ;

%%


#ifndef yywrap
   int yywrap (void) {return 1;}
#endif

int yyerror(char *s) {
    fprintf(stderr, "%d: %s at '%s'\n", yylineno, s, yytext);
    return 0;
}
