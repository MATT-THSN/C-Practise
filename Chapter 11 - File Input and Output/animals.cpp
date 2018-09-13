/* 
* Programming Practise File
* Desc: File Input & Output challenge 2
* Date Modified: 13/09/2018
* Author: Matthew Thompson
*/

/*
    - Create a program that uses a menu with option to enter information about animals
      (Animal name, special feature, colour), print the animal information, or quit
      the program. Use data files and FILE pointers to store and print the information entered.
*/

#include <stdio.h>
#include <stdlib.h>

void addAnimal();
void readFile();
void fileCheck(FILE *);

int main(void) {
  bool run = true;
  int menuSelc = 0;

  //Menu
  do {
    menuSelc = 0;
    printf("\n\t#1 Add an animal");
    printf("\n\t#2 Show file");
    printf("\n\tInput: ");
    //Gets user selection
    scanf("%d", &menuSelc);
    //Runs corresponding selection
    switch(menuSelc) {
      case 1:
        addAnimal();
      break;

      case 2:
        readFile();
      break;

      default:
        printf("\n\n\tNot a valid menu option\n");
      break;
    }
  } while(run);
}

void fileCheck(FILE *fPtr) {
  if(fPtr == NULL) {
    system("clear");
    printf("\n\tCannot open file");
    exit(EXIT_FAILURE);
  }
}

void addAnimal() {
  char name[15];
  char trait[15];
  char colour[15];

  //Opens file
  FILE *fPtr;
  fPtr = fopen("animals.dat", "a");
  fileCheck(fPtr);

  //Gets input
  printf("\n\tGive an animal name, special trait and it's colour with a space between them\n");
  printf("\tInput: ");
  //Stores user input into variable, prints to file
  scanf("%s%s%s", name, trait, colour);
  fprintf(fPtr, "%s %s %s\n", name, trait, colour);
  fclose(fPtr);
}

void readFile() {
  char name[15];
  char trait[15];
  char colour[15];

  //Opens file
  FILE *fPtr;
  fPtr = fopen("animals.dat", "r");
  fileCheck(fPtr);

  //Prints data from file
  printf("\n\n\tName\tTrait\tColour\n");
  fscanf(fPtr, "%s%s%s", name, trait, colour);
  while(!feof(fPtr)) {
    printf("\t%s\t%s\t%s\n", name, trait, colour);
    fscanf(fPtr, "%s%s%s", name, trait, colour);
  }
  fclose(fPtr);
}
