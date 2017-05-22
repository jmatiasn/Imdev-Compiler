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
  bool   bValue;
};

%token <sValue> ID
%token <iValue> V_INTEIRO
%token <bValue> V_BOOL
%token TIPO_CHAR TIPO_VOID TIPO_FLOAT TIPO_INT TIPO_STRING VERDADE FALSO
%token VAR CONST MAIN SE SENAO ENTAO FIM_SE ENQUANTO FIM_ENQUANTO PARA FIM_PARA
%token FACA IMPRIME ALOCA LIBERA
%token OP_ATRIBUICAO PONTO_VIRGULA DOIS_PONTOS VIRGULA
%token ABRE_PAREN FECHA_PAREN ABRE_COLCHETE FECHA_COLCHETE ABRE_CHAVES FECHA_CHAVES
%token OP_SOMA OP_SUB OP_MULT OP_DIV OP_RESTO OP_LOGICO_OU OP_LOGICO_E OP_MENOR OP_MAIOR OP_MENOR_IGUAL OP_MAIOR_IGUAL OP_IGUAL OP_DIFERENTE
%token OP_INC OP_DEC

%start programa
%type <sValue> sentenca

%%

programa : sentencas                                                            {}
         ;

sentenca : atribuicao                                                           {}
         | se                                                                   {}
         ;

atribuicao : VAR ID OP_ATRIBUICAO expr PONTO_VIRGULA                            {}
           | CONST ID OP_ATRIBUICAO expr PONTO_VIRGULA                          {}
           ;

se : SE ABRE_PAREN exprbool FECHA_PAREN ENTAO sentencas FIM_SE                  {}
   | SE ABRE_PAREN exprbool FECHA_PAREN ENTAO sentencas SENAO sentencas FIM_SE  {}
   ;

exprbool : VERDADE                                                              {}
         | FALSO                                                                {}
         ;

expr : ID                                                                       {}
     | literal                                                                  {}
     | literal operador expr                                                    {}
     ;

operador : OP_SOMA                                                              {}
         | OP_SUB                                                               {}
         | OP_MULT                                                              {}
         | OP_DIV                                                               {}
         | OP_RESTO                                                             {}
         ;

literal : V_INTEIRO                                                             {}
        ;

sentencas : sentenca                                                            {}
          | sentenca PONTO_VIRGULA sentencas                                    {}
          ;

%%

void yyerror(char *s) {
    fprintf(stderr, "%d: %s at '%s'\n", yylineno, s, yytext);
}

int main(void) {
    yyparse();
    return 0;
}
