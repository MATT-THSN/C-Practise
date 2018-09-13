/* 
* Programming Practise File
* Desc: File Input & Output challenge 3
* Date Modified: 13/09/2018
* Author: Matthew Thompson
*/

/*
    - Modify the Character Roster program to enable the user to enter multiple entries
      without quitting and restarting the program

    - Continue to modify the Character Roster program to enable the user to modify
      or delete the characters and their levels in the roster.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int response;
  char *lName[20] = {0};
  char *fName[20] = {0};
  char *level[20] = {0};
  FILE *pWrite;
  FILE *pRead;
  bool run = true;

  do {
    printf("\n\tCharacter Roster\n");
    printf("\n1\tAdd New Character\n");
    printf("\n2\tList Characters\n\n");
    printf("Select an option: ");
    scanf("%d", &response);

    switch(response) {
      case 1:
        system("clear");
        //User is adding a new character - get the info
        printf("\nEnter character's first name ");
        scanf("%s", fName);

        printf("\nEnter character's last name ");
        scanf("%s", lName);

        printf("\nEnter character level: ");
        scanf("%s", level);

        pWrite = fopen("character_roster.dat", "a");
        if(pWrite != NULL) {
          fprintf(pWrite, "%s %s %s\n", fName, lName, level);
          fclose(pWrite);
        } else goto ErrorHandler; //There is a file i/o error
      break;

      case 2:
        system("clear");
        //User wants to list all characters
        pRead = fopen("character_roster.dat", "r");
        if(pRead != NULL) {
          printf("\nCharacter Roster\n");
          while(!feof(pRead)) {
            fscanf(pRead, "%s %s %s", fName, lName, level);

            if(!feof(pRead)) {
              printf("\n%s %s\t%s", fName, lName, level);
            }
            printf("\n");
          }
        } else goto ErrorHandler; //There is a file i/o error
      break;

      default:
        printf("\nInvalid selection\n");
      break;
    }
  } while(run);

  exit(EXIT_SUCCESS); //Exit program normally
  ErrorHandler: perror("The following error occured");
  exit(EXIT_FAILURE); //Exit program with error
} //End Main