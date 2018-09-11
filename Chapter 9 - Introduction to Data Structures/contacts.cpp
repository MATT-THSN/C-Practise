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
    char number[10];
} cont;

#include <stdio.h>
#include <stdlib.h>

//FUNCTION PROTOTYPES
void addContacts(cont *, int *);
void addContactsBasic(cont *, int *);
void printContacts(cont *, const int *);

int main(void) {
    //New instance of contacts struct
    cont friends[5] = {0};
    //Variables
    bool run = true;
    int friendsAdded = 0;
    int menSel = 0;

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
                    addContacts(friends, &friendsAdded);
                    menSel = 0;
                break;

                case 2:
                    printContacts(friends, &friendsAdded);
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

/*
* FUNCTION DEFINTION
* DESC: Adds contacts
* Perams: instance of contacts array, number of contacts added 
*/
void addContactsBasic(cont * friends, int * contsAdded) {
    system("clear");
    printf("\n\tADDING CONTACT\n");
    printf("\n\tEnter name of friend: ");
    scanf("%s", friends[*contsAdded].names);
    printf("\tEnter number of friend: ");
    scanf("%s", friends[*contsAdded].number);
    system("clear");
    printf("\n\tContact Added!\n");
    *contsAdded += 1;
}

/*
* FUNCTION DEFINTION
* DESC: Switch that controls contact adding
* Perams: instance of contacts array, number of contacts added 
*/
void addContacts(cont * friends, int * contsAdded) {
    switch(*contsAdded) {
        //Each case adds a new friend
        case 0:
            addContactsBasic(friends, *&contsAdded);
        break;

        case 1:
            addContactsBasic(friends, *&contsAdded);
        break;

        case 2:
            addContactsBasic(friends, *&contsAdded);
        break;

        case 3:
            addContactsBasic(friends, *&contsAdded);
        break;

        case 4:
            addContactsBasic(friends, *&contsAdded);
        break;

        default:
        system("clear");
        printf("\n\tCan't add anymore contacts I'm afraid\n");
        break;
    }
}

/*
* FUNCTION DEFINTION
* DESC: Prints stored contacts
* Perams: instance of contacts array, number of contacts added 
*/
void printContacts(cont * friends, const int * contsAdded) {
    system("clear");
    if (int x = 0 < *contsAdded) {
        printf("\n\tDISPLAYING CONTACT(S) \n");
        for(int x = 0; x < *contsAdded; x++) {
            printf("\n\tName of contact: %s\n\tNumber of contact: %s\n", friends[x].names, friends[x].number);
        }
    }
    else {
        printf("\n\tNo contacts to display\n");
    }
}