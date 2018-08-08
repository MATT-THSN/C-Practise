/* 
* Programming Practise File
* Desc: Store 10 Numbers
* Date Modified: 08/08/2018
* Author: Matthew Thompson
*/

/*
    - Build a program that uses a single-dimension array to store 10 numbers input by a user.
    - After inputting the numbers, the user should see a menu with two options to sort and print the 10 numbers in ascending or descending order.
*/

#include <stdio.h>
#include <stdlib.h>

int iTenNums[10] = {0};

void MenuSys();

int main(void) {

    printf("\n\tThis program asks for 10 numbers and can sort them for you");
    printf("\n\tGive me 10 numbers you'd like me to store: ");
    scanf("%d%d%d%d%d%d%d%d%d%d", &iTenNums[0], &iTenNums[1], &iTenNums[2], &iTenNums[3], &iTenNums[4], &iTenNums[5], &iTenNums[6], &iTenNums[7], &iTenNums[8], &iTenNums[9]);

    for (int x = 0; x < 10; x++) {
        printf("\n\t[%d]", iTenNums[x]);
    }
    getchar();
}

void MenuSys() {

};