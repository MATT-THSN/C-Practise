/* 
* Programming Practise File
* Desc: Store 5 names
* Date Modified: 06/09/2018
* Author: Matthew Thompson
*/

/*
    - 2 dimentional array, stores up to five names. 
    - Asks for the user to input a new name, also asks to view added names
*/

#include <stdio.h>
#include <stdlib.h>

//VARIABLES
char aNames[5][50];
int index = 0;
int iUserSel = 0;
bool progRun = true;

//FUNCTION PROTOTYPES
void stringRead(int val);

int main(void) {

    printf("\n\tAdd a name: ");            
    scanf(" %s", &aNames[0][0]);
    index++;

    do {
        do {
            iUserSel = 0;
            printf("\n\tDo you want to add another name? #1");
            printf("\n\tDo you want to view names added? #2");
            printf("\n\tQuit                             #3");
            printf("\n\n\tEnter choice: "); 
            scanf("%d", &iUserSel);
        } while (iUserSel < 0 || iUserSel > 3);
        
        if(iUserSel == 1) {
            switch(index) {
                case 1: 
                    system("clear");
                    printf("\n\tAdd a name: ");
                    scanf(" %s", &aNames[1][0]);
                    index++;
                break;

                case 2:
                    system("clear");
                    printf("\n\tAdd a name: ");
                    scanf(" %s", &aNames[2][0]);
                    index++;
                break;

                case 3:
                    system("clear");
                    printf("\n\tAdd a name: ");
                    scanf(" %s", &aNames[3][0]);
                    index++;
                break;

                case 4:
                    system("clear");
                    printf("\n\tAdd a name: ");
                    scanf(" %s", &aNames[4][0]);
                    index++;
                break;

                default:
                    system("clear");
                    printf("\n\tERROR Cannot add anymore names!");
                break;
            }
        }
        else if(iUserSel == 2) {
            switch(index) {
                case 0:
                    stringRead(0);
                break;

                case 1:
                    stringRead(0);
                    stringRead(1);
                break;

                case 2:
                    stringRead(0);
                    stringRead(1);
                    stringRead(2);
                break;

                case 3:
                    stringRead(0);
                    stringRead(1);
                    stringRead(2);
                    stringRead(3);
                break;

                case 4:
                    stringRead(0);
                    stringRead(1);
                    stringRead(2);
                    stringRead(3);
                    stringRead(4);
                break;
            }
        }
        else if(iUserSel == 3) {
            progRun = !progRun;
        }
        else {
            printf("Not a valid option");
        }
        
    } while (progRun);
}

/*
* FUNCTION DECLARATION
* Loops through at prints ever character in name
* Returns VOID
*/
void stringRead(int val) {
    printf("\n\t");
    for(int x = 0; x < 50; x++) {
        printf("%c", aNames[val][x]);
    }
}
