%{
#include<stdio.h>
#include "y.tab.h"
void yyerror(const char *);
extern char * yytext;
extern FILE* fptr;
%}

%%
" "
"\n"
[0-9]+ 						{
												return NUMBER;
									}
"<"						{yylval.str = strdup(yytext); return LT;}
">"						{yylval.str = strdup(yytext); return GT;}
">="					{yylval.str = strdup(yytext); return GTE;}
"<="					{yylval.str = strdup(yytext); return LTE;}
"=="					{yylval.str = strdup(yytext); return EE;}
"!="					{yylval.str = strdup(yytext); return NE;}
"-="							return MIN_E;
"+="							return PLUS_E;
"++"							return INCR;
"--"							return DECR;
"void"				 		return VOID;
"main" 						return MAIN;
"return" 					return RETURN;
"include" 				return INCLUDE;
"stdio.h" 				return HEADER;
"else" 						return ELSE;
"if"							return IF;
"while" 					return WHILE;
"for"							return FOR;
"do"							return DO;
"extern" 					return EXTERN;
"static" 					return STATIC;
"register" 				return REGISTER;
"auto" 						return AUTO;
"var" 						return VAR;
"short" 					return SHORT;
"long" 						return LONG;
"int" 						{
												yylval.type = strdup(yytext);
												return INT;
									}
"char" 						return CHAR;
"float" 					return FLOAT;
"double" 					return DOUBLE;
"signed" 					return SIGNED;
"unsigned" 				return UNSIGNED;
"printf" 					return PRINTF;
"scanf" 					return SCANF;
[A-Za-z]+ 				{
												yylval.type_val.str = strdup(yytext);
												return ID;
									}
\/\/.*     				;{ fprintf(fptr,"%s",yytext);}
\/\*([^/]|\/[^*])*\*\/ ;{ fprintf(fptr,"%s",yytext);}

. 								return *yytext;
%%
