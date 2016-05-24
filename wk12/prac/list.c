#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/*
 * (EASIER)
 * uniqList should remove all but one consecutive occurrences of a node.
 * Best explained with a few examples:
 * 1->2->2->3->3->3->5->4->X becomes 1->2->3->5->4->X
 * 1->1->1->1->1->1->X becomes 1->X
 * 8->8->2->8->8->4->4->4->X becomes 8->2->8->4->X
 *
 * Obviously, do nothing with a list with 0 or 1 element(s).
 * DO NOT CREATE OR FREE ANY NODES. Things will break if you do.
 *
 * Compile: gcc -Wall -Werror -O -o testUniq list.c testUniq.c
 * Run: ./testUniq
 */
void uniqList(list l) {

}

/*
 * (HARDER)
 * reverseList should reverse a linked list, in-place.
 * Basically that means you can only do this by rearranging
 * pointers. You are NOT allowed to create or destroy
 * any nodes, or change a node's value.
 * Examples:
 * 5->2->X becomes 2->5->X
 * 1->2->3->4->5->X becomes 5->4->3->2->1->X
 * 7->4->5->4->X becomes 4->5->4->7->X
 *
 * Obviously, do nothing with a list with 0 or 1 element(s).
 *
 * Hint: you will need more than 2 node pointers.
 * You should repeatedly remove the first node from the "old"
 * list and update the node pointer that holds the head of your new list.
 * Remember to change the head of the list once you're done.
 *
 * Compile: gcc -Wall -Werror -O -o testReverse list.c testReverse.c
 * Run: ./testReverse
 */
void reverseList(list l) {

}
