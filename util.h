#include "hash.h"
#include <regex.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int escopo_order = 0;
int label_order = 0;
extern int yylineno;
int hasMain = 0;/* 1 -> true, 0 -> false */
FILE *cFile;
int ultimaLinha = 0;
int debug = 0;

char* returnTypeString(int type);

struct TipoCompleto {
    char *string;
    int qtdRetornos;
    int tipo;
    int iValor;
    float fValor;
    char *sValor;
};

void addID(char *nome) {
    //TODO: criar método de identificar type
    int type = 0;
    
    struct Item *info;
    info = malloc(sizeof(struct Item));
    info->type = type;
    info->tamanhoX = 0;
    info->tamanhoY = 0;
    info->parametros = NULL;
    
    char escopo_ident[3] = ".N\0"; 
    char *escopo = malloc(sizeof(escopo_ident) + (2 * sizeof(char*)));
    sprintf(escopo,"%s%d",escopo_ident, escopo_order); 
    
    char *key = malloc(sizeof(nome) + sizeof(escopo) + sizeof(char*)); 
    sprintf(key,"%s%s",nome,escopo); 
    
    add_item(key, info);
    print_itens();
}