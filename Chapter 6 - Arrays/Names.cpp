/* 
* Programming Practise File
* Desc: Store 5 names
* Date Modified: 06/09/2018
* Author: Matthew Thompson
*/

/*
    - 2 dimentional array, stores up to five names. 
    - Asks for the user to input a new name, also asks to view added names
*/

#include <stdio.h>
#include <stdlib.h>

//VARIABLES
char aNames[50][5];

//FUNCTION PROTOTYPES
void stringRead(int val);

int main(void) {
    int tmp = 0;
    while(true) {
        switch (tmp) {
            case 0: 
                //system("clear");
                printf("\n\tAdd a name1: ");
                scanf(" %s", &aNames[tmp++]);
                stringRead(0);
            break;

            case 1: 
                //system("clear");
                printf("\n\tAdd a name2: ");
                scanf(" %[^\n]", &aNames[tmp++]);
            break;

            case 2: 
                system("clear");
                printf("\n\tAdd a name3: ");
                scanf(" %[^\n]", &aNames[tmp++]);
            break;

            case 3: 
                system("clear");
                printf("\n\tAdd a name4: ");
                scanf(" %[^\n]", &aNames[tmp++]);
            break;

            case 4: 
                system("clear");
                printf("\n\tAdd a name5: ");
                scanf(" %[^\n]", &aNames[tmp++]);
            break;

            default: 
                system("clear");
                printf("\n\tAdd a named: ");
                scanf(" %[^\n]", &aNames[tmp++]);
            break;
        }
    }
}

void stringRead(int val) {
    for(int x = 0; x < 50; x++) {
        //printf("Before");
        printf("%c", aNames[x][val]);
        //printf("After");
    }
    printf("Here");
}



