/* 
* Programming Practise File
* Desc: Pointers Challenge 1
* Date Modified: 03/09/2018
* Author: Matthew Thompson
*/

/*
    - Declares three pointer variables called iPtr of type int, cPtr of type char and fPtr of type float
    - Declares three new variables called iNumber of int type, fNumber of float type and cCharacter or type Char
    - Assigns the addresses of each nonpointer variable to the matching pointer variable
    - Prints the value of each nonpointer variable   (1)
    - Prints the value of each pointer variable      (2)
    - Prints the address of each nonpointer variable (3)
    - Prints the address of each pointer variable    (4)
*/

#include <stdlib.h>
#include <stdio.h>

//Function Prototypes
void Print1(const int *, const float *, const char *);
void Print2(const int *, const float *, const char *);
void Print3(const int *, const float *, const char *);
void Print4(const int *, const float *, const char *);


int main(void) {
    //Dec/Initialisation of variables
    int iNumber = 20;
    float fNumber = 0.0;
    char cCharacter = 'C';

    //Dec/Initialisation of pointers
    int *iPtr = &iNumber;
    float *fPtr = &fNumber;
    char *cPtr = &cCharacter;

    //Calling functions
    Print1(&iNumber, &fNumber, &cCharacter);
    Print2(iPtr, fPtr, cPtr);
    Print3(&iNumber, &fNumber, &cCharacter);
    Print4(iPtr, fPtr, cPtr);

} //END Main

//FUNCTION Declaration
void Print1(const int *i, const float *f, const char *c) {
    printf("\n\tPrinting variable values");
    printf("\n\t%d", *i);
    printf("\n\t%f", *f);
    printf("\n\t%c\n", *c);
}

void Print2(const int * i, const float * f, const char * c) {
    printf("\n\tPrinting the value of pointers");
    printf("\n\t%d", *i);
    printf("\n\t%f", *f);
    printf("\n\t%c\n", *c);
}

void Print3(const int * i, const float * f, const char * c) {
    printf("\n\tPrinting the address of nonpointer variable");
    printf("\n\t%p", i);
    printf("\n\t%p", f);
    printf("\n\t%p\n", c);
}

void Print4(const int * i, const float * f, const char * c) {
    printf("\n\tPrinting the address of nonpointer variable");
    printf("\n\t%p", i);
    printf("\n\t%p", f);
    printf("\n\t%p\n", c);
}