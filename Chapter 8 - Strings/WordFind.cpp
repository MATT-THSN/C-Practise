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
    char *strGame[5] = {
        "ADELANGUAGEFERVZ0PIBMOU",
        "ZBPOINTERSKLML00PMNOCOT",
        "PODSTRINGGDIWHIEEICERLS",
        "YVCPROGRAMMERWQKNULTHMD",
        "UKUNIXFIMWXIZEQZINPUTEX"
    };

    char answer[80] = {0};
    int displayed = 0;
    int x;
    int startTime = 0;
    system("clear");

    printf("\n\n\tWord Find\n\n");
    startTime = time(NULL);

    for(x = 0; x < 5; x++) {
        /* DISPLAY TEXT FOR FEW SECONDS */
        while(startTime + 3 > time(NULL)) {
            if (displayed == 0) {
                printf("\nFind a word in: \n\n");
                printf("%s\n\n", strGame[x]);
                displayed = 1;
            } //End If
        } // End while loop
    
    system("clear");
    printf("\nEnter word found: ");
    scanf("%s", answer);
    checkAnswer(strGame[x], answer);

    displayed = 0;
    startTime = time(NULL);
    
    }// End for loop
    return 0;
} //End main

void checkAnswer(char *string1, char string2[]) {
    int x;
    /* Convert answer to UPPER CASE to perform a valid comparison */
    for (x = 0; x <= strlen(string2); x++) {
        string2[x] = toupper(string2[x]);
    }
    if (strstr(string1, string2) != 0 && string2[0] != 0) {
        printf("\nGreat job!\n");
    }
    else {
        printf("\nSorry, word not found!\n");
    }
} // End Check Answer