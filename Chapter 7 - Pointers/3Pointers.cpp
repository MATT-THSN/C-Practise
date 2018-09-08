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


    return 0;
} //END Main

//FUNCTION Declaration
void Print1(const int *x, const float *y, const char *c) {
    printf("\n\t%d", *x);
    printf("\n\t%f", *y);
    printf("\n\t%c\n", *c);
}