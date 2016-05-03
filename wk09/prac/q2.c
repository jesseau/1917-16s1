/*
 * Write a program that finds the average of all the numbers in the array.
 * If there are no numbers, the average is 0.
 *
 * Compile using: gcc -Wall -Werror -O -o q2 q2.c
 * Mark using: ./mark q2
 */

#include <stdio.h>
#include <stdlib.h>

// Change this function...
double average(int arr[], int n) {
    return 1337;
}

// But don't change anything below this line!
int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    while (i < n) {
        scanf("%d", &arr[i]);
        i++;
    }
    printf("average of array: %lf\n", average(arr, n));
    return EXIT_SUCCESS;
}
