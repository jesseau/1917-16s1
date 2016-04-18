// numbertest.c
// Jesse Zhang 8/3/16
// number guessing game

#include <stdio.h>
#include <stdlib.h>

#define CORRECT_NUMBER 9000

int main(int argc, char *argv[]) {
    int number;
    scanf("%d", &number);

    if (number > CORRECT_NUMBER) {
        printf("it's over %d but it's not right\n", CORRECT_NUMBER);
    } else if (number < CORRECT_NUMBER) {
        printf("number too small\n");
    } else {
        printf("you got it right!\n");
    }

    return EXIT_SUCCESS;
}
