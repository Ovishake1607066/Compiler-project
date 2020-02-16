 %{
	#include<stdio.h>
	#include <math.h>
	#include <string.h>
	#include<stdlib.h>
	#define max_value 10000000
	int c1=1,c2=1,ans=0,temp=0;
	struct st {
    	char *str;
    	int n;
	};
	struct st first[max_value];
	struct st second[max_value];
%}
%union 
{
        int number;
        char *string;
}
%token <number> NUM
%token <string> VAR GO IF ELIF ELSE GCD LCM SQUARE SQUAREROOT MAX MIN ABS FUNCTION INT FLOAT CHAR  POWER FACTORIAL FOR COL WHILE BREAK  DEFAULT  SWITCH INC DEC NOT GREAT LESS
%nonassoc IFX
%nonassoc ELIFX
%nonassoc ELSE
%left LESS GREAT
%left '+' '-'
%left '*' '/'
%left FACTORIAL
%right POWER
%%
start: GO "(" ")" "{" main "}" { printf("\nI have done it\n"); }
	 ;
main: 
	| main statement
	| main declare
	;
declare:TYPE ID1 ';'	{ printf("\nVariable declared\n"); }
		;
TYPE : INT
     | FLOAT
     | CHAR
     ;
ID1  : ID1 ',' VAR	{
						if(findkey1($3))
						{
							printf("%s is already declared\n", $3 );
						}
						else
						{
							copy(&first[c1],$3, c1);
							c1++;	
						}
			}
     |VAR	{
				if(findkey1($1))
				{
					printf("%s is already declared\n", $1 );
				}
				else
				{
					copy(&first[c1],$1, c1);
							c1++;
				}
			}
	|VAR '=' NUM	{
				if(findkey1($1))
				{
					printf("%s is already declared\n", $1 );
				}
				else
				{
					copy(&first[c1],$1, c1);
							c1++;
					copy(&second[c2], $1, $3);
							c2++;
				}
			}
     ;
statement: ';'                                     
	| SWITCH  switch_expression  '{' BASE '}'    {printf("Switch is done \n");} 
	| expression ';' 	
	|VAR '=' GCD  NUM ',' NUM  ';'{
							if(findkey1($1)){
								int x;
								int i=1;
								    for(i=1; i <= $4 && i <= $6; ++i)
    								{
        								if($4%i==0 && $6%i==0)
           								  x=i;
    								}
								i =findkey2($1);
								if (i==0){
									copy(&second[c2], $1, x);
									c2++;
								}
								else
								{
									int tt=findkey1($1);
									second[tt].n = x;
								}
								printf("\nThe gcd of %d and %d is : %d\t\n",$4,$6,x);
							}
							else {
								printf("%s is not declared\n",$1);
							}
	}
	|VAR '=' LCM  NUM ',' NUM  ';'{
							if(findkey1($1)){
								int x;
								int i=1;
								    for(i=1; i <= $4 && i <= $6; ++i)
    								{
        								if($4%i==0 && $6%i==0)
           								  x=i;
    								}
    								x=($4*$6)/x;
								i =findkey2($1);
								if (i==0){
									copy(&second[c2], $1, x);
									c2++;
								}
								else
								{
									int tt=findkey1($1);
									second[tt].n = x;
								}
								printf("\nThe lcm of %d and %d is : %d\t\n",$4,$6,x);
							}
							else {
								printf("%s not declared yet\n",$1);
							}
	}
	|VAR '=' SQUARE  NUM  ';'{
							if(findkey1($1)){
								int x;
								int i=1;
								x=$4*$4;
								i =findkey2($1);
								if (i==0){
									copy(&second[c2], $1, x);
									c2++;
								}
								else
								{
									int tt=findkey1($1);
									second[tt].n = x;
								}
								printf("\nThe square of %d  is : %d\t\n",$4,x);
							}
							else {
								printf("%s not declared yet\n",$1);
							}
	}
	|VAR '=' MAX  NUM ',' NUM ';'{
							if(findkey1($1)){
								int x;
								int i=1;
								if($4>=$6)
									x=$4;
								else
									x=$6;
								i =findkey2($1);
								if (i==0){
									copy(&second[c2], $1, x);
									c2++;
								}
								else
								{
									int tt=findkey1($1);
									second[tt].n = x;
								}
								printf("\nThe maximum of %d and %d is : %d\t\n",$4,$6,x);
							}
							else {
								printf("%s not declared yet\n",$1);
							}
	}
	|VAR '=' MIN  NUM ',' NUM ';'{
							if(findkey1($1)){
								int x;
								int i=1;
								if($4<=$6)
									x=$4;
								else
									x=$6;
								i =findkey2($1);
								if (i==0){
									copy(&second[c2], $1, x);
									c2++;
								}
								else
								{
									int tt=findkey1($1);
									second[tt].n = x;
								}
								printf("\nThe minimum of %d and %d is : %d\t\n",$4,$6,x);
							}
							else {
								printf("%s not declared yet\n",$1);
							}
	}
    | VAR '=' expression ';' 		{
							if(findkey1($1)){
								int i =findkey2($1);
								if (i==0){
									copy(&second[c2], $1, $3);
									c2++;
								}
								else
								{
									int tt=findkey1($1);
									second[tt].n = $3;
								}
								printf("\nValue of the variable %s=: %d\t\n",$1,$3);
							}
							else {
								printf("%s not declared yet\n",$1);
							}
							
						}

	| IF  expression  '{' expression ';' '}' %prec IFX {
								if($2)
								{
									printf("\nvalue of expression in IF: %d\n",($4));
								}
								else
								{
									printf("\ncondition value is false\n");
								}
							}

	| IF  expression  '{' expression ';' '}' ELSE '{' expression ';' '}' {
								 	if($2)
									{
										printf("\nvalue of expression in IF: %d\n",$4);
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",$9);
									}
								   }
	
	| IF  expression  '{' expression ';' '}' ELIF  expression  '{' expression ';' '}' ELSE '{' expression ';' '}' {
								 	if($2)
									{
										printf("\nvalue of expression in IF: %d\n",$4);
									}
									else if($8)
									{
										printf("\nvalue of expression in ELIF: %d\n",$10);
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",$15);
									}
								   }							   
	| FOR '(' NUM ',' NUM ',' NUM ')' '{'  '}'     {
	   int i=0;
	   for(i=$3;i<=$5;i=i+$7){
	  	 printf("inside for loop counting %d\n",i);
	   }
		printf("\nFor loop is Done\n");
	}
	| WHILE '(' NUM ')' '{'  '}'   {
										int i=0;
										for(i=$3;i>0;i--)
										{
											printf("inside while loop counting %d\n",i);
										}
										printf("\nWhile loop is Done\n");
	}
	| FUNCTION TYPE '(' NUM ',' NUM')' 			{
				printf("Function Declared\n");
				printf("Return value is = %d\n",$4+$6);
		}
	;
	
	BASE : Bas   
			| Bas Dflt 
				 ;

			Bas   : 
				 | Bas Cs     
				 ;

			Cs    : NUM COL expression ';'   {
						
						if(ans==$1){
							  temp=1;
							  printf("\nCase No : %d  and Result :  %d\n",$1,$3);
						}
						
					}
				 ;

			Dflt    : DEFAULT COL expression ';'    {
						if(temp!=1){
							printf("\nResult in default Value is :  %d\n",$3);
						}
						temp=0;
					}
				 ;    
	
	
expression: NUM				{ $$ = $1; 	}

	| VAR				{ $$ = findkey2($1); printf("Variable value var %s : %d",$1,$$)}

	| expression '+' expression	{ $$ = $1 + $3; }

	| expression '-' expression	{ $$ = $1 - $3; }

	| expression '*' expression	{ $$ = $1 * $3; }

	| expression '/' expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	}
	| POWER expression ',' expression { 
		$$ = pow($2,$4); 
		printf("\nPower of %d to %d is %d\n",$2,$4,$$);
	}

	| SQUARE expression {
				$$=$2*$2;
				printf("square of %d is %d\n",$2,$$);
	}
	| SQUAREROOT expression {
				$$=sqrt($2);
				printf("squareroot of %d is %d\n",$2,$$);
	}
	| ABS expression {
				if($2<0)
					$$=($2)*(-1);
				else
					$$=$2;
				printf("Absolute value of %d is %d\n",$2,$$);
	}

	| FACTORIAL expression {
						int mult=1 ,i;
						for(i=$2;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult;
						printf("\nFactorial of %d is %d\n",$2,$$);
					 }

	| expression LESS expression	{ $$ = $1 < $3; }

	| expression GREAT expression	{ $$ = $1 > $3; }

	| '(' expression ')'		{ $$ = $2;	}
	
	|  expression  INC       { $$=$1+1; printf("inc: %d\n",$$);}

	|  expression  DEC     { $$=$1-1; printf("dec: %d\n",$$);}

	|  expression  NOT{
						if($1 != 0)
						{
							$$ = 0; printf("negative: %d\n",$$);
						}
						else{
							$$ = 1 ; printf("positive: %d\n",$$);
						}
					}
	;


switch_expression: NUM				{ $$ = $1; ans = $$; printf("\none")}

	| VAR				{ $$ = findkey2($1); ans = $$;}

	;
%%

void copy(struct st *ss, char *s, int n)
{
  ss.str = s;
  ss.n = n;
}

int findkey1(char *key)
{
    int i = 1;
    char *name = first[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return i;
        name = first[++i].str;
    }
    return 0;
}

int findkey2(char *key)
{
    int i = 1;
    char *name = second[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return second[i].n;
        name = second[++i].str;
    }
    return 0;
}


int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}

