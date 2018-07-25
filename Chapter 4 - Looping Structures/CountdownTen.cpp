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

    while(counter >= 0) {
        if ((counter % 10) == 0) {
            printf("%d\n", counter);
        }
        counter--;
    }
}