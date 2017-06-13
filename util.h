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


char* novaString(int size) {
    char* str = malloc(size + sizeof(char*)*200);
    return str;
}

TipoCompleto *novoTipoCompleto() {
    TipoCompleto *retorno = malloc(sizeof(TipoCompleto));
    retorno->string = "";
    retorno->qtdRetornos = 0;
    retorno->tipo = "";
    retorno->iValor = -1;
    retorno->fValor = -1;
    retorno->sValor = "";
    return retorno;
}

Item *novoItem() {
    struct Item *info;
    info = malloc(sizeof(struct Item));
    info->tipoCompleto = novoTipoCompleto();
    info->parametros = NULL;
    return info;
}

void verificarIDJaDecl(char *nome) {
    //Verifica se a variável já foi declarada
    struct DataItem *item = find_item(nome, escopo_ordem);
    
    if(item != NULL) {
            fprintf (stderr, "ERRO: Variável %s já declarada. Linha: %d\n", nome, yylineno);
            exit(0);
    }
}

void verificarIDNaoDecl(char *nome) {
    //Verifica se a variável não foi declarada
    struct DataItem *item = find_item(nome, escopo_ordem);
    
    if(item == NULL) {
            fprintf (stderr, "ERRO: Variável %s não foi declarada. Linha: %d\n", nome, yylineno);
            exit(0);
    }
}

char *verificarCompatTipos(char *tipo1, Item *item) {
    char *retorno = novaString(sizeof(char*) * 100);
    
    if(strcmp(tipo1, item->tipoCompleto->tipo) != 0) {
            fprintf (stderr, "ERRO: Tipos %s e %s não são compatíveis. Linha: %d\n", 
                    tipo1, item->tipoCompleto->tipo, yylineno);
            exit(0);
    }
    retorno = tipo1;
}

void adicionarID(char *nome, Item *item) {
    
    struct Item *info;
    info = malloc(sizeof(struct Item));
    info->tipoCompleto = novoTipoCompleto();
    info->tipoCompleto->tipo = item->tipoCompleto->tipo;
    info->tipoCompleto->sValor = item->tipoCompleto->sValor;
    info->tipoCompleto->iValor = item->tipoCompleto->iValor;
    info->tipoCompleto->fValor = item->tipoCompleto->fValor;
    info->parametros = NULL;
    
    char escopo_ident[3] = ".N\0"; 
    char *escopo = malloc(sizeof(escopo_ident) + (2 * sizeof(char*)));
    sprintf(escopo,"%s%d",escopo_ident, escopo_ordem); 
    
    char *chave = malloc(sizeof(nome) + sizeof(escopo) + sizeof(char*)); 
    sprintf(chave,"%s%s",nome,escopo); 
    
    add_item(chave, info);
}

char *convIntParaChar(int valor) {
    char *retorno = novaString(sizeof(char*) * 100);
    sprintf(retorno, "%d", valor);
    return retorno;
}

char *convFloatParaChar(float valor) {
    char *retorno = novaString(sizeof(char*) * 100);
    sprintf(retorno, "%f", valor);
    return retorno;
}

Item *criarItemCompleto(char *valor) {
    
    Item* retorno = novoItem();
    
    if(checkRegex(valor, "([0-9]*\\.[0-9]+)")) {
        retorno->tipoCompleto->tipo = "real";
        return retorno;   
    } else if (checkRegex(valor, "([0-9]+)")) {
        retorno->tipoCompleto->tipo = "inteiro";
        retorno->tipoCompleto->iValor = atoi(valor);
        return retorno;   
    } else {
         fprintf (stderr, "ERRO: Tipo não identificado. Linha: %d\n", yylineno);
         exit(0);
    }
    
}

Item *obterItem(char *nome) {
    verificarIDNaoDecl(nome);
    
    struct DataItem *item = find_item(nome, escopo_ordem);
    Item* retorno = novoItem(); 
    
    if(item != NULL) {
        retorno = item->data;
        return retorno;
    } else {
        fprintf (stderr, "ERRO: ID não identificado. Linha: %d\n", yylineno);
        exit(0);
    }
}

void incrementar(Item *item) {
    //
}

int checkRegex(const char *string, char *pattern) {
    int    status;
    regex_t    re;

    if (regcomp(&re, pattern, REG_EXTENDED|REG_NOSUB) != 0) {
        return 0;      /* Report error. */
    }
    status = regexec(&re, string, (size_t) 0, NULL, 0);
    regfree(&re);
    if (status != 0) {
        return 0;      /* Report error. */
    }
    return 1;
}
