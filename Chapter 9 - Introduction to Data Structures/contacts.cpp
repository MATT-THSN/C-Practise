/* 
* Programming Practise File
* Desc: Data Structures challenges
* Date Modified: 11/09/2018
* Author: Matthew Thompson
*/

/*
    - Create a program that uses a structure array to hold contact information for your friends.
        * The program should allow the user to enter up to five friends and print the phone book's current entries.
        * Create functions to add entries in the phone book and to print valid phone book entries.
        * Do not display phone book entries that are invalid or NULL.
*/

typedef struct contacts {
    char names[10];
    int pNumber;
} cont;

#include <stdio.h>
#include <stdlib.h>

void addContacts(cont *);
void printContacts(cont *);

int main(void) {
    //New instance of contacts struct
    cont friends[5] = {0};
    int friendsAdded = 0;
    int menSel = 0;

    bool run = true;
    do {
        //Menu
        printf("\n\tCONTACTS APP\n");
        printf("\n\t#1 Add a friend");
        printf("\n\t#2 Display contacts");
        printf("\n\t#3 Quit");
        printf("\n\tInput: ");
        scanf("%d", &menSel);
        //Run corresponding action after input
        while(menSel > 0 && menSel < 4) {
            switch(menSel) {
                case 1:
                    printf("\n\tCall add friend func");
                    menSel = 0;
                break;

                case 2:
                    printf("\n\tCall print friend contact func");
                    menSel = 0;
                break;

                case 3:
                    run = !run;
                    menSel = 0;
                break;
            }
        }
    } while(run);
}