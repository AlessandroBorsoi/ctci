#include <stdlib.h>
#include "Chapter2.h"

int nthToLast(node* list, int nth) {
    node* walker = list;
    int size = 0;
    while (walker != NULL) {
        size++;
        walker = walker->next;
    }
    for (int i = 1; i == size - nth; i++) 
        list = list->next;
    return list->d;
}