/* 
* App name: CountFive
* Desc: Counts up from 1 to 100 in increments of 5
* Date Modified: 25/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int counter = 0;
    
    do {
        printf("%d\n", counter = counter + 5);
    } while (counter != 100);
}