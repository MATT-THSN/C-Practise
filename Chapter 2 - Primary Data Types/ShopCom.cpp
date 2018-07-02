/*
* Author: Matthew Thompson
* Desc: Challenge 4 in Chapter 2
*/

#include <stdio.h>

int main(void) {
    int const iRate = 2;
    float fSalesPrice = 0;
    float fCost = 0;

    printf("\nGive me the sales price: ");
    scanf("%f", &fSalesPrice);

    printf("\nGive me the cost: ");
    scanf("%f", &fCost);

    printf("\nYour commission is: %0.2f", (iRate * (fSalesPrice - fCost)));
    getchar();
}