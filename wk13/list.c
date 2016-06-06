#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void partition(list sourceList) {
    link prev = NULL;
    link curr = sourceList->head;
    link temphead = NULL;
    link temptail = NULL;
    int key;
    if (curr != NULL) {
        key = curr->value;
        while (curr != NULL) {
            if (curr->value < key) {
                // "remove" the element
                prev->next = curr->next;
                // build a temporary linked list containing elements removed in order
                if (temptail == NULL) {
                    temphead = curr;
                    temptail = curr;
                } else {
                    temptail->next = curr;
                    temptail = temptail->next;
                }
            } else {
                prev = curr;
            }
            curr = curr->next;
        }
        // all items lower than key are now in temphead, which should be the new head
        if (temphead != NULL) {
            temptail->next = sourceList->head;
            sourceList->head = temphead;
        }
    }
}
