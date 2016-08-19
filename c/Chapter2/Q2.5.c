#include <stdlib.h>
#include "Chapter2.h"

int circularList(node* list) {
    node* walker = list;
    node* runner = list;
    while (runner != NULL) {
        walker = walker->next;
        runner = runner->next->next;
        if (walker == runner) break;
    }
    if (runner == NULL) return 0;
    walker = list;
    while (walker != runner) {
        walker = walker->next;
        runner = runner->next;
    }
    return runner->d;
}