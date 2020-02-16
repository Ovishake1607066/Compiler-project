%{
	#include<stdio.h>
	#include <string.h>
	#include<stdlib.h>
	#include <math.h>
	#include "1607066.tab.h"
%}
single_line_comment "%%".*
multiple_line_comment [ ]*[%][.][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t ]*[.][%]
identifiers [a-zA-Z]([a-zA-Z0-9])*
float [+-]?[0-9]+[.][0-9]+|[+-]?[.][0-9]+|[1-9]+[e][+-]?[0-9]+
char [A-Za-z]+
%%
{multiple_line_comment} {
	printf("Multiple line comment\n");
}
{single_line_comment} {
	printf("Single line comment\n");
}
"start"	{return GO;}
"("	{ return *yytext;}
")"	{ return *yytext;}
","	{ return *yytext;}
";"	{ return *yytext;}
"{"	{return *yytext;}
"}"	{return *yytext;}
"="	{return *yytext;}
[-+/*] { return *yytext; }
"++"   {return INC;}
"--"	{return DEC;}
"!"	{return NOT;}
"break" { return BREAK;}
"switch" { return SWITCH;}
"default"    { return DEFAULT;}
"int"	{ return INT; }
"float"	{ return FLOAT; }
"char"	{ return CHAR; }
":"     { return COL;}
"for"   { return FOR;}	
"while" { return WHILE;}
"pow"	{ return POWER; }
"abs"	{ return ABS;}
"fact"	{ return FACTORIAL;}
"gcd"	{return GCD;}
"lcm"	{return LCM;}
"max"	{return MAX;}
"min"	{return MIN;}
"square" {return SQUARE;}
"sqrt" {return SQUAREROOT;}
">"		{ return GREAT; }
"<"		{ return LESS; }
"if"	{ return IF;}
"else"	{ return ELSE;}
"elif"	{ return ELIF;}
"function" 	{return FUNCTION;}
[+-]?[0-9]+	{ 
		yylval.number = atoi(yytext);
		return NUM;
	}
{identifiers} {
	 yylval.string=strdup(yytext);
	 return VAR;
	}
[ \t]   ;      
[ \n]	;
.	{
		yyerror("Unknown Character.\n");
	}
%%
int main()
{
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yyparse();
}

