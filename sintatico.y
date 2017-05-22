%{
    #include <stdio.h>

    int yylex(void);
    int yyerror(char *s);

%}

% token TIPO_CHAR TIPO_VOID TIPO_FLOAT TIPO_INT TIPO_STRING
% token CONST MAIN SE SENAO ENTAO FIM_SE ENQUANTO FIM_ENQUANTO PARA FIM_PARA ID V_INTEIRO
% token FACA IMPRIME ALOCA LIBERA
% token OP_ATRIBUICAO PONTO_VIRGULA DOIS_PONTOS VIRGULA
% token ABRE_PAREN FECHA_PAREN ABRE_COLCHETE FECHA_COLCHETE ABRE_CHAVES FECHA_CHAVES
% token OP_SOMA OP_SUB OP_MULT OP_DIV OP_RESTO OP_LOGICO_OU OP_LOGICO_E OP_MENOR OP_MAIOR OP_MENOR_IGUAL OP_MAIOR_IGUAL OP_IGUAL OP_DIFERENTE
% token OP_INC OP_DEC
%start programa

%%

programa:
        programa subprogramas '\n'         { printf("%d\n", $2); }
        |
        ;

subprogramas:
        INTEGER                   { $$ = $1; }
        | expr '+' expr           { $$ = $1 + $3; }
        | expr '-' expr           { $$ = $1 - $3; }
        ;

%%

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(void) {
    yyparse();
    return 0;
}
