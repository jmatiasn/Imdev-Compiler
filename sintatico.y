%{
    #include <stdio.h>
    #include <string.h>
    int yylex(void);
    int yyerror(char *msg);
    extern int yylineno;
    extern char * yytext;
%}

%union {
  int    iValue; /* valor inteiro*/
  char   cValue; /* valor char*/
  char * sValue; /* valor string */
  float  fValue; /* valor real */


};

%token<iValue> V_INTEIRO
%token<fValue> V_REAL
%token<sValue> V_STRING
%token<sValue> ID
%token<sValue> MAIN RETORNO
%token<sValue> FUNC PROC
%token<sValue> TIPO_CHAR TIPO_VOID TIPO_REAL TIPO_INT TIPO_STRING TIPO_BOOL VERDADE FALSO
%token<sValue> VAR CONST SE SENAO ENTAO FIM_SE ENQUANTO FIM_ENQUANTO PARA FIM_PARA
%token<sValue> OP_ATRIBUICAO PONTO_VIRGULA DOIS_PONTOS VIRGULA
%token<sValue> FACA IMPRIME ALOCA LIBERA
%token<sValue> ABRE_PAREN FECHA_PAREN ABRE_COLCHETE FECHA_COLCHETE ABRE_CHAVES FECHA_CHAVES

%token<sValue> OP_SOMA OP_SUB OP_MULT OP_DIV OP_RESTO
%token<sValue> OP_LOGICO_OU OP_LOGICO_E OP_LOGICO_NEG OP_MENOR OP_MAIOR OP_MENOR_IGUAL OP_MAIOR_IGUAL OP_IGUALDADE OP_DIFERENTE
%token<sValue> OP_INC OP_DEC

%left OP_SOMA OP_SUB
%left OP_MULT OP_DIV OP_RESTO
%left OP_IGUAL OP_MENOR_IGUAL OP_MAIOR_IGUAL
%left OP_INC OP_DEC OP_MAIOR OP_MENOR

%start programa

%%

programa :
         subprogramas                                                           {printf("\n\npassou no teste\n\n");}
         ;

principal:
        MAIN ABRE_PAREN FECHA_PAREN ABRE_CHAVES sentencas FECHA_CHAVES          {}
        ;

subprogramas :
             subprograma                                                        {}
             | subprograma subprogramas                                         {}
             ;

subprograma :
            proc                                                                {}
            | funcao                                                            {}
            | principal                                                         {}
            | atribuicao                                                        {}
            ;

proc :
     PROC ID ABRE_PAREN FECHA_PAREN ABRE_CHAVES
        sentencas FECHA_CHAVES                                                  {}
     | PROC ID ABRE_PAREN params FECHA_PAREN ABRE_CHAVES
        sentencas FECHA_CHAVES                                                  {}
     ;

funcao :
        FUNC ID ABRE_PAREN FECHA_PAREN DOIS_PONTOS tprimitivo ABRE_CHAVES
        sentencas FECHA_CHAVES                                                  {}
        | FUNC ID ABRE_PAREN params FECHA_PAREN DOIS_PONTOS tprimitivo ABRE_CHAVES
        sentencas FECHA_CHAVES                                                  {}
        ;

params :
    param                                                                       {}
    | param VIRGULA params                                                      {}
    ;

param :
      tprimitivo ID                                                             {}
      ;

sentencas :
          sentenca                                                              {}
          | sentenca sentencas                                                  {}
          ;

sentenca :
         atribuicao                                                             {}
         | LIBERA ID PONTO_VIRGULA                                              {}
         | se                                                                   {}
         | enquanto                                                             {}
         | para                                                                 {}
         | imprime                                                              {}
         | exprUnaria PONTO_VIRGULA                                             {}
         | chamadaprocoufuncao                                                  {}
         | RETORNO expr PONTO_VIRGULA                                           {}
         ;

atribuicao :
           VAR ID DOIS_PONTOS tprimitivo OP_ATRIBUICAO expr PONTO_VIRGULA       {}
           | CONST ID DOIS_PONTOS tprimitivo OP_ATRIBUICAO expr PONTO_VIRGULA   {}
           | ID OP_ATRIBUICAO expr PONTO_VIRGULA                                {}
           | atribuicaoarray                                                    {}
           ;

atribuicaoarray :
            VAR ID DOIS_PONTOS ABRE_COLCHETE tprimitivo FECHA_COLCHETE 
                OP_ATRIBUICAO instanciaarray                                    {}
            | CONST ID DOIS_PONTOS ABRE_COLCHETE tprimitivo FECHA_COLCHETE 
                OP_ATRIBUICAO instanciaarray                                    {}
            ;
            
instanciaarray :
            ID                                                                  {}
            | ABRE_COLCHETE listavaloresarray FECHA_COLCHETE                    {}
            ;
            
listavaloresarray :
            expr                                                                {}
            | expr VIRGULA listavaloresarray                                    {}
            ;

se :
   SE ABRE_PAREN exprsbool FECHA_PAREN ENTAO sentencas FIM_SE                   {}
   | SE ABRE_PAREN exprsbool FECHA_PAREN ENTAO sentencas
        SENAO sentencas FIM_SE                                                  {}
   ;

enquanto :
         ENQUANTO ABRE_PAREN exprsbool FECHA_PAREN
                    FACA sentencas FIM_ENQUANTO                                 {}
         ;

para :
     PARA ABRE_PAREN atribuicao exprsbool
            PONTO_VIRGULA exprUnaria FECHA_PAREN FACA sentencas FIM_PARA        {}
     ;

exprUnaria :
           ID OP_INC                                                            {}
           | ID OP_DEC                                                          {}
           ;

exprbool :
         tbool                                                                  {}
         | ID                                                                   {}
         | OP_LOGICO_NEG tbool                                                  {}
         | OP_LOGICO_NEG ID                                                     {}
         | expr oprelacional exprbool                                           {}
         ;

expr :
     ID                                                                         {}
     | literal                                                                  {}
     | literal operador expr                                                    {}
     | ID operador expr                                                         {}
     | acessoarray                                                              {}
     | chamadaprocoufuncao                                                      {}
     ;
     
acessoarray :
            ID ABRE_COLCHETE V_INTEIRO FECHA_COLCHETE                           {}
            | ID ABRE_COLCHETE ID FECHA_COLCHETE                                {}
            ;

operador :
         OP_SOMA                                                                {}
         | OP_SUB                                                               {}
         | OP_MULT                                                              {}
         | OP_DIV                                                               {}
         | OP_RESTO                                                             {}
         ;

oplogico :
         OP_LOGICO_E                                                            {}
         | OP_LOGICO_OU                                                         {}
         ;
         
oprelacional :
             OP_IGUALDADE                                                       {}
             | OP_DIFERENTE                                                     {}
             | OP_MAIOR                                                         {}
             | OP_MENOR                                                         {}
             | OP_MAIOR_IGUAL                                                   {}
             | OP_MENOR_IGUAL                                                   {}

imprime :
        IMPRIME ABRE_PAREN V_STRING FECHA_PAREN PONTO_VIRGULA                   {}
        ;

literal :
        V_INTEIRO                                                               {}
        | V_REAL                                                                {}
        ;
         
tbool: 
     VERDADE                                                                    {}
     | FALSO                                                                    {}
     ;

tprimitivo:
          TIPO_INT                                                              {}
          | TIPO_CHAR                                                           {}
          | TIPO_REAL                                                           {}
          | TIPO_VOID                                                           {}
          | TIPO_STRING                                                         {}
          | TIPO_BOOL                                                           {}
          ;

exprsbool:
         exprbool                                                               {}
         | exprbool oplogico exprsbool                                          {}
         ;
         
listaids :
         expr                                                                     {}
         | expr VIRGULA listaids                                                  {}
         ;
         
chamadaprocoufuncao:
        ID ABRE_PAREN FECHA_PAREN PONTO_VIRGULA                                 {}
        | ID ABRE_PAREN listaids FECHA_PAREN PONTO_VIRGULA                      {}
        ;

%%
int yyerror(char *msg) {
    fprintf(stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
    return 0;


}

int main (void) {
	return yyparse ( );
}
