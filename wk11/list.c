#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0

typedef struct _node *link; 
typedef struct _node { 
    int value; 
    link next; 
} node;

typedef struct _list *list;
struct _list { 
    link first; 
};

list createList(void) {
    list newList = malloc(sizeof(struct _list));
    assert(newList != NULL);
    newList->first = NULL;

    return newList;
}

void insert(list l, int value) {
    link newLink = malloc(sizeof(struct _node));
    assert(newLink != NULL);
    newLink->value = value;
    newLink->next = l->first;
    l->first = newLink;
}

void printList(list l) {
    link curr = l->first;
    while (curr != NULL) {
        printf("%d->", curr->value);
        curr = curr->next;
    }
    printf("X\n");
}

int length(list l) {
    int counter = 0;
    link curr = l->first;
    while (curr != NULL) {
        counter++;
        curr = curr->next;
    }
    return counter;
}

int areEqual(list l1, list l2) {
    link curr1 = l1->first;
    link curr2 = l2->first;
    int retVal = TRUE;
    while (curr1 != NULL && curr2 != NULL && retVal == TRUE) {
        if (curr1->value != curr2->value) {
            retVal = FALSE;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return retVal;
}

list copy(list l) {
    list newList = malloc(sizeof(struct _list));
    assert(newList != NULL);
    newList->first = l->first;

    link oldCurr = l->first;
    link newCurr = NULL;
    link newPrev = NULL;
    while (oldCurr != NULL) {
        newCurr = malloc(sizeof(struct _node));
        assert(newCurr != NULL);

        newCurr->value = oldCurr->value;
        newCurr->next = NULL;
        if (newPrev != NULL) {
            newPrev->next = newCurr;
        }
        newPrev = newCurr;
        oldCurr = oldCurr->next;
    }
    return newList;
}

void minToFront(list l) {
    // find the min!
    link minPrev = NULL;
    link minNode = l->first; // node containing min value
    link prev = NULL;
    link curr = l->first; // loop variable

    while (curr != NULL) {
        if (curr->value < minNode->value) {
            minPrev = prev;
            minNode = curr;
        }
        prev = curr;
        curr = curr->next;
    }

    // shift prev first
    minPrev->next = minNode->next;
    // then update minnode
    minNode->next = l->first;
    l->first = minNode;
}

int main(int argc, char *argv[]) {
    list l1 = createList();
    insert(l1, 5);
    insert(l1, 7);
    insert(l1, 5);
    insert(l1, 9);
    insert(l1, 4);
    printf("l1: "); printList(l1);
    //printf("size of list 1: %d\n", length(l1));
    assert(length(l1) == 5);

    list l2 = copy(l1);
    printf("l2: "); printList(l2);
    //printf("size of list 2: %d\n", length(l2));
    assert(length(l2) == 5);

    assert(areEqual(l1, l2) == TRUE);

    return EXIT_SUCCESS;
}
