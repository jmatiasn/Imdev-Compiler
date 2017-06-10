#include "hash.h"
#include <regex.h>


int escopo_ordem = 0;
int rotulo_ordem = 0;
extern int yylineno;
int isTemMain = 0;/* 1 -> true, 0 -> false */
FILE *cArquivo;
int ultimaLinha = 0;
int debug = 0;

char* retornoTipoString(int type);

struct TipoCompleto {
    char *string;
    int qtdRetornos;
    int tipo;
    int iValor;
    float fValor;
    char *sValor;
};

void adicionarID(char *nome) {
    //TODO: criar método de identificar type
    int tipo = 0;
    
    struct Item *info;
    info = malloc(sizeof(struct Item));
    info->type = tipo;
    info->tamanhoX = 0;
    info->tamanhoY = 0;
    info->parametros = NULL;
    
    char escopo_ident[3] = ".N\0"; 
    char *escopo = malloc(sizeof(escopo_ident) + (2 * sizeof(char*)));
    sprintf(escopo,"%s%d",escopo_ident, escopo_ordem); 
    
    char *chave = malloc(sizeof(nome) + sizeof(escopo) + sizeof(char*)); 
    sprintf(chave,"%s%s",nome,escopo); 
    
    add_item(chave, info);
    print_itens();
}