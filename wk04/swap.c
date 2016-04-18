#include <stdio.h>
#include <stdlib.h>

void swap(int *first, int *second);

int main(int argc, char *argv[]) {
    int a = 1;
    int b = 2;
    swap(&a, &b);
    printf("value of a: %d, value of b: %d\n", a, b);

    return EXIT_SUCCESS;
}

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}
