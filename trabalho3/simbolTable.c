#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "simbolTable.h"

int size;
Node *head;

void init( ){
	size = 0;
	head = malloc( sizeof( Node ) );
	head->next = NULL;
}


Node* find( char* name ){
	
	Node *pointer = head->next;
	int index = 0;
	while( pointer != NULL ){

		if( strcmp( pointer->name , name ) ==0 )
			return pointer;

		index++;		
		pointer = pointer->next;
	}
	
	return NULL; 
}

int addIdent( char* name, int type ){
	
	//Verifica se o ident já existe
	if( find( name ) == NULL ){

		Node *new_node = malloc( sizeof( Node ) );
		new_node->type = type;
		new_node->name = strdup( name );	
		new_node->next = head->next;
		head->next = new_node;
		size++;

		return TRUE;
	}
	
	return FALSE;
	
}

int addVariables( ListaLigadaVar *variables, int type) {
    int errorAddIdent = FALSE;	/* se alguma variavel nao puder ser adicionada a flag e setada como true */
    
    /* Percorre a lista de variaveis e adiciona na tabela de simbolos */
    NoVar *paux = variables->inicio;                                                    
    while (paux != NULL) {
        if ( addIdent( paux->variable.name, type ) == FALSE ) {
        	printf("Erro semantico: identificador %s ja declarado\n", paux->variable.name );
			errorAddIdent = TRUE;
        }

        printf("%s - %d\n", paux->variable.name, paux->variable.type);
        paux = paux->proximo;
    }
    
    //se encontrou algum erro retorna false
 	return !errorAddIdent;   
}

void printSimbolTable(){
	Node *pointer = head->next;
	while( pointer != NULL ){
		printf("name: %s, i_value %d, f_value %f, type: %d, categoria %d \n", pointer->name, pointer->i_value, pointer->f_value, pointer->type, pointer->categoria );
		
		pointer = pointer->next;
	}	
}	
