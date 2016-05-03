#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

typedef struct _stack {
    int stack[MAX_STACK];
    int size;
} stack;

Stack newStack(void) {
    Stack s = malloc(sizeof(stack));
    s->size = 0;
    return s;
}

void push(Stack s, int data) {
    s->stack[s->size] = data;
    s->size++;
}

