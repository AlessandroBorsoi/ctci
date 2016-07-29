#pragma once

typedef struct node_t {
    int d;
    struct node_t* next;
} node;

node* createList(int a[], int size);
void removeDuplicates(node** head);
int listCmp(node* listA, node* listB);
int nthToLast(node* list, int nth);