/*
 * COMP1917 16s1
 * testList.c - Linked list testing/user file
 * Jesse Zhang (tue09-kora)
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include "List.h"

#define NUM_RAND 10
#define TRUE 1
#define FALSE 0

int halfSplit(int size, int front) {
    int retVal;
    if (size % 2 == 0 || front == FALSE) {
        retVal = size / 2;
    } else {
        retVal = size / 2 + 1;
    }
    return retVal;
}

int main(int argc, char *argv[]) {
    int test_num[NUM_RAND];
    srand(time(NULL));

    int i = 0;
    while (i < NUM_RAND) {
        test_num[i] = rand() % 100;
        i++;
    }

    printf("Creating lists... ");
    List l1 = createList();
    assert(l1 != NULL);
    List l2 = createList();
    assert(l2 != NULL);
    List l3 = createList();
    assert(l3 != NULL);
    List e = createList();
    assert(e != NULL);
    List o = createList();
    assert(o != NULL);
    printf("OK.\n");

    printf("Checking lists are empty... ");
    assert(numItems(l1) == 0);
    assert(numItems(l2) == 0);
    assert(numItems(l3) == 0);
    assert(numItems(e) == 0);
    assert(numItems(o) == 0);
    printf("OK.\n\n");

    printf("Inserting %d items into list 1 at the head... ", NUM_RAND);
    i = 0;
    while (i < NUM_RAND) {
        insertList(l1, test_num[i]);
        i++;
    }
    assert(numItems(l1) == NUM_RAND);
    printf("OK.\n");

    printf("Manually compare your output with expected output below:\n");
    printf("Your output:     "); printList(l1);
    printf("Expected output: ");
    i = NUM_RAND - 1;
    while (i >= 0) {
        printf("%d->", test_num[i]);
        i--;
    }
    printf("X\n\n");

    printf("Inserting %d items into list 2 at the tail... ", NUM_RAND);
    i = 0;
    while (i < NUM_RAND) {
        insertListT(l2, test_num[i]);
        i++;
    }
    assert(numItems(l2) == NUM_RAND);
    printf("OK.\n");

    printf("Manually compare your output with expected output below:\n");
    printf("Your output:     "); printList(l2);
    printf("Expected output: ");
    i = 0;
    while (i < NUM_RAND) {
        printf("%d->", test_num[i]);
        i++;
    }
    printf("X\n\n");

    printf("Inserting %d items into list 3... ", NUM_RAND - 1);
    i = 0;
    while (i < NUM_RAND - 1) {
        insertListT(l3, test_num[i]);
        i++;
    }
    assert(numItems(l3) == NUM_RAND - 1);
    printf("OK.\n");

    printf("Manually compare your output with expected output below:\n");
    printf("Your output:     "); printList(l3);
    printf("Expected output: ");
    i = 0;
    while (i < NUM_RAND - 1) {
        printf("%d->", test_num[i]);
        i++;
    }
    printf("X\n\n");
    
    insertList(o, test_num[0]);

    printf("Testing frontBackSplit on empty list... \n");
    List fe = createList(); assert(fe != NULL);
    List be = createList(); assert(be != NULL);
    frontBackSplit(e, fe, be);
    printf("Checking all lists are empty... ");
    assert(numItems(e) == 0);
    assert(numItems(fe) == 0);
    assert(numItems(be) == 0);
    printf("OK.\n\n");
    destroyList(fe);
    destroyList(be);

    printf("Testing frontBackSplit on list with 1 element... \n");
    List fo = createList(); assert(fo != NULL);
    List bo = createList(); assert(bo != NULL);
    frontBackSplit(o, fo, bo);
    printf("Checking if source list is empty... ");
    assert(o != NULL);
    assert(numItems(o) == 0);
    printf("OK.\n");

    printf("Checking frontList correct size... ");
    assert(numItems(fo) == 1);
    printf("OK.\n");
    printf("Manually compare your frontList with expected output below:\n");
    printf("Your output:     "); printList(fo);
    printf("Expected output: %d->", test_num[0]);
    printf("X\n");

    printf("Checking backList correct size... ");
    assert(numItems(bo) == 0);
    printf("OK.\n");
    printf("Manually compare your backList with expected output below:\n");
    printf("Your output:     "); printList(bo);
    printf("Expected output: ");
    printf("X\n\n");
    destroyList(fo);
    destroyList(bo);

    printf("Testing frontBackSplit on list 1... \n");
    List f1 = createList(); assert(f1 != NULL);
    List b1 = createList(); assert(b1 != NULL);
    int oldsize = numItems(l1);
    frontBackSplit(l1, f1, b1);
    printf("Checking if source list is empty... ");
    assert(l1 != NULL);
    assert(numItems(l1) == 0);
    printf("OK.\n");

    printf("Checking frontList correct size... ");
    assert(numItems(f1) == halfSplit(oldsize, TRUE));
    printf("OK.\n");
    printf("Manually compare your frontList with expected output below:\n");
    printf("Your output:     "); printList(f1);
    printf("Expected output: ");
    i = NUM_RAND - 1;
    while (i >= NUM_RAND / 2) {
        printf("%d->", test_num[i]);
        i--;
    }
    printf("X\n");

    printf("Checking backList correct size... ");
    assert(numItems(b1) == halfSplit(oldsize, FALSE));
    printf("OK.\n");
    printf("Manually compare your backList with expected output below:\n");
    printf("Your output:     "); printList(b1);
    printf("Expected output: ");
    i = NUM_RAND / 2 - 1;
    while (i >= 0) {
        printf("%d->", test_num[i]);
        i--;
    }
    printf("X\n\n");
    destroyList(f1);
    destroyList(b1);

    printf("Testing frontBackSplit on list 3... \n");
    List f3 = createList(); assert(f3 != NULL);
    List b3 = createList(); assert(b3 != NULL);
    oldsize = numItems(l3);
    frontBackSplit(l3, f3, b3);
    printf("Checking if source list is empty... ");
    assert(l3 != NULL);
    assert(numItems(l3) == 0);
    printf("OK.\n");

    printf("Checking frontList correct size... ");
    assert(numItems(f3) == halfSplit(oldsize, TRUE));
    printf("OK.\n");
    printf("Manually compare your frontList with expected output below:\n");
    printf("Your output:     "); printList(f3);
    printf("Expected output: ");
    i = 0;
    while (i < NUM_RAND / 2) {
        printf("%d->", test_num[i]);
        i++;
    }
    printf("X\n");

    printf("Checking backList correct size... ");
    assert(numItems(b3) == halfSplit(oldsize, FALSE));
    printf("OK.\n");
    printf("Manually compare your backList with expected output below:\n");
    printf("Your output:     "); printList(b3);
    printf("Expected output: ");
    i = NUM_RAND / 2;
    while (i < NUM_RAND - 1) {
        printf("%d->", test_num[i]);
        i++;
    }
    printf("X\n\n");
    destroyList(f3);
    destroyList(b3);



    destroyList(l1);
    destroyList(l2);
    destroyList(l3);
    destroyList(e);
    destroyList(o);

    printf("All tests passed - you are awesome!\n");
    return EXIT_SUCCESS;
}
