#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int arrSize = argc;
    int *array = malloc(arrSize * sizeof(int));

    int counter = 0;
    while (counter < arrSize) {
        array[counter] = 1;
    }

    free(array);

    return EXIT_SUCCESS;
}
