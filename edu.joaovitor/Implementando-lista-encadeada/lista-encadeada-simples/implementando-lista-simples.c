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
    node* syrup = NULL;

    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    syrup = (node*)malloc(sizeof(node));

    if(!head || !second || !syrup){
        printf("memoria não alocada");
    }
    head -> data = 10;
    head -> next = second;

    second -> data = 22;
    second -> next = syrup;

    syrup -> data = 30;
    syrup -> next = NULL;

    node* corrente = head;

    while(corrente != NULL){
        printf("_%d_", corrente->data);
        corrente = corrente -> next;
    }


    free(head);
    free(second);
    free(syrup);
    head = NULL;
    second = NULL;
    syrup = NULL;
}
