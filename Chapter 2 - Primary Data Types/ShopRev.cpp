/*
* Author: Matthew Thompson
* Desc: Challenge 4 in Chapter 2
*/

#include <stdio.h>

int main(void) {
    float fPrice = 0;
    int iQuantity = 0;

    printf("\nGive me the price of the item: ");   scanf("%f", &fPrice);
    printf("\nGive me the quantity: ");            scanf("%d", &iQuantity);
    printf("\n\n\tCalculating...\n");
    printf("The cost is: %0.2f", fPrice * iQuantity);
    getchar();
}