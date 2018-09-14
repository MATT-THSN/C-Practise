/* 
* Programming Practise File
* Desc: The C Preprocessor Challenge 2
* Date Modified: 14/09/2018
* Author: Matthew Thompson
*/

/*
    - Build a cample program that prompts a user to input the lengths and width of a rectangle using a macro to calculate
      the perimeter. After retrieving the length and width, pass the data as arguments in a call to the macro. Use the 
      following algorithm to derive the perimeter of a rectangle:

      Perimeter of a rectangle = 2(length) + 2(width)
*/

#include <stdio.h>
#include <stdlib.h>

#define PERIMETER(x, y) (x * y)

int main(void) {
    int x = 0;
    int y = 0;

    printf("\n\tPerimeter Calculator\n");
    printf("\n\tEnter the length and the width: ");
    scanf("%d%d", &x, &y);
    printf("\n\t The Perimeter is: %.2f", PERIMETER((float) x,(float) y));
}