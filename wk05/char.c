#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define NUM_ALPHA 26

int isLetter(char letter);

int main(int argc, char *argv[]) {
    char c;
    int charsRead = 0;
    int lettersRead = 0;
    int alphaRead[NUM_ALPHA] = {0};

    while ((c = getchar()) != EOF) {
        charsRead++;
        if (isLetter(c)) {
            lettersRead++;
        }
    }

    printf("number of chars read: %d\n", charsRead);
    printf("number of letters read: %d\n", lettersRead);
    

    return EXIT_SUCCESS;
}

int isLetter(char letter) {
    int retVal = FALSE;
    if (letter >= 'A' && letter <= 'Z') {
        retVal = TRUE;
    } else if (letter >= 'a' && letter <= 'z') {
        retVal = TRUE;
    }
    return retVal;
}
