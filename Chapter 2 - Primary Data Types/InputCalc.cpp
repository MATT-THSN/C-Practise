/*
* Author: Matthew Thompson
* Desc: Challenge 2 in Chapter 2
*/

#include <stdio.h>

int main(void) {
  int iUserA = 0;
  int iUserB = 0;
  int iUserX = 0;
  int iUserY = 0;
  
  printf("Give me a number for A:");
  scanf("%d", &iUserA);

  printf("Give me a number for B:");
  scanf("%d", &iUserB);

  printf("Give me a number for X:");
  scanf("%d", &iUserX);

  printf("Give me a number for Y:");
  scanf("%d", &iUserY);

  printf("The answer is: %d", (iUserA - iUserB) + (iUserX - iUserY));
}