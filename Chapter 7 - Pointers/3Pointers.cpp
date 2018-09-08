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
void Print1(const int *);


int main(void) {
    int iNumber = 20;
    float fNumber = 0.0;
    char cCharacter = '\0';

    int *iPtr = &iNumber;
    float *fPtr = &fNumber;
    char *cPtr = &cCharacter;

    Print1(&iNumber);


    return 0;
} //END Main

void Print1(const int * x) {
    printf("\n\t%d", *x);
}