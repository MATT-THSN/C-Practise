/* 
* Programming Practise File
* Desc: GPA average calculator
* Date Modified: 03/09/2018
* Author: Matthew Thompson
*/

/*
    - Build a program that uses a single-dimension array to store 30 GPA values, insertable by the user.
    - Everytime they enter a GPA, give the option to calculate their GPA average or enter another GPA
*/

#include <stdio.h>
#include <stdlib.h>

//VARIABLES
float fValues[30] = {0};

//FUNCTIONS
void ViewGPA();
void ValInsert();
void AvgCalc();

int main(void) {
    int iMenuSelector = 0;
    printf("\n\tGPA Application");
    printf("\n\n\t\'1\' - View Stored GPAs");
    printf("\n\t\'2\' - Add a GPA Value");
    printf("\n\n\tMake a selection: ");
}