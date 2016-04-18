#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int freq[128] = {0};
    int c;
    while ((c = getchar()) != EOF) {
        freq[c]++;
    }

    int i = '!';
    while (i < 127) {
        printf("the frequency of %c is %d\n", i, freq[i]);
        i++;
    }

    return EXIT_SUCCESS;
}
