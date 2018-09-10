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

void strSort(char state[4][11]);

int main(void) {
    char names[4][11] = {"Florida", "Oregon", "California", "Georgia"};
    printf("\n\tHere are the states: %s, %s, %s and %s", names[0], names[1], names[2], names[3]);
    strSort(names);
    printf("\n\tHere are the states SORTED: %s, %s, %s and %s", names[0], names[1], names[2], names[3]);
}

void strSort(char state[4][11]) {
    int count = 0;
    char tmpStore[2][11];

    do {
        count = 0;
        //COMP 1 & 2
        if((strcmp(&state[0][0], &state[1][0]) < 0)) {
            count++;
        }
        else if(strcmp(&state[0][0], &state[1][0]) > 0) { 
            strcpy(tmpStore[0], state[1]);
            strcpy(tmpStore[1], state[0]);
            strcpy(state[0], tmpStore[0]);
            strcpy(state[1], tmpStore[1]);
        }
        else { count++; }
        //COMP 2 & 3
        if(strcmp(&state[1][0], &state[2][0]) < 0) {
            count++;
        }
        else if(strcmp(&state[1][0], &state[2][0]) > 0) {
            strcpy(tmpStore[0], state[2]);
            strcpy(tmpStore[1], state[1]);
            strcpy(state[1], tmpStore[0]);
            strcpy(state[2], tmpStore[1]);
        }
        else { count++; }
        //COMP 3 & 4
        if(strcmp(&state[2][0], &state[3][0]) < 0) {
            count++;
        }
        else if(strcmp(&state[2][0], &state[3][0]) > 0) {
            strcpy(tmpStore[0], state[3]);
            strcpy(tmpStore[1], state[2]);
            strcpy(state[2], tmpStore[0]);
            strcpy(state[3], tmpStore[1]);
        }
        else { count++; }
    } while (count != 3);
}