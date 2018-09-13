/* 
* Programming Practise File
* Desc: File Input & Output challenge 1
* Date Modified: 13/09/2018
* Author: Matthew Thompson
*/

/*
    - Using the superheroes.dat file from Challenge 1, build another program that uses
      the fscanf() function for reading each record and printing field information to standard
      output until the end-of-file is reached. Include an error-handling routine that notifies
      the user of any system errors and exits the program.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //Setup variables
  FILE *ptr;
  char *name[15];
  char *power[15];

  //Open file
  ptr = fopen("superheroes.dat", "r");
  if(ptr == NULL) {
    goto ErrorHandler;
  }
  
  //Printing of data
  printf("\nHero's Name\tSuper Power\n");
  fscanf(ptr, "%s%s", name, power);
  while(!feof(ptr)) {
    printf("\n%s\t%s", name, power);
    fscanf(ptr, "%s%s", name, power);
  }

  //Close file, return 0
  fclose(ptr);
  return 0;

  //Error Handle
  ErrorHandler:
    printf("Unable to open file");
    exit(EXIT_FAILURE); 
}
