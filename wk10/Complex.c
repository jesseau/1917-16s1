#include <stdio.h>
#include <stdlib.h>
#include "Complex.h"

typedef struct _complex{
     double real;
     double imaginary;
}complex;

//Attempt 1
Complex createComplex(double r, double i){
     complex c;
     c.real = r;
     c.imaginary = i;
     return &c;
}

//Attempt 2
Complex createComplex(double r, double i){
     Complex c = malloc(sizeof(Complex));
     c->real = r;
     c->imaginary = i;
     return c;
}

int main(int argc, char *argv[]) {
    return EXIT_SUCCESS;
}
