/* 
* App name: FunctionPrototypes
* Desc: Practise writing function prototypes and function definitions
* Date Modified: 26/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////
/*       Function Prototypes     */
///////////////////////////////////
float DivideTwoNumbers(int x, int y);
int WhoIsHigher(int x, int y);
void ATM(void);

int main(void) {
    ATM();
    return 0;
}

///////////////////////////////////
/*      Function Definitions     */
///////////////////////////////////
float DivideTwoNumbers(int x, int y) { 
    return x / y;
}

int WhoIsHigher(int x, int y) {
    if(x < y) return y; 
    else if(x > y) return x;
}

void ATM(void) {
    printf("\n\tATM MENU");
    printf("\n\n\tDisplay Balance");
    printf("\n\tWidthdraw funds");
    printf("\n\tDeposit funds");
    printf("\n\tExit\n");
    getchar();
}
