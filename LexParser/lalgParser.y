%token SIMB_PROGRAM SIMB_BEGIN SIMB_END SIMB_VAR SIMB_CONST SIMB_REAL SIMB_INTEGER SIMB_PROCEDURE SIMB_READ SIMB_WRITE SIMB_WHILE SIMB_IF SIMB_THEN SIMB_ELSE SIMB_FOR SIMB_RELATION SIMB_OP_ADD SIMB_OP_MUL SIMB_ASSIGN SIMB_PONTO_VIRGULA SIMB_DOIS_PONTOS SIMB_ABRE_PARENTESE SIMB_FECHA_PARENTESE SIMB_VIRGULA SIMB_PONTO SIMB_NUM_INTEIRO SIMB_NUM_REAL SIMB_ID 
%start statement

%%
statement:
	SIMB_PROGRAM {} |
	SIMB_BEGIN {} |
	SIMB_END {} |
	SIMB_VAR {} |
	SIMB_CONST {} |
	SIMB_REAL {} |
	SIMB_INTEGER {} |
	SIMB_PROCEDURE {} |
	SIMB_READ {} |
	SIMB_WRITE {} |
	SIMB_WHILE {} |
	SIMB_IF {} |
	SIMB_THEN {} |
	SIMB_ELSE {} |
    SIMB_FOR {} |
    SIMB_RELATION {} |
    SIMB_OP_ADD {} |
    SIMB_OP_MUL {} |
    SIMB_ASSIGN {} |
    SIMB_PONTO_VIRGULA {} |
    SIMB_DOIS_PONTOS {} |
    SIMB_ABRE_PARENTESE {} |
    SIMB_FECHA_PARENTESE {} |
    SIMB_VIRGULA {} |
    SIMB_PONTO {} |
    SIMB_NUM_INTEIRO {} |
    SIMB_NUM_REAL {} |
    SIMB_ID {} 
    ;

%%
#include <stdio.h>

extern FILE* yyin;

yyerror(char* s)
{
    fprintf(stderr, "%s\n", s);
}

int main()
{
    do { yyparse(); }
    while (!feof(yyin));
}
