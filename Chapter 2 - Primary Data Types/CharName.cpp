/*
* Author: Matthew Thompson
* Desc: Challenge 3 in Chapter 2
*/

#include <stdio.h>

int main(void) {
  char cName;

  printf("\nGive me an initial for the character: ");
  scanf("%c", &cName);

  printf("The initial you've given me is: %c", cName);
  getchar();
}