#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}NODE;

NODE* newNode(int d){
    NODE* result = malloc(sizeof(NODE));
    if (result != NULL){
        result -> data = d;
        result -> next = NULL;
    }

    return result;
}

NODE* head;
NODE* tail;

void addNode(int d){
    NODE* babyNode = newNode(d);

    if(head == NULL){
        head = babyNode;
        tail = babyNode;
    }
    else{
        tail -> next = babyNode;
        tail = babyNode;
    }
}

void display(){
    NODE* current = head;

    if(head == NULL){
        printf("List is empty");
        return;
    }
    printf("Nodes of singly linked list: ");
    while(current != NULL){
        printf("%i \n", current -> data);
        current = current -> next;
    }
    printf("\n");
}

int main() {

    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    
    display();
    return 0;
}