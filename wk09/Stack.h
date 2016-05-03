#define MAX_STACK 100

typedef struct _stack *Stack;

Stack newStack(void);
void freeStack(Stack);
void push(Stack, int);
int pop(Stack);
int top(Stack);
int size(Stack);
