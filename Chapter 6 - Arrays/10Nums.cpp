/* 
* Programming Practise File
* Desc: Store 10 Numbers
* Date Modified: 03/09/2018
* Author: Matthew Thompson
*/

/*
    - Build a program that uses a single-dimension array to store 10 numbers input by a user.
    - After inputting the numbers, the user should see a menu with two options to sort and print the 10 numbers in ascending or descending order.
*/

#include <stdio.h>
#include <stdlib.h>

///////// VARIABLES
int iTenNums[10] = {0};
int iuserOption = 0;

///////// FUNCTION PROTOTYPES
int MenuSys();
void AscFix();
void DescFix();
int AscSorter(int lv, int hv);
int DescSorter(int g, int l);

int main(void) {
    printf("\n\tThis program asks for 10 numbers and can sort them for you");
    printf("\n\tGive me 10 numbers you'd like me to store: ");
    scanf("%d%d%d%d%d%d%d%d%d%d", 
        &iTenNums[0], &iTenNums[1], 
        &iTenNums[2], &iTenNums[3], 
        &iTenNums[4], &iTenNums[5], 
        &iTenNums[6], &iTenNums[7], 
        &iTenNums[8], &iTenNums[9]);

    switch(MenuSys())
    {
        case 1: 
        system("clear");
        printf("\n\tDisplaying numbers in Ascending Order...\n");
        AscFix();
        printf("\n\t%d %d %d %d %d %d %d %d %d %d\n", 
            iTenNums[0], iTenNums[1], 
            iTenNums[2], iTenNums[3], 
            iTenNums[4], iTenNums[5], 
            iTenNums[6], iTenNums[7], 
            iTenNums[8], iTenNums[9]);
        break;

        case 2:
        system("clear");
        printf("\n\tDisplaying numbers in Descending Order...\n");
        DescFix();
        printf("\n\t%d %d %d %d %d %d %d %d %d %d\n", 
            iTenNums[0], iTenNums[1], 
            iTenNums[2], iTenNums[3], 
            iTenNums[4], iTenNums[5], 
            iTenNums[6], iTenNums[7], 
            iTenNums[8], iTenNums[9]);
        break;
    }
}

///////// FUNCTION DEFINITIONS
int MenuSys() {
    int tmp = 0;

    system("clear");
    printf("\n\t1. Display the numbers in Ascending order");
    printf("\n\t2. Display the numbers in Descending order");
    do {
        printf("\n\tEnter 1 or 2 to make a selection: ");
        scanf("%d", &tmp);
    } while(tmp < 1 || tmp > 2);
    return tmp;
};

// FUNCTION: AscSorter
// DESC: Checks a number against another, if second is highest, positions are swapped
int AscSorter(int lv, int hv) {
    int tmp = 0;
    if (iTenNums[lv] > iTenNums[hv]) {
        tmp = iTenNums[lv];
        iTenNums[lv] = iTenNums[hv];
        iTenNums[hv] = tmp;
        return 1;
    }
    else {
        return 0;
    }
};

// FUNCTION: DescSorter
// DESC: Checks a number against another, if second is lower, positions are swapped
int DescSorter(int lv, int hv) {
    int tmp = 0;
    if (iTenNums[lv] < iTenNums[hv]) {
        tmp = iTenNums[lv];
        iTenNums[lv] = iTenNums[hv];
        iTenNums[hv] = tmp;
        return 1;
    }
    else {
        return 0;
    }
};

void AscFix() {
    int tmp = 0;
    int iCounter = 0;
    do { 
        iCounter++;
        tmp = AscSorter(0, 1);
        tmp = AscSorter(1, 2);
        tmp = AscSorter(2, 3);
        tmp = AscSorter(3, 4);
        tmp = AscSorter(4, 5);
        tmp = AscSorter(5, 6);
        tmp = AscSorter(6, 7);
        tmp = AscSorter(7, 8);
        tmp = AscSorter(8, 9);
    } while(iCounter != 10);
};

void DescFix() {
    int tmp = 0;
    int iCounter = 0;
    do { 
        iCounter++;
        tmp = DescSorter(0, 1);
        tmp = DescSorter(1, 2);
        tmp = DescSorter(2, 3);
        tmp = DescSorter(3, 4);
        tmp = DescSorter(4, 5);
        tmp = DescSorter(5, 6);
        tmp = DescSorter(6, 7);
        tmp = DescSorter(7, 8);
        tmp = DescSorter(8, 9);
    } while(iCounter != 10);
};