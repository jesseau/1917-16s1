// extract.c
// funtions and types used to extract x,y,z values from a
// string containing a url of the form
// "http://almondbread.cse.unsw.edu.au:7191/tile_x3.14_y-0.141_z5.bmp"
// initially by richard buckland
// 13 April 2014
// your name here:
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "extract.h"

#define TRUE 1
#define FALSE 0

long exponentiate(long digit, int exponent);
 
int main (int argc, char *argv[]) {
    
    //char * message = "http://almondbread.cse.unsw.edu.au:7191/tile_x3.14_y-0.141_z5.bmp";
 
    //triordinate dat = extract (message);
 
//    printf ("dat is (%f, %f, %d)\n", dat.x, dat.y, dat.z);
// 
//    assert (dat.x == 3.14);
//    assert (dat.y == -0.141);
//    assert (dat.z == 5);

    assert(myAtoL("123") == 123);
    assert(myAtoL("0") == 0);
    assert(myAtoL("123123123") == 123123123);
 
    return EXIT_SUCCESS;
}



long myAtoL(char *message) {
    long result = 0;
    
    int i = 0;
    while (message[i] != '\0') {
        long digit = message[i] - '0';
        result = result*10 + digit;
        i++;
    }

    return result;
}
