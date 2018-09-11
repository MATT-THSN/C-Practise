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
    - Using the car structure from Challenge 1, create a structure array with three elements named myCars. 
    Populate each structure in the array with your favourite car model information. Use a for loop to print each structure detail in the array.
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
    //Created instance of car structure
    car myCar[3];
    int x = 0;

    //Inserted values into myCar attributes
    for(x = 0; x < 3; x++) {
        switch(x) {
            case 0:
                strcpy(myCar[0].make, "Ford");
                strcpy(myCar[0].model, "Fiesta");
                myCar[0].year = 2014;
                myCar[0].miles = 50000;
            break;

            case 1:
                strcpy(myCar[1].make, "Audi");
                strcpy(myCar[1].model, "R8");
                myCar[1].year = 2018;
                myCar[1].miles = 4000;
            break;

            case 2:
                strcpy(myCar[2].make, "BMW");
                strcpy(myCar[2].model, "M3");
                myCar[2].year = 2016;
                myCar[2].miles = 15000;
            break;
        }
    }

    for(x = 0; x < 3; x++) {
        printf("\n\tCar 1 info: %s %s Year: %d Milage: %d\n", 
            myCar[x].make, 
            myCar[x].model, 
            myCar[x].year, 
            myCar[x].miles
        );
    }
}