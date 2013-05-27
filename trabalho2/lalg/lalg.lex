/* 
 * LALG Lexical Analiser
 */

/*%option noyywrap*/

%{
	#define YYSTYPE double

	#include <stdio.h>
	#include <string.h>
	#include "lalg.tab.h"
	
	int num_lines = 1;
%}
%option yylineno

letter [a-zA-z]
digit [0-9]
nonblank [^ \t]
relation "="|"<>"|">="|"<="|">"|"<"
op_add "+"|"-"
op_mul "*"|"/"

seq_nao_numerica  [-!~]{-}[()/\*-+,:=.;:<>]
seq_nao_literal  [!-~]{-}[:<>;.=:,+\-*/()]

%%

"{"[^}\n}]*"}"	    {} /* Ignore the comments */ 
"{"[^}\n]*"\n"      {
	return ERR_COMMENT;  /* Error - Comment not closed */ 
}

[ \r\t]+          {} /* Eliminate white spaces */

\n { num_lines++; }	/* Count lines */

"program" { return T_PROGRAM;}			
"begin" { return T_BEGIN;}
"end" { return T_END; }		    
"var" { return T_VAR; }
"const" { return T_CONST; }		
"real" {return T_REAL;}		
"integer" { return T_INTEGER;}		
"procedure" { return T_PROCEDURE;}	
"read" {return T_READ;}		
"write" {return T_WRITE;}		
"while" {return T_WHILE;}		
"if" {return  T_IF;}		    
"then" {return T_THEN;}		
"else" {return T_ELSE;}		
"for" {return  T_FOR;}
"do" {return T_DO;}

"="  {
	return T_EQUAL;
}
"<>" {
	return T_DIFF;
}      
">=" {
	return T_GREATER_EQ;
}
"<=" {
	return T_LESSER_EQ;
} 
">"  {
	return T_GREATER;
}   
"<"  {
	return T_LESSER;
}    
"+"  {
	return T_PLUS;
}      
"-"  {
	return T_MINUS;
}     
"*"  {
	return T_TIMES;
}     
"/"  {
	return T_DIVISION;
}  
":=" {
	return T_ASSIGN;
}    
";"	 {
	return T_SEMICOLON;
} 
":"  {
	return T_COLON;
}     
"("	 {
	return T_L_PAREN;
}          
")"	 {
	return T_R_PAREN;
}          
","	 {
	return T_COMMA;
}     
"."	 {
	return T_DOT;
}       

{digit}+ {
	return T_INUMBER;
}
{digit}+"."{digit}+	{
	return T_RNUMBER;
}

{letter}+({letter}|{digit}){50,}			{	
	return ERR_LONG_ID;
}
{letter}+({letter}|{digit})* {
	return T_ID; //checkReservedWord(yytext);
}


{digit}+{seq_nao_numerica}* { 
	return ERR_MF_INTEGER;
}

{digit}+{seq_nao_numerica}*"."{digit}+{seq_nao_numerica}* {
	return ERR_MF_REAL;
}

{letter}+{seq_nao_literal}* { 
	return(ERR_MF_ID);
}

.	{	
	return ERR_UNKNOWN;
}

%%

int yywrap(void){}
