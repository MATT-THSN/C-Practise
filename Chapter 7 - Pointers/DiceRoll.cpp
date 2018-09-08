/* 
* Programming Practise File
* Desc: Pointers Challenge 3
* Date Modified: 08/09/2018
* Author: Matthew Thompson
*/

/*
    - Create a dice rolling game. The game should allow a user to toss up to six dice ata time.
    Each toss of a die will be stored in a six-element integer array. The array is created in the main() function but passed to a new function called 'TossDie()'
    The TossDie() function will take care of generating random numbers from one to six and assigning them to the appropriate array element number.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//Function Prototypes
void DiceRoller(int, int []);

int main(void) {

    //Variables
    srand(time(NULL));
    int NumRolls = 0;
    int Rolls[6] = { 0 };

    printf("\n\n\tDice Rolling Program");

    do {
        printf("\n\n\tHow many dice would you like to roll out of 6?");
        printf("\n\tSelection: ");
        scanf("%d", &NumRolls);
    } while(NumRolls <= 0 && NumRolls >= 7);

    printf("\n\t");
    DiceRoller(NumRolls, Rolls);

} //End of Main

void DiceRoller(int Num ,int Dice[]) {
    switch (Num) {
        case 1:
            Dice[0] = rand() % 6 + 1;
            printf("%d", Dice[0]);
        break;

        case 2:
            Dice[0] = rand() % 6 + 1;
            Dice[1] = rand() % 6 + 1;
            printf("%d %d", Dice[0], Dice[1]);
        break;

        case 3:
            Dice[0] = rand() % 6 + 1;
            Dice[1] = rand() % 6 + 1;
            Dice[2] = rand() % 6 + 1;
            printf("%d %d %d", Dice[0], Dice[1], Dice[2]);
        break;

        case 4:
            Dice[0] = rand() % 6 + 1;
            Dice[1] = rand() % 6 + 1;
            Dice[2] = rand() % 6 + 1;
            Dice[3] = rand() % 6 + 1;
            printf("%d %d %d %d", Dice[0], Dice[1], Dice[2], Dice[3]);
        break;

        case 5:
            Dice[0] = rand() % 6 + 1;
            Dice[1] = rand() % 6 + 1;
            Dice[2] = rand() % 6 + 1;
            Dice[3] = rand() % 6 + 1;
            Dice[4] = rand() % 6 + 1;
            printf("%d %d %d %d %d", Dice[0], Dice[1], Dice[2], Dice[3], Dice[4]);
        break;

        case 6:
            Dice[0] = rand() % 6 + 1;
            Dice[1] = rand() % 6 + 1;
            Dice[2] = rand() % 6 + 1;
            Dice[3] = rand() % 6 + 1;
            Dice[4] = rand() % 6 + 1;
            Dice[5] = rand() % 6 + 1;
            printf("%d %d %d %d %d %d", Dice[0], Dice[1], Dice[2], Dice[3], Dice[4], Dice[5]);
        break;

        default: 
            printf("Not a valid amount");
        break;
    }
}