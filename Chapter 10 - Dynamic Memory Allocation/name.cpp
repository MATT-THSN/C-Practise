/* 
* Programming Practise File
* Desc: Data Structures challenges
* Date Modified: 12/09/2018
* Author: Matthew Thompson
*/

/*
    -   Using the calloc() function, write a program that reads a user's name from standard
        input. Use a loop to iterate through the memory allocated, counting the number of
        characters in the user's name. The loop should stop when a memory segment is reached
        that was not used for reading and storing the user's name. (Remember, calloc() initializes
        all memory allocated.) Print the number of characters in the user's name to standard output.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int numC = 0;
    char *name;
    //Allocates memory to name
    name = (char *) calloc(20, sizeof(char *));

    printf("\n\tEnter your name: ");
    printf("\n\tInput: "); scanf("%s", name);
    printf("\tYour name is: ");
    //Loops through name until it hits null pointer
    while(name[numC] != '\0') {
        printf("%c", name[numC]);
        numC++;
    }
    printf("\n\tThere are %d characters in your name", numC);
}