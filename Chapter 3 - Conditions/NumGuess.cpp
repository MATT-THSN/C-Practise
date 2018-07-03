/* 
* Programming Practise File
* Desc: Number guessing game
* Date Modified: 03/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    srand(time(NULL));
    int randomNum = (rand() % 10) + 1;
    int playerGuess = 0;

    printf("\n\t\tNumber Guessing Game!");
    printf("\n\n\tGuess the number that's between 1 & 10: ");
    scanf("%d", &playerGuess);
    
    if (!isdigit(playerGuess)) {
        if (playerGuess == randomNum) {
            printf("\n\tYou were right! The correct answer was %d\n", randomNum);
        }
        else {
            printf("\n\tThat's the wrong answer\n");
        }
    }
}