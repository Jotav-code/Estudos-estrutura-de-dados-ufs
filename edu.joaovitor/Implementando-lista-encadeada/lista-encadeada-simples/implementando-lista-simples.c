#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

typedef struct node {
    int data;

    struct node* next;
} node;

void main (){

    node* head = NULL;
    node* second = NULL;
    node* third = NULL;

    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof(node));

    if(!head || !second || !third){
        printf("memoria não alocada");
    }
    head -> data = 10;
    head -> next = second;

    second -> data = 22;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;

    node* corrente = head;

    while(corrente != NULL){
        printf("_%d_", corrente->data);
        corrente = corrente -> next;
    }
}
