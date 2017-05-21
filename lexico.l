%{
/* C Declarations: */
#include <stdio.h>
#include "y.tab.h" 

int yylineno=1;
void yyerror(char *message);

%}
/* Lex Definitions: */
digitos [0-9]

%%

char	     	                        {yylval.sValue = strdup(yytext);return(TIPO);}
void					{yylval.sValue = strdup(yytext);return(TIPO);}
const	                                {yylval.sValue = strdup(yytext);return(CONST);}
float	                                {yylval.sValue = strdup(yytext);return(TIPO);}
inteiro	                                {yylval.sValue = strdup(yytext);return(TIPO);}
string			                {yylval.sValue = strdup(yytext);return(TIPO);}
main			        	{yylval.sValue = strdup(yytext);return(MAIN);}
se                        		{yylval.sValue = strdup(yytext);return(SE);}
senao                     		{yylval.sValue = strdup(yytext);return(SENAO);}
entao                     		{yylval.sValue = strdup(yytext);return(ENTAO);}
fimse                     		{yylval.sValue = strdup(yytext);return(FIM_SE);}
enquanto  			    	{yylval.sValue = strdup(yytext);return(ENQUANTO);}
fimenquanto               		{yylval.sValue = strdup(yytext);return(FIM_ENQUANTO);}
para					{yylval.sValue = strdup(yytext);return(FIM_PARA);}
fimpara                   		{yylval.sValue = strdup(yytext);return(FIM_PARA);}
faca                      		{yylval.sValue = strdup(yytext);return(FACA);}
break                      		{yylval.sValue = strdup(yytext);return(BREAK);}
return                      		{yylval.sValue = strdup(yytext);return(RETURN);}
print                      		{yylval.sValue = strdup(yytext);return(PRINT);}
aloca 					{yylval.sValue = strdup(yytext);return(ALOCA);}
libera 					{yylval.sValue = strdup(yytext);return(LIBERA);}
[a-zA-Z_][a-zA-Z_0-9]*			{yylval.sValue = strdup(yytext);return ID;}
({digitos}+)               		{yylval.iValue = atoi(yytext);return NUMERO;}
(-{digitos}+)               		{yylval.iValue = atoi(yytext);return NUMERO;} 	/* numero negativo */
({digitos}*\.{digitos}+)		{yylval.fValue = atof(yytext);return REAL;}
\"(\\.|[^\\"])*\"                       {yylval.sValue = strdup(yytext);return STRING;}
"="                                     {yylval.sValue = strdup(yytext);return(OP_ATRIBUICAO);}
"("                                     {yylval.sValue = strdup(yytext);return(ABRE_PAREN);}
")"                                     {yylval.sValue = strdup(yytext);return(FECHA_PAREN);}
"["                                     {yylval.sValue = strdup(yytext);return(ABRE_COLCHETE);}
"]"                                     {yylval.sValue = strdup(yytext);return(FECHA_COLCHETE);}
"{"                                     {yylval.sValue = strdup(yytext);return(ABRE_CHAVES);}
"}"                                     {yylval.sValue = strdup(yytext);return(FECHA_CHAVES);}
";"                                     {yylval.sValue = strdup(yytext);return(PONTO_VIRGULA);}
":"					{yylval.sValue = strdup(yytext);return(DOIS_PONTOS);}
","                                     {yylval.sValue = strdup(yytext);return(VIRGULA);}
"+"           				{yylval.sValue = strdup(yytext);return(OP_SOMA);}
"-"    				        {yylval.sValue = strdup(yytext);return(OP_SUB);}
"*"            				{yylval.sValue = strdup(yytext);return(OP_MULT);}
"/"            				{yylval.sValue = strdup(yytext);return(OP_DIV);}
"%"                                     {yylval.sValue = strdup(yytext);return(OP_RESTO);}
"|"					{yylval.sValue = strdup(yytext);return(OP_LOGICO_OU);}
"&"					{yylval.sValue = strdup(yytext);return(OP_LOGICO_E);}
"<"            				{yylval.sValue = strdup(yytext);return(OP_MENOR);}
">"   		 		        {yylval.sValue = strdup(yytext);return(OP_MAIOR);}
"<="					{yylval.sValue = strdup(yytext);return(OP_MENOR_IGUAL);}
">="           				{yylval.sValue = strdup(yytext);return(OP_MAIOR_IGUAL);}
"=="					{yylval.sValue = strdup(yytext);return(OP_IGUAL);}
"!="					{yylval.sValue = strdup(yytext);return(OP_DIFERENTE);}
"++"  			                {yylval.sValue = strdup(yytext);return(OP_INC);}
"--"  			                {yylval.sValue = strdup(yytext);return(OP_DEC);}
[\n]                                    {yylineno++;}	/* quebra linha */
[ \t\r]+				/* espaços em branco */
.					yyerror("valor ilegal");/* erro */	

%%

#ifndef yywrap
   int yywrap (void) {
   return 1;
   }
#endif
void yyerror(char *message)
{
   fprintf(stderr,"Error: \"%s\" in line %d. Lexem = %s\n", message, yylineno, yytext);
   exit(1);
}

