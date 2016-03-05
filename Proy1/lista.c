#include "lista.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

identificador* CrearListaU(identificador *id){
    id = (identificador *)malloc(sizeof(identificador));
    id-> inicio = NULL;
    id-> fin = NULL;
    id-> tam = 0; 
    return id;
}

void AgregarUsuario(identificador *id, char *nombre){
    lista *temp;
    temp = (lista *)malloc(sizeof(lista));
    temp->nombre = (char *)malloc(sizeof(nombre));
    temp->nombre = nombre;
    temp->next = NULL;

    if(id->tam == 0){
        id->inicio = (lista *)malloc(sizeof(lista));
        id->inicio = temp;
        id->fin = temp;
	}
    else{
        temp->next = (lista *)malloc(sizeof(lista));
        temp->next = id->inicio;
        id->inicio = temp;
	}

    id->tam++;
}

void ImprimirUsuarios(identificador *id){
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

void EliminarUsuario(identificador *id, char *nombre){
    lista *temp;
    temp = (lista *)malloc(sizeof(lista));
    temp = id->inicio;
    lista *temp_ant;
    temp_ant = (lista *)malloc(sizeof(lista));
    int i = 1;
    while(i <= id->tam ){
        if(temp->nombre == nombre){
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

identificador_chat* CrearListaChat(identificador_chat *id){
    id = (identificador_chat *)malloc(sizeof(identificador_chat));
    id-> inicio = NULL;
    id-> fin = NULL;
    id-> tam = 0; 
    return id;
}

void AgregarChat(identificador_chat *id, char *nombre){

    lista_chat *temp;
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

void ImprimirChat(identificador_chat *id){
    lista_chat *temp;
    temp = (lista_chat *)malloc(sizeof(lista_chat));
    temp = id->inicio;
    int i = 1;
    while(i <= id->tam){
        printf("soy el elemento %d y mi dato es %s \n", i, temp->nombre);
    temp=temp->next;
        i++;
    }
}

void EliminarChat(identificador_chat *id, char *nombre){
	lista_chat *temp;
	temp = (lista_chat *)malloc(sizeof(lista_chat));
	temp = id->inicio;
	lista_chat *temp_ant;
	temp_ant = (lista_chat *)malloc(sizeof(lista_chat));
	int i = 1;
	while(i <= id->tam ){
		if(temp->nombre == nombre){
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

int main(){
    identificador *id;
    id = CrearListaU(id);
    char *u1 = "francisco";
    char *u2 = "manuel";
    AgregarUsuario(id, u1);
    AgregarUsuario(id, u2);
    ImprimirUsuarios(id);
    EliminarUsuario(id,u1);
    ImprimirUsuarios(id);
    getchar();
    

    return 0;
}
