/*
 * COMP1917 16s1
 * List.h - Linked list ADT interface
 * Jesse Zhang (tue09-kora)
 */

typedef struct _list *List;     // Linked list ADT

List createList(void);          // Create a new, empty list
void insertList(List, int);     // Insert an element at the start
void insertListT(List, int);    // Insert an element at the end
void printList(List);           // Print the list
void destroyList(List);         // Clean up the list and all nodes
int numItems(List);             // Number of items in the list

void frontBackSplit(List, List, List);  // Splits a list into two
void swapSecond(List);          // Swaps every second element
