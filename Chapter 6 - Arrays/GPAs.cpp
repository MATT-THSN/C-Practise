/* 
* Programming Practise File
* Desc: GPA average calculator
* Date Modified: 03/09/2018
* Author: Matthew Thompson
*/

/*
    - Build a program that uses a single-dimension array to store 30 GPA values, insertable by the user.
    - Everytime they enter a GPA, give the option to calculate their GPA average or enter another GPA
*/

#include <stdio.h>
#include <stdlib.h>

//VARIABLES
float fValues[30] = {0};
bool keepRunning = true;

//FUNCTIONS
void ViewGPA();
void ValInsert();
void AvgCalc();

/*
*   MAIN FUNCTION
*   Runs the U.I for program interaction
*   Returns void
*/
int main(void) {
    while (keepRunning) {        
        int iMenuSelector = 0;
        printf("\n\tGPA Application");
        printf("\n\n\t\'1\' - View Stored GPAs");
        printf("\n\t\'2\' - Add a GPA Value");
        printf("\n\t\'3\' - Quit program");
        printf("\n\n\tMake a selection: ");
        scanf("%d", &iMenuSelector);

        switch(iMenuSelector) 
        {
            case 1:
            ViewGPA();
            break;

            case 2:
            ValInsert();
            break;

            case 3:
            keepRunning = !keepRunning;
            break;

            default:
            printf("\n\n\tNot a valid option\n");
            break;
        }
    }
}

void ViewGPA(){
    for(int i = 0; i < 30; i++) {
        if(fValues[i] != 0) {
            printf("%.1f ", fValues[i]);
        }
    }
}

void ValInsert(){
    int tmp = 0;
    do {
        for(int i = 0; i < 30; i++) {
            if(fValues[i] == 0) {
                scanf("%f", &fValues[i]);
            }
        }
        printf("\n\n\tDo you want to add another GPA?\n\t1 for Yes\n\t2 for No\n\n");
        scanf("%d", &tmp);
    } while(tmp == 0);
}

void AvgCalc(){

}