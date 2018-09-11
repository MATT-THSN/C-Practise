/* 
* Programming Practise File
* Desc: Strings Challenge 4
* Date Modified: 10/09/2018
* Author: Matthew Thompson
*/

/*
    - Modify the Word Find game to include one or more of the following suggestions:
        * Add a menu to the Word Find game that lets the player choose the difficulty, less time will make it harder.
        * Incorperate multiple words into the text areas.
        * Track the player's score. For example, add 1 point for each word guessed correctly, and sub 1 point for each
        word guessed incorrectly.
        * Use the strlen() function to ensure the user's input string is the same length as the hidden word.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

//Function Prototypes
void checkAnswer(char *, char []);

int main(void) {
    //Array of garbled letters with words inside
    char *strGame[5] = {
        "ADELANGUAGEFERVZ0PIBMOU",
        "ZBPOINTERSKLML00PMNOCOT",
        "PODSTRINGGDIWHIEEICERLS",
        "YVCPROGRAMMERWQKNULTHMD",
        "UKUNIXFIMWXIZEQZINPUTEX"
    };

    //Variables
    char answer[80] = {0};
    int displayed = 0;
    int x;
    int startTime = 0;
    int difficulty = 0;
    system("clear");

    //App title
    printf("\n\n\tWelcome to Word Find\n\n");

    //Set start time to current time
    startTime = time(NULL);

    //Displays each string of garbled letters
    for(x = 0; x < 5; x++) {
        /* DISPLAY TEXT FOR FEW SECONDS */
        while(startTime + 3 > time(NULL)) {
            if (displayed == 0) {
                printf("\n\tFind a word in: \n\n");
                printf("\t%s\n\n", strGame[x]);
                displayed = 1;
            } //End If
        } // End while loop
    displayed = 0;
    startTime = time(NULL);
    
    //User enters a word they think they saw
    system("clear");
    printf("\n\tEnter word found: ");
    scanf("%s", answer);

    //Searches challenge string for the inputted answer
    checkAnswer(strGame[x], answer);
    
    }// End for loop
    return 0;
} //End main

void checkAnswer(char *string1, char string2[]) {
    int x;
    /* Convert answer to UPPER CASE to perform a valid comparison */
    for (x = 0; x <= strlen(string2); x++) {
        string2[x] = toupper(string2[x]);
    }
    //Compares two strings and checks if answer isn't null
    if (strstr(string1, string2) != 0 && string2[0] != 0) {
        //If correct print message
        printf("\nGreat job!\n");
    }
    else {
        //Otherwise show loose message
        printf("\nSorry, word not found!\n");
    }
} // End Check Answer