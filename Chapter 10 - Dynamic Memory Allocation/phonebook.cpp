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

struct contacts {
    char *name;
    char *number;
};

void addContact(contacts *, int &);
void reAlloc(contacts *, int &);
void displayContacts(contacts *, int &);

int main(void) {
    int currentAlloc = 1;
    bool run = true;
    int menuSelc = 0;

    //Allocates struct contacts memory
    contacts *contactsInstance = (contacts*) calloc(currentAlloc, currentAlloc * sizeof(struct contacts));
    //If unable to allocate, return 1
    if(contactsInstance == NULL) {
        return 1;
    }

    //MENU U.I
    do {
        printf("\n\tCONTACTS APP\n\n");
        printf("\t#1 Add a contact");
        printf("\n\t#2 Modify a contact");
        printf("\n\t#3 View contacts");
        printf("\n\t#4 QUIT");
        printf("\n\tInput: ");
        scanf("%d", &menuSelc);
        switch (menuSelc) {
            case 1:
                if(currentAlloc != 1) {
                    reAlloc(contactsInstance, currentAlloc);
                }
                addContact(contactsInstance, currentAlloc);
                menuSelc = 0;
            break;

            case 2:
                menuSelc = 0;
            break;

            case 3:
                displayContacts(contactsInstance, currentAlloc);
                menuSelc = 0;
            break;

            case 4:
                run = !run;
            break;
        }
    } while (run);
}

void reAlloc(contacts *contactsInstance, int &currentAlloc) {
    void *temp = realloc(contactsInstance, currentAlloc * sizeof(struct contacts));
    if(contactsInstance == NULL) {
        printf("\n\tUnable to reallocate memory");
    }
    contactsInstance = (struct contacts*) temp;
}

void addContact(contacts * contactsInstance, int &currentAlloc) {
    contactsInstance[currentAlloc - 1].name = (char*) calloc(10, sizeof(char));// (char*) calloc(10, sizeof(char))
	contactsInstance[currentAlloc - 1].number = (char*) calloc(10, sizeof(char));//  new char[10];
    printf("\n\tAdd a name: "); scanf("%s", contactsInstance[(currentAlloc - 1)].name);
    printf("\tAdd a number: "); scanf("%s", contactsInstance[(currentAlloc - 1)].number);
    currentAlloc++;
}

void displayContacts(contacts *contactsInstance, int &currentAlloc) {
    for(int x = 0; x < (currentAlloc - 1); x++) {
        printf("\n\n\tContact #%d", x);
        printf("\n\tName: %s", contactsInstance[x].name);
        printf("\n\tPhone: %s\n", contactsInstance[x].number);
    }
}