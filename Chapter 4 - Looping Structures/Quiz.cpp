/* 
* App name: Quiz program
* Desc: Asks the user how many questions they want to be asked, asks questions
* Date Modified: 25/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int request = 0;
    int answer = 0;
    int x = 1;
    int y = 0;
    int z = 0;

    printf("How many questions do you want to be asked?\n");
    scanf("%d", &request);

    for (int count = 0; count < request; count++) {
        printf("\nQuestion %d.\n%d * %d = ", x++, y = rand() % 10, z = rand() % 10);
        scanf("%d", &answer);

        if (y * z == answer) {
            printf("\nThat's the correct answer\n");
        }
        else {
            printf("\nThat's the wrong answer\n");
        }
    }
}