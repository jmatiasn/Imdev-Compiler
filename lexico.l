%{
    #include <stdio.h>
%}

%%

char	     	                        	  {return TIPO_CHAR; printf("TIPO_CHAR\n");}
void						                        {return TIPO_VOID; printf("TIPO_VOID\n");}
const	                                	{return CONST; printf("CONST\n");}
float	                                	{return TIPO_FLOAT; printf("TIPO_FLOAT\n");}
inteiro	                                {return TIPO_INT; printf("TIPO_INT\n");}
string						                      {return TIPO_STRING; printf("TIPO_STRING\n");}
main			        		                  {return MAIN; printf("MAIN\n");}
se                        	        	  {return SE; printf("SE\n");}
senao                           		    {return SENAO; printf("SENAO\n");}
entao                           		    {return ENTAO; printf("ENTAO\n");}
fimse                            		    {return FIM_SE; printf("FIM_SE\n");}
enquanto  			        	              {return ENQUANTO; printf("ENQUANTO\n");}
fimenquanto                       		  {return FIM_ENQUANTO; printf("FIM_ENQUANTO\n");}
para				        	                  {return PARA; printf("PARA\n");}
fimpara                   	        	  {return FIM_PARA; printf("FIM_PARA\n");}
faca                            		    {return FACA; printf("FACA\n");}
imprime                             		{return IMPRIME; printf("IMPRIME\n");}
aloca 				                          {return ALOCA; printf("ALOCA\n");}
libera 				                          {return LIBERA; printf("LIBERA\n");}

"="                                     {return OP_ATRIBUICAO; printf("OP_ATRIBUICAO\n");}
"("                                    	{return ABRE_PAREN; printf("ABRE_PAREN\n");}
")"                                    	{return FECHA_PAREN; printf("FECHA_PAREN\n");}
"["                                     {return ABRE_COLCHETE; printf("ABRE_COLCHETE\n");}
"]"                                     {return FECHA_COLCHETE; printf("FECHA_COLCHETE\n");}
"{"                                     {return ABRE_CHAVES; printf("ABRE_CHAVES\n");}
"}"                                     {return FECHA_CHAVES; printf("FECHA_CHAVES\n");}
";"                                     {return PONTO_VIRGULA; printf("PONTO_VIRGULA\n");}
":"					                            {return DOIS_PONTOS; printf("DOIS_PONTOS\n");}
","                                     {return VIRGULA; printf("VIRGULA\n");}
"+"           		            		      {return OP_SOMA; printf("OP_SOMA\n");}
"-"    				                          {return OP_SUB; printf("OP_SUB\n");}
"*"            			              	    {return OP_MULT; printf("OP_MULT\n");}
"/"            				                  {return OP_DIV; printf("OP_DIV\n");}
"%"                                     {return OP_RESTO; printf("OP_RESTO\n");}
"|"                 				            {return OP_LOGICO_OU; printf("OP_LOGICO_OU\n");}
"&"					                            {return OP_LOGICO_E; printf("OP_LOGICO_E\n");}
"<"            				                  {return OP_MENOR; printf("OP_MENOR\n");}
">"   		 		                          {return OP_MAIOR; printf("OP_MAIOR\n");}
"<="				                            {return OP_MENOR_IGUAL; printf("OP_MENOR_IGUAL\n");}
">="           		            		      {return OP_MAIOR_IGUAL; printf("OP_MAIOR_IGUAL\n");}
"=="				                            {return OP_IGUAL; printf("OP_IGUAL\n");}
"!="				                            {return OP_DIFERENTE; printf("OP_DIFERENTE\n");}
"++"  			                            {return OP_INC; printf("OP_INC\n");}
"--"  			                            {return OP_DEC;printf("OP_DEC\n");}

[ \t\r\n]+			                        ;
[_]*[a-zA-Z]+[a-zA-Z0-9_]*	        	  {return ID; printf("ID\n");}
[0-9]+                                  {return V_INTEIRO; printf("V_INTEIRO\n");}

.					                              {printf("ERRO\n");}

%%
int main(void) {
  yylex();
  return 0;
}
