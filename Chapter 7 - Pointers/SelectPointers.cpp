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
#include <time.h>

int main(void) {
    srand(time(NULL));
    int iSelect = 0;
    int iStoredVal = 0;
    int *PointIntVal = &iStoredVal;
    bool bRun = true;

    do {
        iStoredVal = rand() % 100;
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
                system("clear");
                printf("\n\tPointer address: %p\n", PointIntVal);
            break;

            case 2: 
                system("clear");
                printf("\n\tInteger address: %p\n", &iStoredVal);
            break;

            case 3:
                system("clear");
                printf("\n\tInteger value: %d\n", *PointIntVal);
            break;

            case 4:
                system("clear");
                printf("\n\tQuitting...");
                bRun = !bRun;
            break;

            default:
            printf("\n\tNot a valid option");
            break;
        }
    } while (bRun);
}