#include "hash.h"
#include <regex.h>
#include <stdbool.h>

int escopo_ordem = 0;
int rotulo_ordem = 0;
extern int yylineno;
FILE *cArquivo;
int ultimaLinha = 0;

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

		
bool verificarSeTipoEhInteiro(Item *item) {
    
    if(strcmp("inteiro", item->tipoCompleto->tipo) != 0) {
            return false;
    }
    return true;
}

bool verificarSeEhTipoBooleano(Item *item) {
    
    if(strcmp("booleano", item->tipoCompleto->tipo) != 0) {
            return false;
    }
    return true;
}

void verificarSeExprEhBooleano(Item *item) {
    if (!verificarSeEhTipoBooleano(item)) {
        fprintf (stderr, "ERRO: Expressão não é do tipo booleano. Linha: %d\n", yylineno);
        exit(0);
    }
}

Item *negarExprBooleano(Item *item) {
    if(strcmp("verdade", item->tipoCompleto->sValor) == 0) {
        item->tipoCompleto->sValor = "falso";
    } else {
        item->tipoCompleto->sValor = "verdade";
    }
    return item;
}

Item *processarExprBin(Item *expr1, char *operador, Item *expr2) {
    Item* retorno = novoItem();
    
    //Operadores aritméticos
    //Se for soma
    if(strcmp("+", operador) == 0) {
        //Se for inteiro + inteiro
        if(strcmp("inteiro", expr1->tipoCompleto->tipo) == 0
           &&  strcmp(expr1->tipoCompleto->tipo, expr2->tipoCompleto->tipo) == 0) {
            retorno->tipoCompleto->tipo = "inteiro";
            retorno->tipoCompleto->iValor = expr1->tipoCompleto->iValor + expr2->tipoCompleto->iValor;
            return retorno;
        }
        //Se for real + real
        if(strcmp("real", expr1->tipoCompleto->tipo) == 0
           &&  strcmp(expr1->tipoCompleto->tipo, expr2->tipoCompleto->tipo) == 0) {
            retorno->tipoCompleto->tipo = "real";
            retorno->tipoCompleto->fValor = expr1->tipoCompleto->fValor + expr2->tipoCompleto->fValor;
            return retorno;
        }
        //Se for real + inteiro
        if(strcmp("real", expr1->tipoCompleto->tipo) == 0
           &&  strcmp("inteiro", expr2->tipoCompleto->tipo) == 0) {
            retorno->tipoCompleto->tipo = "real";
            float novoValor2 = (float) expr2->tipoCompleto->iValor;
            retorno->tipoCompleto->fValor = expr1->tipoCompleto->fValor + novoValor2;
            return retorno;
        }
    }
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
        retorno->tipoCompleto->fValor = atof(valor);
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

Item *incrementar(Item *item) {
    if (!verificarSeTipoEhInteiro(item)) {
        fprintf (stderr, "ERRO: Tipo %s não compatível com o operador ++. Linha: %d\n", item->tipoCompleto->tipo, yylineno);
        exit(0);
    }
    
    item->tipoCompleto->iValor = item->tipoCompleto->iValor + 1;
    
    return item;
}

Item *decrementar(Item *item) {
    if (!verificarSeTipoEhInteiro(item)) {
        fprintf (stderr, "ERRO: Tipo %s não compatível com o operador --. Linha: %d\n", item->tipoCompleto->tipo, yylineno);
        exit(0);
    }
    
    item->tipoCompleto->iValor = item->tipoCompleto->iValor - 1;
    
    return item;
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

// Gerador de código

char *novaSentenca(int tamanho) {
    char *sentenca = malloc(tamanho + sizeof(char*)*200);
    return sentenca;
}

void escrever(char *sentenca) {
    cArquivo = fopen("./saida.c", "a+");
    fprintf(cArquivo, "%s", sentenca);
    fclose(cArquivo);
}

void escreverInicio(char *sentenca) {
    FILE *cArquivoTemp = fopen("./temporario.c", "a+");
    fprintf(cArquivoTemp, "%s", sentenca);
    fclose(cArquivoTemp);
    
    char c;
    
    do {
      c = fgetc(cArquivo);
      fputc(c, cArquivoTemp);
    } while (c != EOF);
   
    remove("saida.c");
    rename("temporario.c", "saida.c");
}

char *formatarTipo(char *tipo) {
    char *retorno = novaSentenca(strlen(tipo));
    if (strcmp(tipo, "inteiro") == 0) {
        strcpy(retorno, "int");
        return retorno;
    }
    if (strcmp(tipo, "booleano") == 0) {
        strcpy(retorno, "bool");
        return retorno;
    }
    if (strcmp(tipo,"real") == 0) {
        strcpy(retorno, "float");
        return retorno;
    }
    return retorno;
}

char* acessarValor(Item *item) {
    char *tipo = item->tipoCompleto->tipo;
    if(strcmp(tipo, "inteiro") == 0) {
        return convIntParaChar(item->tipoCompleto->iValor);
    } else if (strcmp(tipo, "real") == 0) {
        return convFloatParaChar(item->tipoCompleto->fValor);
    } else if (strcmp(tipo, "string") == 0) {
        return item->tipoCompleto->sValor;
    } else if (strcmp(tipo, "booleano") == 0) {
        if(strcmp(item->tipoCompleto->sValor, "falso") == 0) {
            return "false";
        } else if(strcmp(item->tipoCompleto->sValor, "verdade") == 0) {
            return "true";
        }
    }
    return "-1";
}

void escreverAtribuicao(char* tipo, char *id, Item* valor) {
    char *atribuicao = novaSentenca(strlen(tipo) + strlen(id));
    char *tipof = formatarTipo(tipo);
    strcpy(atribuicao, tipof);
    strcat(atribuicao, " ");
    strcat(atribuicao, id);
    strcat(atribuicao, " = ");
    strcat(atribuicao, acessarValor(valor));
    strcat(atribuicao, ";");
    strcat(atribuicao, "\n");
    
    escrever(atribuicao);
}

void escreverAtribuicaoConst(char *id, Item* valor) {
    char *atribuicao = novaSentenca(strlen(id));
    strcpy(atribuicao, "#define ");
    strcat(atribuicao, id);
    strcat(atribuicao, " ");
    strcat(atribuicao, acessarValor(valor));
    strcat(atribuicao, "\n");
    
    escreverInicio(atribuicao);
}

void escreverMain() {
    char* main = novaSentenca(strlen("main"));
    strcpy(main, "int main() {\n");
    
    escrever(main);
}

void escrerverInclude() {
    char* inc = novaSentenca(strlen("#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n"));
    strcpy(inc,"#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n" );
    
    escrever(inc);
}