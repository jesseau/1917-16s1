#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char myString[6];
    myString[0] = 'h';
    myString[1] = 'e';
    myString[2] = 'l';
    myString[3] = 'l';
    myString[4] = 'o';
    myString[5] = 0;

    printf("%s\n", myString);

    strcpy(myString, "world");
    printf("%s\n", myString);

    char *wat = "wat";
    strncpy(myString, "wat", strlen(wat)+1);
    printf("%s\n", myString);

    return EXIT_SUCCESS;
}
