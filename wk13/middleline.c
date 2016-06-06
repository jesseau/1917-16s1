#include <stdio.h>
#include <stdlib.h>

#define ROWS 1024
#define COLS 128

int main(int argc, char *argv[]) {
    char lines[ROWS][COLS];
    char *status = fgets(lines[0], COLS, stdin);
    int i = 1;
    while (status != NULL && i < 1024) {
        status = fgets(lines[i], COLS, stdin);
        i++;
    }

    // all input is now in the array
    printf("%s", lines[i/2]);
    return EXIT_SUCCESS;
}
