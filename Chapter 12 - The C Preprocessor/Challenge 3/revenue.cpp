/* 
* Programming Practise File
* Desc: The C Preprocessor Challenge 3
* Date Modified: 14/09/2018
* Author: Matthew Thompson
*/

/*
    - Build a similar to challenge 1 that uses a macro to calculate the total revenue.
        *Use the following formula to calculate the total revenue: price * quantity
*/

#include <stdio.h>
#include <stdlib.h>
#define REVENUE(p, q) (p * q)

int main(void) {
    float price = 0.0;
    int quantity = 0;

    printf("\n\tRevenue Calculator\n");
    printf("Enter your price value and quantity sold: ");
    scanf("%f%d", &price, &quantity);
    printf("\n\tHere's your revenue: %.2f", REVENUE(price, quantity));
}