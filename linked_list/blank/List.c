/*
 * COMP1917 16s1
 * List.c - Linked list ADT implementation
 * Jesse Zhang (tue09-kora)
 *
 * Compile with: gcc -Wall -Werror -g -O -o testList List.c testList.c
 * Run with: ./testList
 * Check for memory leaks with: valgrind ./testList
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "List.h"

// You should probably understand where and when to use
// typedef's and structs, particularly in linked lists.
// This is something that is generally provided to you
// during a practical exam, but you may be required to
// produce an ADT in the theory exam on paper.
// It's also a good idea to look at List.h to understand
// what exactly you're showing and hiding from the user.
//
// To make sure my test files work, don't change the
// typedef or any of the structs.
typedef struct _node *nodePtr;

struct _node {
    int data;
    nodePtr next;
};

struct _list {
    nodePtr head;
};

// Create an empty list.
// That means you allocate enough space for it on the heap
// and set the head to NULL.
List createList(void) {
    return NULL;
}

// Create a node and insert the element at the beginning.
// Note we don't need a createNode function because it's
// redunant and simple.
void insertList(List l, int data) {

}

// Create a node and insert the element at the end.
// That means you should traverse the list until you
// reach the last node, if it exists.
void insertListT(List l, int data) {

}

// Prints a list.
// Implemented already so I can test for things.
void printList(List l) {
    nodePtr curr = l->head;
    while (curr != NULL) {
        printf("%d->", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

// Destroys a list and all associated nodes.
void destroyList(List l) {

}

// Returns the number of items in a list.
// Implemented already so I can test for things.
int numItems(List l) {
    nodePtr curr = l->head;
    int count = 0;
    while (curr != NULL) {
        count++;
        curr = curr->next;
    }
    return count;
}

// 15s1 practice prac question. (Easier)
// Split sourceList in half, with the first half going in frontList
// and the second half going in backList.
// Make sourceList empty, but don't destroy it.
// If the list has an odd number of elements, then frontList should
// contain more elements than backList.
// Do not create or destroy any lists or nodes. You can assume that
// frontList and backList are empty, and sourceList is a valid list.
// e.g. sourceList = 90->33->1->5->3->X, frontList = backList = X
// after frontBackSplit, sourceList = X
// frontList = 90->33->1->X, backList = 5->3->X
// You should aim to finish this question in 1 hour. Good luck.
void frontBackSplit(List sourceList, List frontList, List backList) {

}

// 15s1 second practice prac question. (Harder)
// Swap every pair of elements in the given list. So if the provided
// list was 90->33->1->5->X, then the resulting list should be
// 33->90->5->1->X.
// If the list is empty or has only 1 element, do nothing.
// If there are an odd number of elements, do nothing with the last one.
// Do not create or destroy any lists or nodes. You should only do
// this question by rearranging pointers. You can assume the provided
// list is valid.
// You should aim to finish this question in 1 hour. Good luck.
void swapSecond(List l) {

}
