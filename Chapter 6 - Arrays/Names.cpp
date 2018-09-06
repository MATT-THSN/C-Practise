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
char aNames[5][100];
int index = 0;
int iUserSel = 0;
bool progRun = true;

//FUNCTION PROTOTYPES
void stringRead(int val);

int main(void) {

    printf("\n\tAdd a name: ");            
    scanf(" %[^\n]%*c", &aNames[0][0]);
    //Input the first name

    do {
        do {
            iUserSel = 0;
            printf("\n\n\tDo you want to add another name? #1");
            printf("\n\tDo you want to view names added? #2");
            printf("\n\tQuit                             #3");
            printf("\n\n\tEnter choice: "); 
            scanf("%d", &iUserSel);
            //Choose from one of the options 
        } while (iUserSel < 0 || iUserSel > 3);
        //Keep asking until valid selection is made
        
        if(iUserSel == 1) {
            switch(index) {
                case 0: 
                    system("clear");
                    printf("\n\tAdd a name: ");
                    scanf(" %[^\n]%*c", &aNames[1][0]);
                    index++;
                    //Asking for a second name
                break;

                case 1:
                    system("clear");
                    printf("\n\tAdd a name: ");
                    scanf(" %[^\n]%*c", &aNames[2][0]);
                    index++;
                    //Asking for a third name
                break;

                case 2:
                    system("clear");
                    printf("\n\tAdd a name: ");
                    scanf(" %[^\n]%*c", &aNames[3][0]);
                    index++;
                    //Asking for a forth name
                break;

                case 3:
                    system("clear");
                    printf("\n\tAdd a name: ");
                    scanf(" %[^\n]%*c", &aNames[4][0]);
                    index++;
                    //Asking for a fifth name
                break;

                default:
                    system("clear");
                    printf("\n\tERROR Cannot add anymore names!");
                    //If trying to add a sixth name, deny and display message
                break;
            }
        }
        else if(iUserSel == 2) {
            switch(index) {
                case 0:
                    system("clear");
                    printf("\n\tNames currently stored: ");
                    stringRead(0);
                break;
                //Displays 1 name if only 1 name has been entered

                case 1:
                    system("clear");
                    printf("\n\tNames currently stored: ");
                    stringRead(0);
                    stringRead(1);
                break;
                //Displays 2 name if only 2 name has been entered

                case 2:
                    system("clear");
                    printf("\n\tNames currently stored: ");
                    stringRead(0);
                    stringRead(1);
                    stringRead(2);
                break;
                //Displays 3 name if only 3 name has been entered

                case 3:
                    system("clear");
                    printf("\n\tNames currently stored: ");
                    stringRead(0);
                    stringRead(1);
                    stringRead(2);
                    stringRead(3);
                break;
                //Displays 4 name if only 4 name has been entered

                case 4:
                    system("clear");
                    printf("\n\tNames currently stored: ");
                    stringRead(0);
                    stringRead(1);
                    stringRead(2);
                    stringRead(3);
                    stringRead(4);
                break;
                //Displays 5 name if only 5 name has been entered
            }
        }
        else if(iUserSel == 3) {
            progRun = !progRun;
            //Trigger program quit
        }
        else {
            printf("Not a valid option");
            //Display error if bad selection is made
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
    //Display character and loop
}
