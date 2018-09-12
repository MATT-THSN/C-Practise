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
void viewContact(contacts *, const int *);
void reAlloc(contacts *, int *);

int main(void) {
    int contsAdded = 0;
    int currentAlloc = 1;
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
        menuSelc = 0;
        printf("\n\tCONTACTS APP\n\n");
        printf("\t#1 Add a contact");
        printf("\n\t#2 Modify a contact");
        printf("\n\t#3 View contacts");
        printf("\n\t#4 QUIT");
        printf("\n\tInput: ");
        scanf("%d", &menuSelc);
        switch (menuSelc) {
            case 1:
                addContact(contactsInstance, &contsAdded);
                printf("%s", contactsInstance[contsAdded].name);
                printf("%s", contactsInstance[contsAdded].number);
            break;

            case 2:
                //
            break;

            case 3:
            printf("H-");
                viewContact(contactsInstance, &contsAdded);
            break;

            case 4:
                run = !run;
            break;
        }
    } while (run);
}

void reAlloc(contacts *contactInstance, int * currentAlloc) {
    contactInstance = (struct contacts*) realloc(currentAlloc, sizeof(struct contacts));
    if(contactInstance == NULL) {
        printf("\n\tUnable to reallocate memory");
    }
    *currentAlloc += 1;
}

void addContact(contacts * contactsInstance, int * contsAdded) {
    system("clear");
    contactsInstance[*contsAdded].name = (char *) calloc(20, sizeof(char *)); 
    printf("\n\tAdd a name: "); scanf("%s", contactsInstance[*contsAdded].name);
    printf("\tAdd a number: "); scanf("%s", contactsInstance[*contsAdded].number);
    if(*contsAdded >= 1) {
        reAlloc(*&contactsInstance, *&contsAdded);
    }
}

void viewContact(contacts * contactsInstance, const int * contsAdded) {
    printf("A-");
    for(int x = 0; x <= *contsAdded; x++) {
        printf("\n\t#%d Name: %s Phone: %s", *contsAdded, contactsInstance[x].name, contactsInstance[x].number);
    }
}