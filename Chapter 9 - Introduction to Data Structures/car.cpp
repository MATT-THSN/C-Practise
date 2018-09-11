/* 
* Programming Practise File
* Desc: Data Structures challenges
* Date Modified: 11/09/2018
* Author: Matthew Thompson
*/

/*
    - Create a structure called 'car' with the following members (attributes):
        * make
        * model
        * year
        * miles 
    - Create an instance of the car structure named myCar, and assign data to each of the members.
    Print the contents of each member to a standard output using the printf() function.
*/

typedef struct car {
    char make[20];
    char model[20];
    int year;
    int miles;
} car;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    car myCar;
    strcpy(myCar.make, "Ford");
    strcpy(myCar.model, "Fiesta");
    myCar.year = 2014;
    myCar.miles = 50000;

}