%{
   #include <stdio.h>
%}

%%

char	     	                        	printf("TIPO_CHAR\n");
void						printf("TIPO_VOID\n");
const	                                	printf("CONST\n");
float	                                	printf("TIPO_FLOAT\n"); 
inteiro	                                	printf("TIPO_INT\n"); 
string						printf("TIPO_STRING\n"); 
main			        		printf ("MAIN\n");
se                        	        	printf ("SE\n");
senao                           		printf ("SENAO\n");
entao                           		printf("ENTAO\n");
fimse                            		printf("FIM_SE\n");
enquanto  			        	printf("ENQUANTO\n");
fimenquanto                       		printf("FIM_ENQUANTO\n");
para				        	printf("PARA\n");
fimpara                   	        	printf("FIM_PARA\n");
faca                            		printf("FACA\n");
imprime                             		printf("IMPRIME\n");
aloca 				                printf("ALOCA\n");
libera 				                printf("LIBERA\n");

"="                                       	printf("OP_ATRIBUICAO\n");
"("                                       	printf("ABRE_PAREN\n");
")"                                       	printf("FECHA_PAREN\n");
    "["                                   	printf("ABRE_COLCHETE\n");
"]"                                       	printf("FECHA_COLCHETE\n");
"{"                                       	printf("ABRE_CHAVES\n");
"}"                                       	printf("FECHA_CHAVES\n");
";"                                       	printf("PONTO_VIRGULA\n");
":"					        printf("DOIS_PONTOS\n");
","                                       	printf("VIRGULA\n");
"+"           		            		printf("OP_SOMA\n");
"-"    				                printf("OP_SUB\n");
"*"            			              	printf("OP_MULT\n");
"/"            				        printf("OP_DIV\n");
"%"                                       	printf("OP_RESTO\n");
"|"                 				printf("OP_LOGICO_OU\n");
"&"					        printf("OP_LOGICO_E\n");
"<"            				        printf("OP_MENOR\n");
">"   		 		                printf("OP_MAIOR\n");
"<="				                printf("OP_MENOR_IGUAL\n");
">="           		            		printf("OP_MAIOR_IGUAL\n");
"=="				                printf("OP_IGUAL\n");
"!="				                printf("OP_DIFERENTE\n");
"++"  			                        printf("OP_INC\n");
"--"  			                        printf("OP_DEC\n");

[ \t\r\n]+			                /* espaços em branco */
[a-zA-Z_][a-zA-Z_0-9]*	        		printf("ID\n");
.					        //yyerror("valor ilegal");/* erro */	

%%


