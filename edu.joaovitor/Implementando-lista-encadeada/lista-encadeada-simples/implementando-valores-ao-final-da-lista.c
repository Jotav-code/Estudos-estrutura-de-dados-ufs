#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

typedef struct node{
    uint32_t idade;

    struct node* next;
}node;

void inserir(node** head, uint32_t valor){
    node* novo = (node*)malloc(sizeof(node));

    if(!novo){
        printf("memoria não alocada");
        return;
    }
    novo -> idade = valor;
    novo -> next = NULL;
    //caso a lista esteja vazia
    if(*head == NULL){
        *head = novo;
        return;
    }




    node* aux = *head;

    while(aux -> next != NULL){
        aux = aux -> next;
    }
    aux -> next = novo;



}

void liberar(node** head){

    node* aux = *head;
    node* temp = NULL;

    while(aux != NULL){
        temp = aux;
        aux = aux -> next;
        free(temp);

    }
}

void imprimir(node* head){

    node* aux = head;
    while(aux != NULL){
        printf("%d_", aux -> idade);
        aux = aux -> next;
    }
}

void main(){

    node* head = NULL;

    inserir(&head,20);
    inserir(&head,25);
    inserir(&head,40);

    imprimir(head);

    liberar(&head);
}
