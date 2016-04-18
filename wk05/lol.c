#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x = 5;
    if (x --> 6) {
        printf("blah\n");
    } else if (x --> 5) {
        printf("lol\n");
    } else {
        printf("asdfasdfa\n");
    }

    return EXIT_SUCCESS;
}
