/* 
* Programming Practise File
* Desc: Strings Challenge 1
* Date Modified: 10/09/2018
* Author: Matthew Thompson
*/

/*
    - Create a program that performs the following functions:
        * Uses character arrays to read a user's name from a standard input.
        * Tells the user how many characters are in their name.
        * Displays the user's name in uppercase
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//FUNCTION PROTOTYPES
void charcount(char *, int *);

//BEGIN MAIN
int main(void) {
    int numOfChars = 0;
    char userName[20];

    printf("\n\tPlease tell me your name: ");
    scanf("%s", userName);
    charcount(userName, &numOfChars);
    printf("\n\tThe number of characters in your name = %d", numOfChars);
    printf("\n\tYour name is: %s", userName);
}
//END MAIN

void charcount(char *name, int *count) {
    for (int x = 0; x <= strlen(name); x++) {
        name[x] = toupper(name[x]);
        *count = x;
    }
}