#include <stdlib.h>
#include "Chapter1.h"

typedef struct {
    int i;
    int j;
} data;

typedef struct node_t {
    data d;
    struct node_t* next;
} node;

void rowZeros(int matrix[M][N], int i) {
    for (int j = 0; j < N; j++) {
        matrix[i][j] = 0;
    }
} 

void columnZeros(int matrix[M][N], int j) {
    for (int i = 0; i < M; i++) {
        matrix[i][j] = 0;
    }
} 

void matrixZeros(int matrix[M][N]) {
    node* head = NULL;
    node** doublePointer = &head;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] == 0) {
                node* element = (node*)malloc(sizeof(node));
                element->d.i = i;
                element->d.j = j;
                element->next = NULL;
                *doublePointer = element;
                doublePointer = &(*doublePointer)->next;
            }
        }
    }
    while (head != NULL) {
        rowZeros(matrix, head->d.i);
        columnZeros(matrix, head->d.j);
        head = head->next;
    }
}