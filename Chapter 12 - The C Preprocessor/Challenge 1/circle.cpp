/* 
* Programming Practise File
* Desc: The C Preprocessor Challenge 1
* Date Modified: 14/09/2018
* Author: Matthew Thompson
*/

/*
    - Build a program that creates a macro to calculate the area of a circle
*/

#include <stdio.h>
#include <stdlib.h> 

#define AREA(p, r) ((r * r) * p)

int main(void) {
    int r = 0;

    printf("\n\tCircle Area Calculator\n");
    printf("\n\tEnter the radius of the circle: ");
    scanf("%d", &r);
    printf("\n\tThe area of the circle is: %.2fcm", AREA(3.14, r));
}
