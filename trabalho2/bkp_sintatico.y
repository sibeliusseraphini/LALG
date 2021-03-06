%{

extern "C"
{
	int yyparse(void);
	int yylex(void);  
	int yywrap()
	{
		return 1;
	}
}


%}

%union YYSTYPE {
	int i_number;
	float r_number;
	char* name;
	struct snode {
		int i_value;
		float f_value;
		int type;
	} snode;
	char math_op;
}

/* Token utilizado para verificar fim de arquivo */
%token T_EOF

%token T_PROGRAM 	"program"
%token T_BEGIN 		"begin"
%token T_END 		"end"
%token T_VAR 		"var"
%token T_CONST 		"const"
%token T_REAL 		"real"
%token T_INTEGER 	"integer"
%token T_PROCEDURE 	"procedure"	
%token T_READ 		"read"
%token T_WRITE 		"write"
%token T_WHILE 		"while"
%token T_IF 		"if"
%token T_THEN 		"then"
%token T_ELSE 		"else"
%token T_FOR 		"for"
%token T_TO 		"to"
%token T_DO 		"do"
%token T_EQUAL 		"="
%token T_DIFF 		"<>"
%token T_GREATER_EQ 	">="
%token T_LESSER_EQ 	"<="
%token T_GREATER 	">"
%token T_LESSER 	"<"
%token T_PLUS 		"+"
%token T_MINUS 		"-"
%token T_TIMES 		"*" 		
%token T_DIVISION 	"/"
%token T_ASSIGN 	":="
%token T_SEMICOLON 	";"
%token T_COLON 		":"
%token T_L_PAREN 	"("
%token T_R_PAREN 	")"
%token T_COMMA 		","
%token T_DOT 		"."

/* Tokens para erros */
%token ERR_MF_INTEGER /* Número inteiro mal formado */
%token ERR_MF_REAL /* Número real mal formado */
%token ERR_MF_ID /* Identificador mal formado */
%token ERR_LONG_ID /* Identificador muito longo */
%token ERR_COMMENT /* Comentário não fechado */
%token ERR_UNKNOWN /* Simbolo não pertence a linguagem */      

%token<name> T_ID "identificador"
%token<i_number> T_INUMBER "numero inteiro"
%token<r_number> T_RNUMBER "numero real"

%right T_THEN T_ELSE // Mesma precedencia, porém shift ganha

%%

/* Regra 1 <programa> ::= program ident ; <corpo> . */
programa : T_PROGRAM programa1
    | error T_SEMICOLON { yyerrok; printf("Erro sintatico: esperado 'program', encontrado %d\n", yychar); } corpo programa3
    | error T_DOT { yyerrok; printf("Erro sintatico: esperado 'program', encontrado %d\n", yychar); }
    ;

programa1 : T_ID {} programa2
    | error T_SEMICOLON { yyerrok; printf("Erro sintatico: esperado 'id', encontrado %d\n", yychar); } corpo programa3
    | error T_DOT { yyerrok; printf("Erro sintatico: esperado 'id', encontrado %d\n", yychar); }
    ;
    
programa2 : T_SEMICOLON corpo programa3
    | error T_DOT { yyerrok; printf("Erro sintatico: esperado ';', encontrado %d\n", yychar); }
    ;
    
programa3 : T_DOT
    | error { yyerrok; printf("Erro sintatico: esperado '.', encontrado %d\n", yychar); }
    ;

/* Regra 2 <corpo> ::= <dc> begin <comandos> end */
corpo : dc T_BEGIN comandos corpo1
    | dc error T_END { yyerrok; printf("Erro sintatico: esperado 'begin', encontrado %d\n", yychar); }
    ;
    
corpo1 : T_END
    ;
    
/* Regra 3 <dc> ::= <dc_c> <dc_v> <dc_p> */
dc : dc_c dc_v dc_p
    ;

/* Regra 4 <dc_c> ::= const ident = <numero> ; <dc_c> | lambda */
dc_c : dc_c0 dc_c
    |
    ;

dc_c0 : T_CONST {} T_ID dc_c1 {}
    | T_CONST error T_EQUAL { yyerrok; printf("Erro sintatico: esperado 'id', encontrado %d\n", yychar); } numero T_SEMICOLON
    | T_CONST error T_SEMICOLON { yyerrok; printf("Erro sintatico: esperado 'id', encontrado %d\n", yychar); }
    ;

dc_c1 : T_EQUAL dc_c2 {}
    | error T_SEMICOLON { yyerrok; printf("Erro sintatico: esperado '=', encontrado %d\n", yychar); }
    ;
    
dc_c2 : numero dc_c3 {}
    | error T_SEMICOLON { yyerrok; printf("Erro sintatico: esperado 'numero', encontrado %d\n", yychar); }
    ;
    
dc_c3 : T_SEMICOLON
    | error { yyerrok; printf("Erro sintatico: esperado ';', encontrado %d\n", yychar); }
    ;

/* Regra 5 <dc_v> ::= var <variaveis> : <tipo_var> ; <dc_v> | lambda */
dc_v : dc_v0 dc_v
    |
    ;

dc_v0 : T_VAR variaveis {} T_COLON tipo_var dc_v1 {}
    | T_VAR variaveis error T_SEMICOLON { yyerrok; printf("Erro sintatico: esperado ':', encontrado %d\n", yychar); }
    ;
    
dc_v1 : T_SEMICOLON
    | error { yyerrok; printf("Erro sintatico: esperado ';', encontrado %d\n", yychar); }
    ;

/* Regra 6 <tipo_var> ::= real | integer */
tipo_var : T_REAL {}
    | T_INTEGER {}
    | error { yyerrok; printf("Erro sintatico: esperado 'tipo', encontrado %d\n", yychar); }
    ;

/* Regra 7 <variaveis> ::= ident <mais_var> */
variaveis : T_ID mais_var {}
    | error { yyclearin; yyerrok; printf("Erro sintatico: esperado 'id', encontrado %d\n", yychar); } mais_var {}
    ;

/* Regra 8 <mais_var> ::= , <variaveis> | lambda */
mais_var : T_COMMA variaveis {}
    | {}
    ;

/* Regra 9 <dc_p> ::= procedure ident <parametros> ; <corpo_p> <dc_p> | lambda */
dc_p : dc_p0 {} dc_p
    |
    ;

dc_p0 : T_PROCEDURE {} T_ID parametros {} dc_p1
    | T_PROCEDURE error T_SEMICOLON { yyclearin; yyerrok; printf("Erro sintatico: esperado 'id', encontrado %d\n", yychar); } corpo_p
    ;
   
dc_p1 : T_SEMICOLON corpo_p
    | error { yyclearin; yyerrok; printf("Erro sintatico: esperado ';', encontrado %d\n", yychar); } corpo_p
    ; 

/* Regra 10 <parametros> ::= ( <lista_par> ) | lambda */
parametros : T_L_PAREN lista_par T_R_PAREN {}
    | T_L_PAREN lista_par error { yyclearin; yyerrok; printf("Erro sintatico: esperado ')', encontrado %d\n", yychar); }
    | {}
    ;
    
/* Regra 11 <lista_par> ::= <variaveis> : <tipo_var> <mais_par> */
lista_par : variaveis T_COLON tipo_var mais_par {}
    ;

/* Regra 12 <mais_par> ::= ; <lista_par> | lambda */
mais_par : T_SEMICOLON lista_par {}
    | {}
    ;

/* Regra 13 <corpo_p> ::= <dc_loc> begin <comandos> end ; */
corpo_p : dc_loc T_BEGIN comandos corpo_p1
    | dc_loc error T_END { yyerrok; printf("Erro sintatico: esperado 'begin', encontrado %d\n", yychar); } corpo_p2
    | dc_loc error T_SEMICOLON { yyerrok; printf("Erro sintatico: esperado 'begin', encontrado %d\n", yychar); }
    ;
    
corpo_p1 : T_END corpo_p2
    | error T_SEMICOLON { yyerrok; printf("Erro sintatico: esperado 'end', encontrado %d\n", yychar); }
    ;
    
corpo_p2 : T_SEMICOLON
    | error { yyerrok; printf("Erro sintatico: esperado ';', encontrado %d\n", yychar); }
    ;
    
/* Regra 14 <dc_loc> ::= <dc_v> */
dc_loc : dc_v
    ;

/* Regra 15 <lista_arg> ::= ( <argumentos> ) | lambda */
lista_arg : T_L_PAREN argumentos T_R_PAREN  {}
    | T_L_PAREN argumentos error { yyerrok; printf("Erro sintatico: esperado ')', encontrado %d\n", yychar); }
    | {}
    ;

/* Regra 16 <argumentos> ::= ident <mais_ident> */
argumentos : T_ID mais_ident {}
    | error { yyclearin; yyerrok; printf("Erro sintatico: esperado 'id', encontrado %d\n", yychar); } mais_ident {}
    ;
    
/* Regra 17 <mais_ident> ::= ; <argumentos> | lambda */
mais_ident : T_SEMICOLON argumentos {}
    | {}
    ;
    
/* Regra 18 <pfalsa> ::= else <cmd> | lambda */
pfalsa : T_ELSE {} cmd
    | /* empty */ 
    ;

/* Regra 19 <comandos> ::= <cmd> ; <comandos> | lambda */
comandos : cmd T_SEMICOLON comandos
    //| cmd error { yyerrok; printf("Erro sintatico: esperado ';', encontrado %d\n", yychar); } comandos
    //| error T_SEMICOLON { yyerrok; printf("Erro sintatico: esperado 'cmd', encontrado %d\n", yychar); } comandos
    | /* empty */ 
    ;

/* Regra 20 <cmd> ::= read(<variaveis>) | write (<variaveis>) | while(<condicao>) do <cmd> |
| if <condicao> then <cmd> <pfalsa> | ident := <expressao> | ident <lista_arg> | begin <comandos> end | for <ATR> TO <expressao> do <cmd> */
cmd : T_READ {} cmd_param {}
    | T_WRITE {} cmd_param {}
    | T_IF {} cmd_if
    | T_ID {} T_ASSIGN expressao {}
    | T_ID {} lista_arg {}
    | T_BEGIN cmd_begin
    | T_WHILE {} cmd_while
    | T_FOR {} T_ID {} T_ASSIGN expressao T_TO expressao T_DO cmd
    ;

cmd_param : T_L_PAREN variaveis T_R_PAREN {}
    ;

cmd_if : condicao T_THEN {} cmd pfalsa {}
    ;

cmd_begin : comandos T_END
    ;

cmd_while : condicao T_DO {} cmd {}
    ;

/* Regra 21 <condicao> ::= <expressao> <relacao> <expressao> */
condicao : expressao relacao expressao {}
    ;

/* Regra 22 <relacao> ::= = | <> | >= | <= | > | < */
relacao : T_EQUAL {}
    | T_DIFF {}
    | T_GREATER_EQ {}
    | T_LESSER_EQ {}
    | T_GREATER {}
    | T_LESSER {}
    | error { yyerrok; printf("Erro sintatico: esperado 'sinal de relacao', encontrado %d\n", yychar); }
    ;
    
/* Regra 23 <expressao> ::= <termo> <outros_termos> */
expressao : termo outros_termos {}
    ;

/* Regra 24 <op_un> ::= + | - | lambda */
op_un : T_PLUS {}
    | T_MINUS {}
    | {}
    ;

/* Regra 25 <outros_termos> ::= <op_ad> <termo> <outros_termos> | lambda */
outros_termos : op_ad termo outros_termos {}
    | {}
    ;

/* Regra 26 <op_ad> ::= + | - */
op_ad : T_PLUS {}
    | T_MINUS {}
    ;

/* Regra 27 <termo> ::= <op_un> <fator> <mais_fatores> */
termo : op_un fator mais_fatores {}
    ;
    
/* Regra 28 <mais_fatores> ::= <op_mul> <fator> <mais_fatores> | lambda */
mais_fatores : op_mul fator mais_fatores {}
    | {}
    ;    

/* Regra 29 <op_mul> ::= * | / */
op_mul : T_TIMES {}
    | T_DIVISION {}
    ;

/* Regra 30 <fator> ::= ident | <numero> | ( <expressao> ) */
fator : T_ID {}
    | numero {}
    | T_L_PAREN fator_exp {}
    | error { yyclearin; yyerrok; printf("Erro sintatico: esperado 'sinal de relacao', encontrado %d\n", yychar); }
    ;

fator_exp
    : expressao T_R_PAREN {}
    | expressao error { yyerrok; printf("Erro sintatico: esperado ')', encontrado %d\n", yychar); }
    ;
    
/* Regra 31 <numero> ::= numero_int | numero_real */
numero : T_INUMBER {}
    | T_RNUMBER {}
    ;
