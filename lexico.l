%{
    #include <stdio.h>
    #include "y.tab.h"
%}
/* Lex Definitions: */
digitos[0-9]
%%

"char"	     	                        	  {yylval.sValue = strdup(yytext); return TIPO_CHAR;}
"void"						                        {yylval.sValue = strdup(yytext); return TIPO_VOID;}
"const"	                                	{yylval.sValue = strdup(yytext); return CONST;}
"var"                                     {yylval.sValue = strdup(yytext); return VAR;}
"real"	                                	{yylval.sValue = strdup(yytext); return TIPO_REAL;}
"inteiro"	                                {yylval.sValue = strdup(yytext); return TIPO_INT;}
"string"						                      {yylval.sValue = strdup(yytext); return TIPO_STRING;}
"main"			        		                  {yylval.sValue = strdup(yytext); return MAIN;}
"se"                        	        	  {yylval.sValue = strdup(yytext); return SE;}
"senao"                           		    {yylval.sValue = strdup(yytext); return SENAO;}
"entao"                           		    {yylval.sValue = strdup(yytext); return ENTAO;}
"fimse"                            		    {yylval.sValue = strdup(yytext); return FIM_SE;}
"enquanto"  			        	              {yylval.sValue = strdup(yytext); return ENQUANTO;}
"fimenquanto"                       		  {yylval.sValue = strdup(yytext); return FIM_ENQUANTO;}
"para"				        	                  {yylval.sValue = strdup(yytext); return PARA;}
"fimpara"                   	        	  {yylval.sValue = strdup(yytext); return FIM_PARA;}
"faca"                            		    {yylval.sValue = strdup(yytext); return FACA;}
"imprime"                             		{yylval.sValue = strdup(yytext); return IMPRIME;}
"aloca" 				                          {yylval.sValue = strdup(yytext); return ALOCA;}
"libera"				                          {yylval.sValue = strdup(yytext); return LIBERA;}
"verdade"                                 {yylval.sValue = strdup(yytext); return VERDADE;}
"falso"                                   {yylval.sValue = strdup(yytext); return FALSO;}

"="                                       {return OP_ATRIBUICAO;}
"("                                    	  {return ABRE_PAREN;}
")"                                    	  {return FECHA_PAREN;}
"["                                       {return ABRE_COLCHETE;}
"]"                                       {return FECHA_COLCHETE;}
"{"                                       {return ABRE_CHAVES;}
"}"                                       {return FECHA_CHAVES;}
";"                                       {return PONTO_VIRGULA;}
":"					                              {return DOIS_PONTOS;}
","                                       {return VIRGULA;}
"+"           		            		        {return OP_SOMA;}
"-"    				                            {return OP_SUB;}
"*"            			              	      {return OP_MULT;}
"/"            				                    {return OP_DIV;}
"%"                                       {return OP_RESTO;}
"|"                 				              {return OP_LOGICO_OU;}
"&"					                              {return OP_LOGICO_E;}
"!!"                                       {return OP_LOGICO_NEG;}
"<"            				                    {return OP_MENOR;}
">"   		 		                            {return OP_MAIOR;}
"<="				                              {return OP_MENOR_IGUAL;}
">="           		            		        {return OP_MAIOR_IGUAL;}
"=="				                              {return OP_IGUAL;}
"!="				                              {return OP_DIFERENTE;}
"++"  			                              {return OP_INC;}
"--"  			                              {return OP_DEC;}
[ \t\r\n]+			                          ;
[_]*[a-zA-Z]+[a-zA-Z0-9_]*	        	    {return ID;}
{digitos}+                                {return V_INTEIRO;}
({digitos}*\.{digitos}+)                  {return V_REAL;}
.					                                {printf("ERRO\n");}

%%
int main(void) {
  yylex();
  return 0;
}
