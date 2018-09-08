/* 
* Programming Practise File
* Desc: Pointers Challenge 2
* Date Modified: 08/09/2018
* Author: Matthew Thompson
*/

/*
    - Create a program that allows the user to select one of the following four menu options:
        * Enter a new integer value
        * Prints the value of each pointer variable
        * Prints the address of each nonpointer variable
        * Prints the address of each pointer variable
    - For this program, you need to create two variables: one integer data type and one pointer. 
    Using indirection, assign any new integer value that the user enters through an appropriate pointer.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int iSelect = 0;
    int iStoredVal = 0;
    int *PointIntVal = &iStoredVal;
    bool bRun = true;

    do {
        printf("\n\tPOINTER PROGRAM\n");
        printf("\n\tSelect a menu option: ");
        printf("\n\tEnter 1. Print pointer address");
        printf("\n\tEnter 2. Print integer address");
        printf("\n\tEnter 3. Print integer value");
        printf("\n\tEnter 4. Quit");
        printf("\n\tSelection: ");
        scanf("%d", &iSelect);

        switch(iSelect) {
            case 1: 
            break;

            case 2: 
            break;

            case 3: 
            break;

            case 4:
            printf("\n\tQuitting...");
            bRun = !bRun;
            break;

            default:
            printf("\n\tNot a valid option");
            break;
        }
    } while (bRun);
}