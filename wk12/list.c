#include <stdio.h>
#include <stdlib.h>
#include "list.h"

list zipList(list a, list b) {
    list new;
    if (a->head == NULL) {
        new = b;
    } else if (b->head == NULL) {
        new = a;
    } else {
        new = malloc(sizeof(struct _list));
        assert(new != NULL);
        new->head = a->head;

        link prev = a->head;
        link curr = b->head;
        link temp;

        while (curr != NULL) {
            temp = prev->next;
            prev->next = curr;

            prev = curr;
            curr = temp;
        }

        a->head = NULL;
        b->head = NULL;
    }

    return new;
}
