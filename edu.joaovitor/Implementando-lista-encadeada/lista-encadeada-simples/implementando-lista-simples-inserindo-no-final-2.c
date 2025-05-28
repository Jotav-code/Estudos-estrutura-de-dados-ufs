#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

typedef struct node{
    uint32_t data;

    struct node* next;
}node;

void inserirFinal(node** head, uint32_t valor){
    node* novo = (node*)malloc(sizeof(node));

    if(!novo){
        printf("memoria nao alocada");
    }
    novo -> data = valor;
    novo -> next = NULL;
    if(*head == NULL){
        *head = novo;
        return;
    }

    node* proximo = *head;
    while(proximo -> next != NULL){
        proximo = proximo -> next;
    }
    proximo -> next = novo;

}

void imprimirLista(node* head)
{
    node* atual = head;
    while(atual != NULL){
        printf("%d_", atual -> data);
        atual = atual -> next;
    }

}

void limparMemoria (node** head){

    node* proximo = *head;
    node* atual = NULL;

    while(proximo != NULL){
        atual = proximo;
        proximo = proximo -> next;
        free(atual);
    }
    *head = NULL;

}

int main ()
{
    node* head = NULL;
    inserirFinal(&head,20);
    inserirFinal(&head,20);
    inserirFinal(&head,20);
    inserirFinal(&head,20);

    imprimirLista(head);

    limparMemoria(&head);

    free(head);
    head = NULL;
    return 0;

}
