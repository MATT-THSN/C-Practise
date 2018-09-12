/* 
* Programming Practise File
* Desc: Dynamic Memory Allocation Challenge 1
* Date Modified: 12/09/2018
* Author: Matthew Thompson
*/

/*
    -   Create a program that used malloc() to allocate a chunk of memory to hold a string no longer than 80 characters.
        Prompt the user to enter his favourite movie. Read his response with scanf(), and assign the data to your newly
        allocated memory. Display the user's favourite movie back to standard output.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //Allocating memory
    char *movie;
    movie = (char *) malloc(80 * sizeof(char));

    printf("\n\tWhat is your favourite movie?\n");
    printf("\tInput: "); scanf("%s", movie);
    printf("\tYour favourite movie is: %s\n", movie);
    
    free(movie);
    return 0;
}