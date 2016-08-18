#include <stdlib.h>
#include "Chapter2.h"

void removeNode(node* element) {
    if (element == NULL) return;
    element->d = element->next->d;
    node* deletingElement = element->next;
    element->next = element->next->next;
    free(deletingElement);
}