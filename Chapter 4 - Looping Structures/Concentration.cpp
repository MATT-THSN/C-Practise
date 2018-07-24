/* 
* App name: Concentration
* Desc: A memory game with numbers
* Date Modified: 24/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Countdown(int CurTime, int TimePast, char Diff);
void GenNums(char Diff);

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
        printf("\n\tMAIN MENU\n\n");
        printf("\tTo get straight to playing, enter \'C\'\n");
        printf("\tTo change the difficulty, enter \'D\'\n");
        printf("\tTo quit the game, enter \'N\'\n\n");
        scanf("\t %c", &cMenuSelection);
        system("clear");

        if (cMenuSelection == 'C' || cMenuSelection == 'c') {
            cMenuSelection = '\0';
            do {
                if(cDifficulty == 'E' || cDifficulty == 'e') {
                    GenNums(cDifficulty);
                    printf("\n\tGet ready for your 3 numbers...\n\n");
                    Countdown(iCurrentTime, iTimePast, cDifficulty);
                    printf("\n\tHere are your numbers to remember:\n\n\t%d\t%d\t%d\n", iRandNum1, iRandNum2, iRandNum3);
                    Countdown(iCurrentTime, iTimePast, cDifficulty);

                    system("clear");
                    printf("\n\tWhat were the 3 numbers?\n\n");
                    scanf("%d%d%d", &iResponse1, &iResponse2, &iResponse3);

                    if(iRandNum1 == iResponse1 && iRandNum2 == iResponse2 && iRandNum3 == iResponse3) {
                        printf("\n\tThat's correct! You remembered the 3 numbers!\n\n");
                        Correct = true;
                        Countdown(iCurrentTime, iTimePast, cDifficulty);
                    }
                    else {
                        printf("\n\tSorry, that doesn't seem to be right, try again!\n");
                        Countdown(iCurrentTime, iTimePast, cDifficulty);
                        continue;
                    }
                }
                else if(cDifficulty == 'N' || cDifficulty == 'n') {
                    GenNums(cDifficulty);
                    printf("\n\tGet ready for your 5 numbers...\n\n");
                    Countdown(iCurrentTime, iTimePast, cDifficulty);
                    printf("\n\tHere are your numbers to remember:\n\n\t%d\t%d\t%d\t%d\t%d\n", iRandNum1, iRandNum2, iRandNum3, iRandNum4, iRandNum5);
                    Countdown(iCurrentTime, iTimePast, cDifficulty);

                    system("clear");
                    printf("\n\tWhat were the 5 numbers?\n\n");
                    scanf("%d%d%d%d%d", &iResponse1, &iResponse2, &iResponse3, &iResponse4, &iResponse5);

                    if(iRandNum1 == iResponse1 && iRandNum2 == iResponse2 && iRandNum3 == iResponse3 
                    && iRandNum4 == iResponse4 && iRandNum5 == iResponse5) {
                        printf("\n\tThat's correct! You remembered the 5 numbers!\n\n");
                        Countdown(iCurrentTime, iTimePast, cDifficulty);
                        Correct = true;
                    }
                    else {
                        printf("\n\tSorry, that doesn't seem to be right, try again!\n");
                        Countdown(iCurrentTime, iTimePast, cDifficulty);
                        continue;
                    }
                }
                else if (cDifficulty == 'H' || cDifficulty == 'h') {
                    GenNums(cDifficulty);
                    printf("\n\tGet ready for your 5 numbers...\n\n");
                    Countdown(iCurrentTime, iTimePast, cDifficulty);
                    printf("\n\tHere are your numbers to remember:\n\n%d\t%d\t%d\t%d\t%d\n", iRandNum1, iRandNum2, iRandNum3, iRandNum4, iRandNum5);
                    Countdown(iCurrentTime, iTimePast, cDifficulty);

                    system("clear");
                    printf("\n\tWhat were the 5 numbers?\n\n");
                    scanf("%d%d%d%d%d", &iResponse1, &iResponse2, &iResponse3, &iResponse4, &iResponse5);

                    if(iRandNum1 == iResponse1 && iRandNum2 == iResponse2 && iRandNum3 == iResponse3) {
                        printf("\n\tThat's correct! You remembered the 5 numbers!\n\n");
                        Correct = true;
                        Countdown(iCurrentTime, iTimePast, cDifficulty);
                    }
                    else {
                        printf("\n\tSorry, that doesn't seem to be right, try again!\n\n");
                        Countdown(iCurrentTime, iTimePast, cDifficulty);
                        continue;
                    }
                }

            } while(Correct == false);
        }

        //Checks if the user wants to quit the program
        else if (cMenuSelection == 'N' || cMenuSelection == 'n') {
            cMenuSelection = '\0';
            system("clear");
            printf("\n\tThank you for playing\n\n\tGoodbye!\n");
            bUserInterface = false;
            continue;
        }

        //Checks if the user wants to change the difficulty
        else if (cMenuSelection == 'D' || cMenuSelection == 'd') {
            cMenuSelection = '\0';
            do {
                system("clear");
                printf("\t\tDIFFICULTY SELECTION MENU\n\n");
                printf("\tFor Easy enter \'E\'\n");
                printf("\tFor Normal enter \'N\'\n");
                printf("\tFor Hard enter \'H\'\n");
                scanf(" %c", &cDifficulty);
            } 
            //Ensures that valid option has been entered
            while ( cDifficulty != 'E' && cDifficulty != 'e' && cDifficulty != 'N' 
            && cDifficulty != 'n' && cDifficulty != 'H'&& cDifficulty != 'h'
            );
        }
    } while (bUserInterface);
    return 0;
}

/****************************/
//        FUNCTIONS
/****************************/

//     *GenNums Function*
//Generates random numbers for game
void GenNums(char Diff) {
    iRandNum1 = rand() % 100;
    iRandNum2 = rand() % 100;
    iRandNum3 = rand() % 100;

    if (Diff == 'N' || Diff == 'n' || Diff == 'H' || Diff == 'h') {
    iRandNum4 = rand() % 100;
    iRandNum5 = rand() % 100;
    }
}

//     *Countdown Function*
//Counts allows user to view numbers before they disappear
void Countdown(int CurTime, int TimePast, char Diff) {
    if (Diff == 'E' || Diff == 'e' || Diff == 'N' || Diff == 'n') {
        CurTime = time(NULL);
        do { TimePast = time(NULL); } while ((TimePast - CurTime) < 5);
    }
    else if (Diff == 'H' || Diff == 'h') {
        CurTime = time(NULL);
        do { TimePast = time(NULL); } while ((TimePast - CurTime) < 3);
    }
}