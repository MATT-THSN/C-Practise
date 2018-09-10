/* 
* Programming Practise File
* Desc: Pointers Challenge 3
* Date Modified: 10/09/2018
* Author: Matthew Thompson
*/

/*
    - Build a program that uses an array of strings to store the following names:
        * "Florida"
        * "Oregon"
        * "California"
        * "Georgia"
    - Using the preceding array of strings, write your own sort function to display
    each state's name in alphabetical order using the strcmp() function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strSort(const char *);

int main(void) {
    char names[4][11] = {"Florida", "Oregon", "California", "Georgia"};
}

void strSort(const char * state) {
    if(strcmp(&state[0], &state[1])) {

    }
}