/* 
* App name: Concentration
* Desc: A memory game with numbers
* Date Modified: 24/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Waiting 3 seconds
void Countdown(int CurTime, int TimePast);

int main(void) {
    srand(time(NULL));
    int iRandNum1 = 0;
    int iRandNum2 = 0;
    int iRandNum3 = 0;
    int iResponse1 = 0;
    int iResponse2 = 0;
    int iResponse3 = 0;
    int iCurrentTime = 0;
    int iTimePast = 0;
    char cMenuSelection = '\0';
    bool bUserInterface = true;
    bool Correct = false;

    do {
        printf("Would you like to play a game of random numbers?\nY or N: ");
        scanf(" %c", &cMenuSelection);

        //Has the user said Yes?
        if (cMenuSelection == 'Y' || cMenuSelection == 'y') {
            cMenuSelection = '\0';
            do {
                //Gives the user 3 random numbers
                iRandNum1 = rand() % 100;
                iRandNum2 = rand() % 100;
                iRandNum3 = rand() % 100;
                printf("\nGet ready for your 3 numbers...\n\n");
                Countdown(iCurrentTime, iTimePast);
                printf("\nHere are your numbers to remember:\n\n%d\t%d\t%d\n", iRandNum1, iRandNum2, iRandNum3);
                Countdown(iCurrentTime, iTimePast);

                //Clears the user's screen and asks for numbers
                system("clear");
                printf("What were the 3 numbers?\n");
                scanf("%d%d%d", &iResponse1, &iResponse2, &iResponse3);

                //Checks the answers
                if(iRandNum1 == iResponse1 && iRandNum2 == iResponse2 && iRandNum3 == iResponse3) {
                    printf("\nThat's correct! You remembered the 3 numbers!\n\n");
                    Correct = true;
                }
                else {
                    printf("\nSorry, that doesn't seem to be right, try again!\n");
                }
            } while(Correct == false);
        }
        //Has the user said No?
        else if (cMenuSelection == 'N' || cMenuSelection == 'n') {
            cMenuSelection = '\0';
            system("clear");
            printf("Thank you for playing");
            bUserInterface = false;
            continue;
        }
    } while (bUserInterface);
    return 0;
}

void Countdown(int CurTime, int TimePast) {
    CurTime = time(NULL);
    do {
        TimePast = time(NULL);
    } 
    while ((TimePast - CurTime) < 3);
}