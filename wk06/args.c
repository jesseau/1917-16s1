#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int counter = 0;
    printf("argc is %d\n", argc);
    while (counter < argc) {
        printf("argv[%d] = %s\n", counter, argv[counter]);
        counter++;
    }

    return EXIT_SUCCESS;
}
