%{
    #include <stdio.h>
    #include "y.tab.h"

    extern int yyerror (char *msg);
%}
/* Lex Definitions: */
digitos[0-9]
%%


"char"	     	                        	{yylval.sValue = strdup(yytext); return TIPO_CHAR;}
"void"						                      {yylval.sValue = strdup(yytext); return TIPO_VOID;}
"const"	                                {yylval.sValue = strdup(yytext); return CONST;}
"var"                                   {yylval.sValue = strdup(yytext); return VAR;}
"real"	                                {yylval.sValue = strdup(yytext); return TIPO_REAL;}
"inteiro"	                              {yylval.sValue = strdup(yytext); return TIPO_INT;}
"string"						                    {yylval.sValue = strdup(yytext); return TIPO_STRING;}
"booleano"                              {yylval.sValue = strdup(yytext); return TIPO_BOOL;}
"main"			        		                {yylval.sValue = strdup(yytext); return MAIN;}
"func"		        		                  {yylval.sValue = strdup(yytext); return FUNC;}
"proc"		        		                  {yylval.sValue = strdup(yytext); return PROC;}
"se"                        	        	{yylval.sValue = strdup(yytext); return SE;}
"senao"                           		  {yylval.sValue = strdup(yytext); return SENAO;}
"entao"                           		  {yylval.sValue = strdup(yytext); return ENTAO;}
"fimse"                            		  {yylval.sValue = strdup(yytext); return FIM_SE;}
"enquanto"  			        	            {yylval.sValue = strdup(yytext); return ENQUANTO;}
"fimenquanto"                       		{yylval.sValue = strdup(yytext); return FIM_ENQUANTO;}
"para"				        	                {yylval.sValue = strdup(yytext); return PARA;}
"fimpara"                   	        	{yylval.sValue = strdup(yytext); return FIM_PARA;}
"faca"                            		  {yylval.sValue = strdup(yytext); return FACA;}
"imprime"                             	{yylval.sValue = strdup(yytext); return IMPRIME;}
"aloca" 				                        {yylval.sValue = strdup(yytext); return ALOCA;}
"libera"				                        {yylval.sValue = strdup(yytext); return LIBERA;}
"verdade"                               {yylval.sValue = strdup(yytext); return VERDADE;}
"falso"                                 {yylval.sValue = strdup(yytext); return FALSO;}
"retorno"                               {yylval.sValue = strdup(yytext); return RETORNO;}
"("                                    	{yylval.sValue = strdup(yytext); return ABRE_PAREN;}
")"                                    	{yylval.sValue = strdup(yytext); return FECHA_PAREN;}
"{"                                     {yylval.sValue = strdup(yytext); return ABRE_CHAVES;}
"}"                                     {yylval.sValue = strdup(yytext); return FECHA_CHAVES;}
"["                                     {yylval.sValue = strdup(yytext); return ABRE_COLCHETE;}
"]"                                     {yylval.sValue = strdup(yytext); return FECHA_COLCHETE;}
";"                                     {yylval.sValue = strdup(yytext); return PONTO_VIRGULA;}
":"					                            {yylval.sValue = strdup(yytext); return DOIS_PONTOS;}
","                                     {yylval.sValue = strdup(yytext); return VIRGULA;}
"+"           		            	        {yylval.sValue = strdup(yytext); return OP_SOMA;}
"-"    				                          {yylval.sValue = strdup(yytext); return OP_SUB;}
"*"            			                    {yylval.sValue = strdup(yytext); return OP_MULT;}
"/"            				                  {yylval.sValue = strdup(yytext); return OP_DIV;}
"%"                                     {yylval.sValue = strdup(yytext); return OP_RESTO;}
"|"                 			              {yylval.sValue = strdup(yytext); return OP_LOGICO_OU;}
"&"					                            {yylval.sValue = strdup(yytext); return OP_LOGICO_E;}
"!"                                     {yylval.sValue = strdup(yytext); return OP_LOGICO_NEG;}
"="                                     {yylval.sValue = strdup(yytext);return(OP_ATRIBUICAO);}
"<"            				                  {yylval.sValue = strdup(yytext); return OP_MENOR;}
">"   		 		                          {yylval.sValue = strdup(yytext); return OP_MAIOR;}
"<="				                            {yylval.sValue = strdup(yytext); return OP_MENOR_IGUAL;}
">="           		            	        {yylval.sValue = strdup(yytext); return OP_MAIOR_IGUAL;}
"=="				                            {yylval.sValue = strdup(yytext); return OP_IGUALDADE;}
"!="				                            {yylval.sValue = strdup(yytext); return OP_DIFERENTE;}
"++"  			                            {yylval.sValue = strdup(yytext); return OP_INC;}
"--"  			                            {yylval.sValue = strdup(yytext); return OP_DEC;}
[_]*[a-zA-Z]+[a-zA-Z0-9_]*	            {yylval.sValue = strdup(yytext); return ID;}
{digitos}+                              {yylval.iValue = atoi(yytext); return V_INTEIRO;}
({digitos}*\.{digitos}+)                {yylval.fValue = atof(yytext); return V_REAL;}
\"(\\.|[^\\"])*\"                       {yylval.sValue = strdup(yytext); return V_STRING;}
[\n]                                    {yylineno++;}
[ \t\r]
.					                              {printf("ERRO\n");}

%%

#ifndef yywrap
   int yywrap (void) {return 1;}
#endif
