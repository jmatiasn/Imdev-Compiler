%{
    #include <stdio.h>
%}

%%

char	     	                        	  {return TIPO_CHAR;}
void						                        {return TIPO_VOID;}
const	                                	{return CONST;}
var                                     {return VAR;}
real	                                	{return TIPO_REAL;}
inteiro	                                {return TIPO_INT;}
string						                      {return TIPO_STRING;}
main			        		                  {return MAIN;}
se                        	        	  {return SE;}
senao                           		    {return SENAO;}
entao                           		    {return ENTAO;}
fimse                            		    {return FIM_SE;}
enquanto  			        	              {return ENQUANTO;}
fimenquanto                       		  {return FIM_ENQUANTO;}
para				        	                  {return PARA;}
fimpara                   	        	  {return FIM_PARA;}
faca                            		    {return FACA;}
imprime                             		{return IMPRIME;}
aloca 				                          {return ALOCA;}
libera				                          {return LIBERA;}
verdade                                 {return VERDADE;}
falso                                   {return FALSO;}

"="                                     {return OP_ATRIBUICAO;}
"("                                    	{return ABRE_PAREN;}
")"                                    	{return FECHA_PAREN;}
"["                                     {return ABRE_COLCHETE;}
"]"                                     {return FECHA_COLCHETE;}
"{"                                     {return ABRE_CHAVES;}
"}"                                     {return FECHA_CHAVES;}
";"                                     {return PONTO_VIRGULA;}
":"					                            {return DOIS_PONTOS;}
","                                     {return VIRGULA;}
"+"           		            		      {return OP_SOMA;}
"-"    				                          {return OP_SUB;}
"*"            			              	    {return OP_MULT;}
"/"            				                  {return OP_DIV;}
"%"                                     {return OP_RESTO;}
"|"                 				            {return OP_LOGICO_OU;}
"&"					                            {return OP_LOGICO_E;}
"!"                                     {return OP_LOGICO_NEGACAO;}
"<"            				                  {return OP_MENOR;}
">"   		 		                          {return OP_MAIOR;}
"<="				                            {return OP_MENOR_IGUAL;}
">="           		            		      {return OP_MAIOR_IGUAL;}
"=="				                            {return OP_IGUAL;}
"!="				                            {return OP_DIFERENTE;}
"++"  			                            {return OP_INC;}
"--"  			                            {return OP_DEC;}

[ \t\r\n]+			                        ;
[_]*[a-zA-Z]+[a-zA-Z0-9_]*	        	  {return ID;}
[0-9]+                                  {return V_INTEIRO;}

.					                              {printf("ERRO\n");}

%%
int main(void) {
  yylex();
  return 0;
}
