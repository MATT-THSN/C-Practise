/* 
* App name: CountSpec
* Desc: Takes 3 user inputs, starting number, ending number and number to increment by
* Date Modified: 25/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int startNum;
    int endNum;
    int incNum;

    printf("Enter a starting number, end number and a value to increment by:\n\n");
    scanf("%d%d%d", &startNum, &endNum, &incNum);

    while(startNum <= endNum) {
        printf("%d\n", startNum);
        startNum = startNum + incNum;
    }
}