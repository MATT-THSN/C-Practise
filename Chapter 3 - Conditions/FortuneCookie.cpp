/* 
* Programming Practise File
* Desc: Fortune Cookie
* Date Modified: 03/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(void) {
    int iYear = 0;

    printf("\n\tFortune Cookie Program");
    printf("\n\tEnter the year of your birth: ");
    scanf("%d", &iYear);

    if (!isdigit(iYear)) {
        switch(iYear) {
            case 2018: 
                printf("\n\tYou are a dog thing, not sure I get it\n");
                break;
            case 1997:
                printf("\n\tYou are an ox thing, not sure I get it\n");
                break;
            case 1996:
                printf("\n\tYou are a rat thing, not sure I get it\n");
                break;
            default:
                printf("\n\tYear not valid\n");
                break;
        }
    } else {
        printf("\n\tThat's not a valid date - Error\n");
    }
}