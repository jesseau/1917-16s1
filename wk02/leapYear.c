// leapYear.c
// Jesse Zhang 8/3/16
// a program that determines whether a year is leap

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define START_OF_GREGORIAN_CAL 1582
#define TRUE 1
#define FALSE 0

int isLeapYear(int year);

int main(int argc, char *argv[]) {
    int year;
    scanf("%d", &year);
    assert(year >= START_OF_GREGORIAN_CAL);

    if (isLeapYear(year) == TRUE) {
        printf("leap!\n");
    }

    return EXIT_SUCCESS;
}

int isLeapYear(int year) {
    int isLeap = FALSE;

    if (year % 4 == 0) {
        isLeap = TRUE;
    }

    return isLeap;
}
