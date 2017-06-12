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


char* novaString(int size) {
    char* str = malloc(size + sizeof(char*)*200);
    return str;
}

void verificarIDJaDecl(char *nome) {
    //Verifica se a variável já foi declarada
    struct DataItem *item = find_item(nome, escopo_ordem);
    
    if(item != NULL) {
            fprintf (stderr, "ERRO: Variável %s já declarada. Linha: %d\n", nome, yylineno);
            exit(0);
    }
}

char *verificarCompatTipos(char *tipo1, char *tipo2) {
    char *retorno = novaString(sizeof(char*) * 100);
    
    if(strcmp(tipo1,tipo2) != 0) {
            fprintf (stderr, "ERRO: Tipos %s e %s não são compatíveis. Linha: %d\n", tipo1, tipo2, yylineno);
            exit(0);
    }
    retorno = tipo1;
}

void adicionarID(char *nome, char *tipo) {
    
    struct Item *info;
    info = malloc(sizeof(struct Item));
    info->type = tipo;
    info->parametros = NULL;
    
    char escopo_ident[3] = ".N\0"; 
    char *escopo = malloc(sizeof(escopo_ident) + (2 * sizeof(char*)));
    sprintf(escopo,"%s%d",escopo_ident, escopo_ordem); 
    
    char *chave = malloc(sizeof(nome) + sizeof(escopo) + sizeof(char*)); 
    sprintf(chave,"%s%s",nome,escopo); 
    
    add_item(chave, info);
    print_itens();
}


//  char *verificarTipo(char *tipo) {
//     char *retorno = novaString(sizeof(char*) * 4);
    
//     if(strcmp(tipo, "int") == 0) {
//             retorno = "inteiro";    
//             return retorno;
//     } else if(strcmp(tipo, "char") == 0) {
//             retorno = "char";
//     } else if(strcmp(tipo, "string") == 0) {
//             retorno = "string";
//     } else if(strcmp(tipo, "real") == 0) {
//             retorno = "real";
//     } else if(strcmp(tipo, "void") == 0) {
//             retorno = "real";
//     } else if(strcmp(tipo, "booleano") == 0) {
//             retorno = "booleano";
//     }
    
//     fprintf (stderr, "ERROR: Tipo informado (%s) não existe. Linha %d\n", tipo, yylineno);
//     exit(0);
    
// }

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

char *identificarTipo(char *valor) {
    
    char *retorno = novaString(sizeof(char*) * 100);
    
    if(checkRegex(valor, "([0-9]*\\.[0-9]+)")) {
        retorno = "real";
        return retorno;   
    } else if (checkRegex(valor, "([0-9]+)")) {
        retorno = "inteiro";
        return retorno;   
    } else {
         fprintf (stderr, "ERRO: Tipo não identificado. Linha: %d\n", yylineno);
         exit(0);
    }
    
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
