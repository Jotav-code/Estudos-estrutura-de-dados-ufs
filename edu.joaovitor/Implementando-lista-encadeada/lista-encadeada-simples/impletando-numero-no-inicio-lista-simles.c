#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
typedef struct node{
    uint32_t data;

    struct node* next;
} node;

void novoNumero(node** head, uint32_t valor){

    node* novo = (node*)malloc(sizeof(node));

    if(!novo){
        printf("memoria não alocada");
    }
    novo -> data = valor;
    novo -> next = *head;
    *head = novo;


}

void imprimir(node* head){
    node* corrente = head;
    while(corrente != NULL){
        printf("%d -> ", corrente -> data);
        corrente = corrente -> next;
    }
}

void main(){

    node* head = NULL;

    novoNumero(&head,20);
    novoNumero(&head,22);
    novoNumero(&head,30);

    imprimir(head);

    free(head);
    head = NULL;


}
