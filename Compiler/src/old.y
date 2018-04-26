%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

extern char *yytext;
char st[100][10];
int top=0;
char i_[4]="0";
char temp[2]="t";
FILE *icg,*prod;

void yyerror(const char *);
int yylex();
void insert(char* name,int i,int type);void begin();
int new_label();
int push_label();
int pop_label();
char *decr(char *new);

struct sym
{
			char* name;
			int type;
};

struct sym symtab[100];
int type=0;
char* attributes[30] = {"var","long int","long long int","short ","long","long long","char","int","short int","long int","long long int","short ","long","long","long long","char","int","float","double","long double"};

int i=0;

int label_count=0;
int label_stack[100];
int label_stack_top = 0;

%}

%left '+'

%union
{
			struct{
						int type;
						char* str;
			}type_val;
			int type;
			char *str;
}

%token INCLUDE HEADER VOID MAIN RETURN IF ELSE WHILE DO EXTERN STATIC REGISTER AUTO VAR SHORT LONG CHAR FLOAT DOUBLE SIGNED UNSIGNED PRINTF SCANF STRING FOR
%token INCR DECR PLUS_E MIN_E
%token <str>  LT GT LTE GTE EE NE
%token <type> INT
%token <type_val> ID
%token NUMBER


%type <str> rel_op log_op
%type <type_val> E T F
%type <type> typeSpecifier varDeclrList varAssign DeclrList

%start Start

%%

Start						:	Program 																							{
																																							fprintf(prod,"\nStart = Program");
																																							FILE * sym_fil = fopen("./../IR/SymTab.table","w");
																																							printf("\n\t---------valid--------\n");
																																							fprintf(sym_fil,"\n\t ___________________________________________\n\t|            SYMBOL TABLE ENTRIES           |\n\t ___________________________________________\n");
																																							fprintf(sym_fil,"\n\t\tNAME\t\t\tTYPE\n\t\t____\t\t\t____\n");
																																							for(int j=0;j<i;j++)
																																							{
																																										fprintf(sym_fil,"\n\t%d\t %s\t\t\t%s\n",j+1,symtab[j].name,attributes[symtab[j].type]);
																																							}
																																							YYACCEPT;
																																				};
Program					: '#' INCLUDE '<' Library '>' Program {fprintf(prod,"\nProgram = # include library program");}
								| DeclrList ';' Program {fprintf(prod,"\nProgram = DeclrList Program");}
								| main_func {fprintf(prod,"\nProgram = main_func");}
								;
Library					: HEADER
								;
main_func				: VOID MAIN'(' ')' '{' S '}' {fprintf(prod,"\nmain_func = main S");}
								| typeSpecifier MAIN '(' ')' '{' S '}' {fprintf(prod,"\nmain_func = typeSpecifier MAIN S");}
								;
S								: DeclrList ';' S {fprintf(prod,"\nS = DeclrList S");}
								|  IF '(' Cond ')' M '{' S O'}' ELSE N '{' S1 '}' N S {fprintf(prod,"\nS = ifelse COND S S1 S");}
								| P DO '{' S '}' WHILE '(' Cond ')' Q ';' S {fprintf(prod,"\nS = dowhile S COND S");}
								| UnaryExpr ';' S {fprintf(prod,"\nS = UnaryExpr S");}
								| RETURN expression ';'
								|	{fprintf(prod,"\nS = ε");}
								;

S1							: S {fprintf(prod,"\nS1 = S");}
								;

P								: 											{ 		int l = new_label();
																							push_label(l);
																							fprintf(icg,"\nL%d :",l);
																				}
								;
Q								:												{
																						int l1 = pop_label();
																						strcpy(temp,"t");
																						char *new_i = decr(i_);
																					  strcat(temp,new_i);
																						fprintf(icg,"\nif %s goto L%d",temp,l1);
																						int l2 = new_label();
																						push_label(l2);
																						fprintf(icg,"\ngoto L%d\nL%d :",l2,pop_label());
																				}
M								:												{
																						int l = new_label();
																						strcpy(temp,"t");
																						char *new_i = decr(i_);
																					  strcat(temp,new_i);
																						fprintf(icg,"\nifFalse %s goto L%d",temp,l);
																						push_label(l);
																				}
								;
N								:												{
																						int l = pop_label();
																						fprintf(icg,"\nL%d :",l);
																				}
								;
O								:												{
																						int l1 = pop_label();
																						int l2 = new_label();
																						push_label(l2);
																						push_label(l1);
																						fprintf(icg,"\ngoto L%d",l2);
																				}
Cond						: expression {fprintf(prod,"\nCOND = expression");}
								| expression log_op expression {fprintf(prod,"\nCOND = expression log_op expression");}
								;
DeclrList				: storageClass typeSpecifier varDeclrList 						{fprintf(prod,"\nDeclrList = storageClass typeSpecifier varDeclrList");}
								| storageClass varDeclrList														{fprintf(prod,"\nDeclrList = storageClass varDeclrList");}
								| typeSpecifier varDeclrList													{fprintf(prod,"\nDeclrList = typeSpecifier varDeclrList");}
								| varDeclrList 																				{fprintf(prod,"\nDeclrList = varDeclrList");}
								;
varDeclrList		: ID ',' varDeclrList 			  {fprintf(prod,"\nvarDeclrList = ID varDeclrList");}
								| ID 												  {fprintf(prod,"\nvarDeclrList = ID");}
								| varAssign ',' varDeclrList  {fprintf(prod,"\nvarDeclrList = varAssign varDeclrList");}
								| varAssign 									{fprintf(prod,"\nvarDeclrList = varAssign");}
								| ID '[' E ']' ',' varDeclrList
								| ID '[' E ']'
								| varArrayAssign
								;
varAssign				: ID{push_2($1.str);} '='{push();} E 								    {
																																							fprintf(prod,"\nvarAssign = <ID,%s> = E",$1.str);
																																							codegen_assign();
																																							insert($1.str,i,type);
																																							i++;
																																				}
			 				  | ID {push_2($1.str);} '='{push();} E 													 {
																																														  codegen_assign();
																																															insert($1.str,i,type);
																																															i++;
																																								 }
																',' varAssign 										{printf("\nvarAssign = <ID,%s> = E varAssign",$1.str);}
								;
varArrayAssign	: ID'['E']' '=' '{' ArrayList '}'
								;
ArrayList				: E ',' ArrayList
								| E
								;
storageClass		: EXTERN
								| STATIC
								| REGISTER
								| AUTO
								;
typeSpecifier		: Sign SHORT INT 								{ type = 1; }
								| Sign LONG INT 								{ type = 2; }
								| Sign LONG LONG INT 						{ type = 3; }
								| Sign SHORT  									{ type = 4; }
								| Sign LONG  										{ type = 5; }
								| Sign LONG LONG  							{ type = 6; }
								| Sign CHAR  										{ type = 7; }
								| Sign INT 											{ type = 8; }
								| SHORT INT  										{ type = 9; }
								| LONG INT  										{ type = 10; }
								| LONG LONG INT  								{ type = 11; }
								| SHORT  												{ type = 12; }
								| LONG  												{ type = 13; }
								| LONG LONG  										{ type = 14; }
								| CHAR  												{ type = 15; }
								| INT 													{ type = 16; }
								| VAR 													{ type = 0; }
								| FLOAT  												{ type = 17; }
								| DOUBLE  											{ type = 18; }
								| LONG DOUBLE 									{ type = 19; }
								;
Sign						: SIGNED
								| UNSIGNED
								|
								;
expression			: RelExpr {fprintf(prod,"\nexpression = RelExpr");}
								| LogExpr {fprintf(prod,"\nexpression = LogExpr");}
								| E {fprintf(prod,"\nexpression = E");}
								;
RelExpr					: E rel_op T{codegen_relog();} {fprintf(prod,"\nRelExpr = E rel_op T");}
								;
LogExpr					:  E log_op T{codegen_relog();} {fprintf(prod,"\nLogExpr = E log_op T");}
								;
E								:  E '+'{push();} T{codegen();} {fprintf(prod,"\nE = E + T");}
								|  E '-'{push();} T{codegen();} {fprintf(prod,"\nE = E - T");}
								|  T {fprintf(prod,"\nE = T");}
								;
T								:  T '*'{push();} F{codegen();} {fprintf(prod,"\nT = T * F");}
								|  T '/'{push();} F{codegen();} {fprintf(prod,"\nT = T / F");}
								|  F{fprintf(prod,"\nT = F");}
								;
F								: ID 														{fprintf(prod,"\nF = <ID,%s>",$1.str);}{ $$.str=$1.str;push_2($$.str); }
								| NUMBER												{fprintf(prod,"\nF = <NUMBER,%d>",atoi(yytext));push();}
								| '(' E ')' 										{ fprintf(prod,"\nF = E");$$=$2; }
								| UnaryExpr
								| Unary_op
								| ID'['E']'
								;
UnaryExpr				: INCR ID {fprintf(prod,"\nUnaryExpr = <++> ID");}
								| ID INCR {fprintf(prod,"\nUnaryExpr = ID <++>");}
								| DECR ID {fprintf(prod,"\nUnaryExpr = <--> ID");}
								| ID DECR {fprintf(prod,"\nUnaryExpr = ID <-->");}
								;
Unary_op				: ID u_op F {fprintf(prod,"\nUnary_op = ID u_op F");}
								;
u_op						: PLUS_E {fprintf(prod,"\nu_op = <PLUS_E>");}
								| MIN_E {fprintf(prod,"\nu_op = <MIN_E>");}
								;
rel_op					: LT {push();} {fprintf(prod,"\nrel_op = <LT>");}
								| GT {push();} {fprintf(prod,"\nrel_op = <GT>");}
								| LTE {push();} {fprintf(prod,"\nrel_op = <LTE>");}
								| GTE {push();} {fprintf(prod,"\nrel_op = <GTE>");}
								| NE {push();} {fprintf(prod,"\nrel_op = <NE>");}
								| EE {push();} {fprintf(prod,"\nrel_op = <EE>");}
								;
log_op					: '|''|' {push();} {printf(prod,"\nlog_op = <||>");}
								| '&''&' {push();} {printf(prod,"\nlog_op = <&&>");}
								;
%%

void insert(char* name,int i,int type)
{
			symtab[i].name=(char *)malloc(sizeof(char)*100);
			symtab[i].name=name;
			symtab[i].type=type;
}
int new_label()
{
			label_count++;
			return label_count-1;
}
int push_label(int label)
{
			label_stack[label_stack_top++] = label;
			return 0;
}
int pop_label()
{
			int i = 0;
			label_stack_top--;
			return label_stack[label_stack_top];
}
void yyerror(const char *str)
{
			printf("\terror\n");
}
void push()
{
  strcpy(st[++top],yytext);
}
void push_2(char *arg)
{
  strcpy(st[++top],arg);
}
void codegen()
{
 		strcpy(temp,"t");
 		strcat(temp,i_);
  	fprintf(icg,"\n%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
  	top-=2;
 		strcpy(st[top],temp);
 		incr();
 }
 void codegen_assign()
 {
 		fprintf(icg,"\n%s = %s\n",st[top-2],st[top]);
 		top-=2;
 }
 void codegen_relog()
 {
	 strcpy(temp,"t");
	 strcat(temp,i_);
	 fprintf(icg,"\n%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
	 top-=2;
	 strcpy(st[top],temp);
	 incr();
}
void incr()
{
	int x;
	sscanf(i_,"%d",&x);
	x = x + 1;
	sprintf(i_,"%d",x);
}
char *decr(char *new)
{
	char *ret = malloc(sizeof(char)*strlen(new)+1);
	strcpy(ret,new);
	int x;
	sscanf(ret,"%d",&x);
	x = x - 1;
	sprintf(ret,"%d",x);
	return ret;
}
int main()
{
		icg = fopen("./../IR/irc.3ac","w");
		prod = fopen("./../IR/parse.log","w");
			if( !yyparse() )
			{
						printf("\tsuccessful !\n");
			}
			fclose(icg);
}
