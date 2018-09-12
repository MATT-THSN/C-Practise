/* 
* Programming Practise File
* Desc: Data Structures challenges
* Date Modified: 12/09/2018
* Author: Matthew Thompson
*/

/*
    -   Create a phonebook program that enables users to enter names and phone numbers of
        friends and acquintances. Create a structure to hold contact information, and use
        calloc() to reserve the first memory segment. The user should be able to add or modify
        phone book entries through a menu. Use the realloc() function to add contiguous memory
        segments to the original memory block when a user adds a new book entry.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct contacts {
    char *name;
    char number[10];
} contacts;

void addContact(contacts *, int *);
void reAlloc(contacts *, int *);

int main(void) {
    int contsAdded = 0;
    int currentAlloc = 0;
    int menuSelc = 0;
    bool run = true;

    //Allocates struct contacts memory
    contacts *contactsInstance = (struct contacts*) calloc(currentAlloc, sizeof(struct contacts));
    //If unable to allocate, return 1
    if(contactsInstance == NULL) {
        return 1;
    }

    //MENU U.I
    do {
        printf("\n\tCONTACTS APP\n\n");
        printf("\t#1 Add a contact");
        printf("\n\t#2 Modify a contact");
        printf("\n\t#3 QUIT");
        scanf("%d", &menuSelc);
        switch (menuSelc) {
            case 1:
                //
            break;

            case 2:
                //
            break;

            case 3:
                run = !run;
            break;
        }
    } while (run);
}

void reAlloc(contacts *contactInstance, int * currentAlloc) {
    contactInstance = (struct contacts*) realloc(currentAlloc, sizeof(struct contacts));
}

void addContact(contacts * contactsInstance, int * contsAdded) {
    system("clear");
    contactsInstance[*contsAdded].name = (char *) calloc(20, sizeof(char *)); 
    printf("\n\tAdd a name: "); printf("\n\tInput: "); 
    scanf("%s", contactsInstance[*contsAdded].name);
    printf("\tAdd a number: "); printf("\n\tInput: ");
    scanf("%s", contactsInstance[*contsAdded].number);
}
