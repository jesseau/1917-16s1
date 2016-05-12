typedef struct _complex *Complex;

Complex createComplex(double r, double i);
void destroyComplex(Complex c);
double getReal(Complex c);
double getImaginary(Complex c);
