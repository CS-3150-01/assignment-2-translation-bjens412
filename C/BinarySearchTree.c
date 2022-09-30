#include <stdio.h>
#include <stdlib.h>

typedef struct Node{

    int data;
    struct Node *left;
    struct Node *right;

}NODE;

 NODE* newNode(int d){
   NODE* result = malloc(sizeof(NODE));
   if(result != NULL){
    result -> data = d;
    result -> left = NULL;
    result -> right = NULL;
   }
   return result;
}


NODE* root;

void BinarySearchTree(){
    root = NULL;
}

int factorial(int num){
    int fact = 1;
    if (num == 0){
        return 1;
    }
    else {
        while (num > 1){
            fact = fact * num;
            num--;
        }
        return fact;
    }
}

int numOfBST(int key){
    int catalanNumber = factorial(2 * key)/(factorial(key + 1) * factorial(key));
    return catalanNumber;
}



int main() {

    printf("Total number of possible Binary Trees with given key: %i. \n", numOfBST(5));
    return 0;
}