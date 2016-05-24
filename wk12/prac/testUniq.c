#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

void printList(list l) {
    link curr = l->head;
    while (curr != NULL) {
        printf("%d->", curr->value);
        curr = curr->next;
    }
    printf("X\n");
}

int main(int argc, char *argv[]) {
    // initialise list
    list l1 = malloc(sizeof(struct _list));
    assert(l1 != NULL);
    l1->head = NULL;

    link curr;
    printf("Testing empty list...\n");
    uniqList(l1);
    printf("Your list: "); printList(l1);
    assert(l1->head == NULL);
    printf("OK\n\n");

    node n1;
    n1.value = 1;
    n1.next = NULL;
    l1->head = &n1;
    printf("Testing 1->X...\n");
    uniqList(l1);
    printf("Your list: "); printList(l1);
    assert(l1->head == &n1);
    assert(l1->head->value == 1);
    assert(l1->head->next == NULL);
    printf("OK\n\n");

    node n2;
    n2.value = 1;
    n1.next = &n2;
    n2.next = NULL;
    printf("Testing 1->1->X...\n");
    uniqList(l1);
    printf("Your list: "); printList(l1);
    assert(l1->head == &n1);
    assert(l1->head->value == 1);
    assert(l1->head->next == NULL);
    printf("OK\n\n");

    node n3, n4;
    n2.value = 1;
    n3.value = 1;
    n4.value = 1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;
    printf("Testing 1->1->1->1->X...\n");
    uniqList(l1);
    printf("Your list: "); printList(l1);
    assert(l1->head == &n1);
    assert(l1->head->value == 1);
    assert(l1->head->next == NULL);
    printf("OK\n\n");

    node n5, n6, n7, n8;
    n2.value = 2;
    n3.value = 2;
    n4.value = 3;
    n5.value = 3;
    n6.value = 3;
    n7.value = 5;
    n8.value = 4;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = &n7;
    n7.next = &n8;
    n8.next = NULL;
    printf("Testing 1->2->2->3->3->3->5->4->X...\n");
    uniqList(l1);
    printf("Your list: "); printList(l1);
    curr = l1->head; assert(curr->value == 1);
    curr = curr->next; assert(curr->value == 2);
    curr = curr->next; assert(curr->value == 3);
    curr = curr->next; assert(curr->value == 5);
    curr = curr->next; assert(curr->value == 4);
    curr = curr->next; assert(curr == NULL);
    printf("OK\n\n");

    n1.value = 8;
    n2.value = 8;
    n3.value = 2;
    n4.value = 8;
    n5.value = 8;
    n6.value = 4;
    n7.value = 4;
    n8.value = 4;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = &n7;
    n7.next = &n8;
    n8.next = NULL;
    printf("Testing 8->8->2->8->8->4->4->4->X...\n");
    uniqList(l1);
    printf("Your list: "); printList(l1);
    curr = l1->head; assert(curr->value == 8);
    curr = curr->next; assert(curr->value == 2);
    curr = curr->next; assert(curr->value == 8);
    curr = curr->next; assert(curr->value == 4);
    curr = curr->next; assert(curr == NULL);
    printf("OK\n\n");

    n1.value = 7;
    n2.value = 3;
    n3.value = 2;
    n4.value = 8;
    n5.value = 0;
    n6.value = 1;
    n7.value = 0;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = &n7;
    n7.next = NULL;
    printf("Testing 7->3->2->8->0->1->0->X...\n");
    uniqList(l1);
    printf("Your list: "); printList(l1);
    curr = l1->head; assert(curr->value == 7);
    curr = curr->next; assert(curr->value == 3);
    curr = curr->next; assert(curr->value == 2);
    curr = curr->next; assert(curr->value == 8);
    curr = curr->next; assert(curr->value == 0);
    curr = curr->next; assert(curr->value == 1);
    curr = curr->next; assert(curr->value == 0);
    curr = curr->next; assert(curr == NULL);
    printf("OK\n\n");
    free(l1);

    printf("All tests passed. Asian father approves.\n");
    return EXIT_SUCCESS;
}
