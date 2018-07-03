/* 
* Programming Practise File
* Desc: Dice game
* Date Modified: 03/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void) {
    srand(time(NULL));
    int iFirDice = (rand() % 6) + 1;
    int iSecDice = (rand() % 6) + 1;

    printf("\n\tDice Game\n\tIf the sum of the two Dice equals 7 or 11, you win!");
    if ((iFirDice + iSecDice) == 7 || (iFirDice + iSecDice) == 11) {
        printf("\n\n\tYou win!");
    }
    else {
        printf("\n\n\tYou loose...");
        printf("\n\tThe final total was: %d", iFirDice + iSecDice);
    }
}