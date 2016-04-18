#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ITERATIONS 256

struct _complex {
    double real;
    double imag;
};

typedef struct _complex Complex;

int escapeSteps(double x, double y);
Complex square(double x, double y);
double length(double x, double y);

int main(int argc, char *argv[]) {
    printf("%d\n", escapeSteps(0, 0));
    return EXIT_SUCCESS;
}

int escapeSteps(double x, double y) {
    int counter = 0;
    Complex orig;
    Complex temp;
    orig.real = x;
    orig.imag = y;

    while (length(x, y) <= 2 &&
            counter < ITERATIONS) {
        temp = square(x, y);
        x = temp.real + orig.real;
        y = temp.imag + orig.imag;
        counter++;
    }

    return counter;
}

Complex square(double x, double y) {
    Complex c;
    c.real = (x * x) - (y * y);
    c.imag = 2 * x * y;
    return c;
}

double length(double x, double y) {
    return sqrt((x * x) + (y * y));
}

