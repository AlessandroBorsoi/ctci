#include <stdlib.h>
#include "Chapter2.h"

#define EQUAL 0
#define NOT_EQUAL 1

node* createList(int a[], int size) {
    node* list = NULL;
    node** doublePointer = &list;
    for (int i = 0; i < size; i++) {
        node* newNode = (node*)malloc(sizeof(node));
        newNode->d = a[i];
        newNode->next = NULL;
        *doublePointer = newNode;
        doublePointer = &(*doublePointer)->next;
    }
    return list;
}
/*

[w1]      [w2]
 |         |
 V         V
[h] -> [1][n] -> [8][n] -> [3][n] -> [1][n] -> [5][n] -> [7][n] -> [7][n] -> NULL

*/
void removeDuplicates(node** head) {
    node** walker1 = head;
    while (*walker1 != NULL && (*walker1)->next != NULL) {
        node** walker2 = walker1;
        while ((*walker2)->next != NULL) {
            if ((*walker1)->d == (*walker2)->next->d) {
                node* deletingNode = (*walker2)->next;
                (*walker2)->next = (*walker2)->next->next;
                free(deletingNode);
            } else {
                walker2 = &(*walker2)->next;
            }
        }
        walker1 = &(*walker1)->next;
    }
}

int listCmp(node* listA, node* listB) {
    while (listA != NULL && listB != NULL) {
        if (listA->d != listB->d) return NOT_EQUAL;
        listA = listA->next;
        listB = listB->next;
    }
    if ((listA != NULL && listB == NULL) ||
        (listA == NULL && listB != NULL))
        return NOT_EQUAL;
    return EQUAL;
}