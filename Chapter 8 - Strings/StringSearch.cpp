/* 
* Programming Practise File
* Desc: Strings Challenge 2
* Date Modified: 10/09/2018
* Author: Matthew Thompson
*/

/*
    - Create a program that uses the strstr() function to search the string "When the going gets tough, the tough stay put!"
    For the following occurrences (display each occurence found to standard input)#
        * "Going"
        * "tou"
        * "ay put!"
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void) {
    char sentence[] = "When the going gets tough, the tough stay put!";
    char comparision[3][10] = { "Going", "tou", "ay put!" };

    if (strstr(sentence, comparision[0]) != NULL) {
        printf("\n\tFound! %s is in the sentence!", comparision[0]);
    }
    else {
        printf("\n\tDid not find. %s is not in the sentence", comparision[0]);
    }

    if(strstr(sentence, comparision[1]) != NULL) {
        printf("\n\tFound! %s is in the sentence!", comparision[1]);
    }
    else {
        printf("\n\tDid not find. %s is not in the sentence", comparision[1]);
    }

    if(strstr(sentence, comparision[2]) != NULL) {
        printf("\n\tFound! %s is in the sentence!", comparision[2]);
    }
    else {
        printf("\n\tDid not find. %s is not in the sentence\n", comparision[2]);
    }

}