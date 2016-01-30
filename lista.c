#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

void CrearLista(identificador *id){
	id = (identificador *)malloc(sizeof(identificador));
	id-> inicio = NULL;
	id-> fin = NULL;
	id-> tam = 0; 
}

void Agregar(identificador *id, char *nombre){

	lista *temp;
	temp = (lista *)malloc(sizeof(lista));
	temp->nombre = (char *)malloc(sizeof(nombre));
	temp->next = NULL;

	if(id->tam == 0){
		id->inicio = temp;
		id->fin = temp;
	}
	else{
		temp->next = id->inicio;
		id->inicio = temp;
	}

	id->tam++;
}

void Imprimir(identificador *id){
	lista *temp;
	temp = (lista *)malloc(sizeof(lista));
	temp = id->inicio;
	int i = 1;
	while(i <= id->tam){
		printf("soy el elemento %d y mi dato es %s \n", i, temp->nombre);
		temp=temp->next;
		i++;
	}
}

void Eliminar(identificador *id, char *nombre){
	lista *temp;
	temp = (lista *)malloc(sizeof(lista));
	temp = id->inicio;
	lista *temp_ant;
	temp_ant = (lista *)malloc(sizeof(lista));
	int i = 1;
	while(i <= id->tam ){
		if(temp->nombre == d){
			if(i == 1 && i != id->tam ){
				id->inicio= temp->next;
			}
			else if(i == id->tam && i == 1){
				id->inicio = NULL;
				id->fin = NULL;
			}
			else if(i == id->tam && i > 1){
				id->fin = temp_ant;
			}
			else{
				temp_ant->next = temp->next;
			}
			id->tam--;
		}
		i++;
		temp_ant = temp;
		temp = temp->next;
	}
}

void CrearLista(identificador_chat *id){
	id = (identificador_chat *)malloc(sizeof(identificador_chat));
	id-> inicio = NULL;
	id-> fin = NULL;
	id-> tam = 0; 
}

void Agregar(identificador_chat *id, char *nombre){

	lista *temp;
	temp = (lista_chat *)malloc(sizeof(lista_chat));
	temp->nombre = (char *)malloc(sizeof(nombre));
	temp->next = NULL;

	if(id->tam == 0){
		id->inicio = temp;
		id->fin = temp;
	}
	else{
		temp->next = id->inicio;
		id->inicio = temp;
	}

	id->tam++;
}

void Imprimir(identificador_chat *id){
	lista *temp;
	temp = (lista_chat *)malloc(sizeof(lista_chat));
	temp = id->inicio;
	int i = 1;
	while(i <= id->tam){
		printf("soy el elemento %d y mi dato es %s \n", i, temp->nombre);
		temp=temp->next;
		i++;
	}
}

void Eliminar(identificador_chat *id, int d){
	lista *temp;
	temp = (lista_chat *)malloc(sizeof(lista_chat));
	temp = id->inicio;
	lista *temp_ant;
	temp_ant = (lista_chat *)malloc(sizeof(lista_chat));
	int i = 1;
	while(i <= id->tam ){
		if(temp->nombre == d){
			if(i == 1 && i != id->tam ){
				id->inicio= temp->next;
			}
			else if(i == id->tam && i == 1){
				id->inicio = NULL;
				id->fin = NULL;
			}
			else if(i == id->tam && i > 1){
				id->fin = temp_ant;
			}
			else{
				temp_ant->next = temp->next;
			}
			id->tam--;
		}
		i++;
		temp_ant = temp;
		temp = temp->next;
	}
}
