%{
    #include <stdio.h>
    #include <string.h>
    #include "util.h"
    #include <mcheck.h>
    
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
  struct Item* item;

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

%type<sValue> tipoPrimitivo literalBool
%type<sValue> operadorAritmetico operadorLogico operadorRelacional operadorBinario
%type<item> literal expr termo exprUnaria exprBinaria

%left OP_LOGICO_NEG
%left OP_LOGICO_E OP_LOGICO_OU
%left OP_SOMA OP_SUB
%left OP_MULT OP_DIV OP_RESTO
%left OP_IGUAL OP_MENOR_IGUAL OP_MAIOR_IGUAL
%left OP_INC OP_DEC OP_MAIOR OP_MENOR
%left OP_IGUALDADE OP_DIFERENTE

%start programa

%%

programa :
         subprogramas                                                           {printf("\n\npassou no teste\n\n");
                                                                                print_itens();}
         ;

principal:
        MAIN ABRE_PAREN FECHA_PAREN ABRE_CHAVES {escreverMain();} 
        sentencas FECHA_CHAVES                                                  {escrever("}");}
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
        FUNC ID ABRE_PAREN FECHA_PAREN DOIS_PONTOS tipoPrimitivo ABRE_CHAVES
        sentencas FECHA_CHAVES                                                  {}
        | FUNC ID ABRE_PAREN params FECHA_PAREN DOIS_PONTOS tipoPrimitivo ABRE_CHAVES
        sentencas FECHA_CHAVES                                                  {}
        ;

params :
    param                                                                       {}
    | param VIRGULA params                                                      {}
    ;

param :
      tipoPrimitivo ID                                                          {}
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
         | expr PONTO_VIRGULA                                                   {}
         | chamadaProcOuFuncao                                                  {}
         | RETORNO expr PONTO_VIRGULA                                           {}
         ;

atribuicao :
           VAR ID DOIS_PONTOS tipoPrimitivo OP_ATRIBUICAO expr PONTO_VIRGULA    {
                                                                                verificarIDJaDecl($2);
                                                                                char* tipo = verificarCompatTipos($4, $6);
                                                                                adicionarID($2, $6);
                                                                                escreverAtribuicao($4,$2,$6);
                                                                                }
           | CONST ID DOIS_PONTOS tipoPrimitivo OP_ATRIBUICAO expr PONTO_VIRGULA{/*escreverAtribuicaoConst($2,$6);*/}
           | ID OP_ATRIBUICAO expr PONTO_VIRGULA                                {}
           | atribuicaoArray                                                    {}
           ;

atribuicaoArray :
            VAR ID DOIS_PONTOS ABRE_COLCHETE tipoPrimitivo FECHA_COLCHETE
                OP_ATRIBUICAO instanciaArray                                    {}
            | CONST ID DOIS_PONTOS ABRE_COLCHETE tipoPrimitivo FECHA_COLCHETE
                OP_ATRIBUICAO instanciaArray                                    {}
            ;

instanciaArray :
            ID                                                                  {}
            | ABRE_COLCHETE listaValoresArray FECHA_COLCHETE                    {}
            ;

listaValoresArray :
            expr                                                                {}
            | expr VIRGULA listaValoresArray                                    {}
            ;

se :
   SE ABRE_PAREN expr FECHA_PAREN ENTAO sentencas FIM_SE                        {}
   | SE ABRE_PAREN expr FECHA_PAREN ENTAO sentencas
        SENAO sentencas FIM_SE                                                  {}
   ;

enquanto :
         ENQUANTO ABRE_PAREN {escrever("while (");} expr FECHA_PAREN
                    FACA {escrever(") {\n");} sentencas FIM_ENQUANTO            {escrever("}\n");}
         ;

para :
     PARA ABRE_PAREN atribuicao expr
            PONTO_VIRGULA exprUnaria FECHA_PAREN FACA sentencas FIM_PARA        {}
     ;

expr :
     termo                                                                      {$$ = $1;}
     | exprUnaria                                                               {$$ = $1;}
     | exprBinaria                                                              {$$ = $1;}
     ;

termo:
     literal                                                                    {$$ = $1;}
     | ID                                                                       {$$ = obterItem($1);}
     | acessoArray                                                              {}
     | chamadaProcOuFuncao                                                      {}
     ;

acessoArray :
            ID ABRE_COLCHETE V_INTEIRO FECHA_COLCHETE                           {}
            | ID ABRE_COLCHETE ID FECHA_COLCHETE                                {}
            ;

exprUnaria :
           OP_INC termo                                                         {$$ = incrementar($2);}
           | OP_DEC termo                                                       {$$ = decrementar($2);}
           | OP_LOGICO_NEG expr                                                 {verificarSeExprEhBooleano($2);
                                                                                $$ = negarExprBooleano($2);}
           ;

exprBinaria :
            expr operadorBinario termo                                          {$$ = processarExprBin($1, $2, $3);}
            | expr operadorBinario exprUnaria                                   {$$ = processarExprBin($1, $2, $3);}
            ;

operadorBinario :
                operadorAritmetico                                              {$$ = $1;}
                | operadorLogico                                                {$$ = $1;}
                | operadorRelacional                                            {$$ = $1;}
                ;


operadorAritmetico :
                   OP_SOMA                                                      {$$ = $1;}
                   | OP_SUB                                                     {$$ = $1;}
                   | OP_MULT                                                    {$$ = $1;}
                   | OP_DIV                                                     {$$ = $1;}
                   | OP_RESTO                                                   {$$ = $1;}
                   ;

operadorLogico :
         OP_LOGICO_E                                                            {$$ = $1;}
         | OP_LOGICO_OU                                                         {$$ = $1;}
         ;

operadorRelacional :
             OP_IGUALDADE                                                       {$$ = $1;}
             | OP_DIFERENTE                                                     {$$ = $1;}
             | OP_MAIOR                                                         {$$ = $1;}
             | OP_MENOR                                                         {$$ = $1;}
             | OP_MAIOR_IGUAL                                                   {$$ = $1;}
             | OP_MENOR_IGUAL                                                   {$$ = $1;}

imprime :
        IMPRIME ABRE_PAREN V_STRING FECHA_PAREN PONTO_VIRGULA                   {}
        | IMPRIME ABRE_PAREN V_INTEIRO FECHA_PAREN PONTO_VIRGULA                {}		
        | IMPRIME ABRE_PAREN V_REAL FECHA_PAREN PONTO_VIRGULA                   {}		
        | IMPRIME ABRE_PAREN ID FECHA_PAREN PONTO_VIRGULA                       {}
        ;

literal :
        V_INTEIRO                                                               {$$ = criarItemCompleto(convIntParaChar($1));}
        | V_REAL                                                                {$$ = criarItemCompleto(convFloatParaChar($1));}
        | V_STRING                                                              { Item* item = novoItem();
                                                                                  item->tipoCompleto->sValor = novaString(sizeof($1)+ sizeof(char*)); 
                                                                                  $$ = item;
                                                                                }
        | literalBool                                                           {
                                                                                    Item* item = novoItem();
                                                                                    item->tipoCompleto->tipo = "booleano";
                                                                                    item->tipoCompleto->sValor = $1;
                                                                                    $$ = item;
                                                                                }
        ;

literalBool:
     VERDADE                                                                    {$$ = $1;}
     | FALSO                                                                    {$$ = $1;}
     ;

tipoPrimitivo:
          TIPO_INT                                                              {$$ = $1;}
          | TIPO_CHAR                                                           {$$ = $1;}
          | TIPO_REAL                                                           {$$ = $1;}
          | TIPO_VOID                                                           {$$ = $1;}
          | TIPO_STRING                                                         {$$ = $1;}
          | TIPO_BOOL                                                           {$$ = $1;}
          ;

listaIds :
         expr                                                                   {}
         | expr VIRGULA listaIds                                                {}
         ;

chamadaProcOuFuncao:
        ID ABRE_PAREN FECHA_PAREN PONTO_VIRGULA                                 {}
        | ID ABRE_PAREN listaIds FECHA_PAREN PONTO_VIRGULA                      {}
        ;

%%
int yyerror(char *msg) {
    fprintf(stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
    return 0;


}

int main (void) {
	return yyparse ( );
	escreverInclude();
}
