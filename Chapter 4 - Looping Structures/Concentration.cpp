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
void Countdown(int CurTime, int TimePast, char Diff);
void GenNums(char Diff, int One, int Two, int Three, int Four, int Five);

int iRandNum1 = 0;
int iRandNum2 = 0;
int iRandNum3 = 0;
int iRandNum4 = 0;
int iRandNum5 = 0;

int main(void) {
    srand(time(NULL));
    int iResponse1 = 0;
    int iResponse2 = 0;
    int iResponse3 = 0;
    int iResponse4 = 0;
    int iResponse5 = 0;
    int iCurrentTime = 0;
    int iTimePast = 0;
    char cDifficulty = 'N';
    char cMenuSelection = '\0';
    bool bUserInterface = true;
    bool Correct = false;

    printf("\n\tWelcome to the random numbers game!\n\n");

    do {
        system("clear");
        printf("\tMAIN MENU\n\n");
        printf("To get straight to playing, enter \'c\'\n");
        printf("To change the difficulty, enter \'d\'\n");
        scanf(" %c", &cMenuSelection);

        //Has the user said Yes?
        if (cMenuSelection == 'C' || cMenuSelection == 'c') {
            cMenuSelection = '\0';
            do {
                if(cDifficulty == 'E' || cDifficulty == 'e') {
                    GenNums(cDifficulty, iRandNum1, iRandNum2, iRandNum3, iRandNum4, iRandNum5);
                    printf("\nGet ready for your 3 numbers...\n\n");
                    Countdown(iCurrentTime, iTimePast, cDifficulty);
                    printf("\nHere are your numbers to remember:\n\n%d\t%d\t%d\n", iRandNum1, iRandNum2, iRandNum3);
                    Countdown(iCurrentTime, iTimePast, cDifficulty);

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
                        continue;
                    }
                }
                else if(cDifficulty == 'N' || cDifficulty == 'n') {
                    GenNums(cDifficulty, iRandNum1, iRandNum2, iRandNum3, iRandNum4, iRandNum5);
                    printf("\nGet ready for your 5 numbers...\n\n");
                    Countdown(iCurrentTime, iTimePast, cDifficulty);
                    printf("\nHere are your numbers to remember:\n\n%d\t%d\t%d\t%d\t%d\n", iRandNum1, iRandNum2, iRandNum3, iRandNum4, iRandNum5);
                    Countdown(iCurrentTime, iTimePast, cDifficulty);

                    //Clears the user's screen and asks for numbers
                    system("clear");
                    printf("What were the 5 numbers?\n");
                    scanf("%d%d%d%d%d", &iResponse1, &iResponse2, &iResponse3, &iResponse4, &iResponse5);

                    //Checks the answers
                    if(iRandNum1 == iResponse1 && iRandNum2 == iResponse2 && iRandNum3 == iResponse3 
                    && iRandNum4 == iResponse4 && iRandNum5 == iResponse5) {
                        printf("\nThat's correct! You remembered the 5 numbers!\n\n");
                        Correct = true;
                    }
                    else {
                        printf("\nSorry, that doesn't seem to be right, try again!\n");
                        continue;
                    }
                }
                else if (cDifficulty == 'H' || cDifficulty == 'h') {
                    GenNums(cDifficulty, iRandNum1, iRandNum2, iRandNum3, iRandNum4, iRandNum5);
                    printf("\nGet ready for your 5 numbers...\n\n");
                    Countdown(iCurrentTime, iTimePast, cDifficulty);
                    printf("\nHere are your numbers to remember:\n\n%d\t%d\t%d\t%d\t%d\n", iRandNum1, iRandNum2, iRandNum3, iRandNum4, iRandNum5);
                    Countdown(iCurrentTime, iTimePast, cDifficulty);

                    //Clears the user's screen and asks for numbers
                    system("clear");
                    printf("What were the 5 numbers?\n");
                    scanf("%d%d%d%d%d", &iResponse1, &iResponse2, &iResponse3, &iResponse4, &iResponse5);

                    //Checks the answers
                    if(iRandNum1 == iResponse1 && iRandNum2 == iResponse2 && iRandNum3 == iResponse3) {
                        printf("\nThat's correct! You remembered the 5 numbers!\n\n");
                        Correct = true;
                    }
                    else {
                        printf("\nSorry, that doesn't seem to be right, try again!\n");
                        continue;
                    }
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
        //Does the user want to change the difficulty?
        else if (cMenuSelection == 'D' || cMenuSelection == 'd') {
            cMenuSelection = '\0';
            do {
                system("clear");
                printf("\tDIFFICULTY SELECTION MENU\n\n");
                printf("For Easy enter \'E\'\n");
                printf("For Normal enter \'N\'\n");
                printf("For Hard enter \'H\'\n");
                scanf(" %c", &cDifficulty);
            } 
            while ( cDifficulty != 'E' && cDifficulty != 'e' && cDifficulty != 'N' 
            && cDifficulty != 'n' && cDifficulty != 'H'&& cDifficulty != 'h'
            );
        }
    } while (bUserInterface);
    return 0;
}

void GenNums(char Diff, int One, int Two, int Three, int Four, int Five) {
    if (Diff == 'E' || Diff == 'e') {
        iRandNum1 = rand() % 100;
        iRandNum2 = rand() % 100;
        iRandNum3 = rand() % 100;
    }
    else if (Diff == 'N' || Diff == 'n' || Diff == 'H' || Diff == 'h') {
        iRandNum1 = rand() % 100;
        iRandNum2 = rand() % 100;
        iRandNum3 = rand() % 100;
        iRandNum4 = rand() % 100;
        iRandNum5 = rand() % 100;
    }
}

void Countdown(int CurTime, int TimePast, char Diff) {
    if (Diff == 'E' || Diff == 'e') {
        CurTime = time(NULL);
        do {
            TimePast = time(NULL);
        } 
        while ((TimePast - CurTime) < 5);
    }
    else if (Diff == 'N' || Diff == 'n') {
        CurTime = time(NULL);
        do {
            TimePast = time(NULL);
        } 
        while ((TimePast - CurTime) < 5);
    }
    else if (Diff == 'H' || Diff == 'h') {
        CurTime = time(NULL);
        do {
            TimePast = time(NULL);
        } 
        while ((TimePast - CurTime) < 3);
    }
}