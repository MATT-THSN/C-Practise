/* 
* App name: CountdownTen
* Desc: Counts down from 100 to 0 in increments of 10
* Date Modified: 25/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int counter = 100;

    system("clean");
    for(int x = 0; x < 1; x++) {
        printf("%d\n", counter);
    }

    while(counter > 0) {
        printf("%d\n", counter = counter - 10);
    }
}