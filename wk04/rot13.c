#include <stdio.h>
#include <stdlib.h>

char encode(char letter) {
    if (letter >= 'a' && letter <= 'm') {
        letter += 13;
    } else if (letter >= 'n' && letter <= 'z') {
        letter -= 13;
    }
    return letter;
}

int main(int argc, char *argv[]) {
    char letter;
    scanf("%c", &letter);
    while (letter != ' ') {
        printf("%c\n", encode(letter));
    }

    return EXIT_SUCCESS;
}
