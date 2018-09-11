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
} friends;