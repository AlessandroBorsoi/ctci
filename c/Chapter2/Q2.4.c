#include <stdlib.h>
#include "Chapter2.h"

node* sumList(node* listA, node* listB, int carry) {
    if (listA == NULL && listB == NULL) return NULL;
    node* newNode = (node*)malloc(sizeof(node));
    newNode->d = carry;
    if (listA != NULL) {
        newNode->d+= listA->d;
    }
    if (listB != NULL) {
        newNode->d+= listB->d;
    }
    if (newNode->d > 9) {
        carry = 1;
    } else {
        carry = 0;
    }
    newNode->d = newNode->d % 10;
    newNode->next = sumList(listA->next, listB->next, carry);    
    return newNode;
}