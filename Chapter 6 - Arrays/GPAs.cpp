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
float fValues[30] = {0.0};
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
            system("clear");
            ViewGPA();
            break;

            case 2:
            system("clear");
            ValInsert();
            break;

            case 3:
            system("clear");
            keepRunning = !keepRunning;
            break;

            default:
            system("clear");
            printf("\n\n\tNot a valid option\n");
            break;
        }
    }
}

/*
*   View GPA FUNCTION
*   Views stored GPA values
*   Returns void
*/
void ViewGPA(){
    system("clear");
    printf("\n\n\tHere are your values: ");
    for(int i = 0; i < 30; i++) {
        if(fValues[i] != 0) {
            printf("%.1f ", fValues[i]);
        }
    }
    printf("\n");
}

/*
*   GPA Average Calculation FUNCTION
*   Calculates the GPA Average
*   Returns void
*/
void AvgCalc(){
    int tmp = 0;
    float fCalc = 0.0;
    for(int i = 0; i < 30; i++) {
        if(fValues[i] != 0.0) {
            tmp++;
        }
    }

    int x = 0;
    for(x = 0; x < tmp; x++) {
        fCalc = fCalc + fValues[x];
    }
    printf("\n\tYour average is: %f\n\n", (fCalc / x));
}

/*
*   Value Insert FUNCTION
*   Inserts GPA values
*   Returns void
*/
void ValInsert(){
    int tmp = 0;
    system("clear");
    printf("\n\tInsert a GPA Value: ");
    
    for(int i = 0; i < 30; i++) {
        if(fValues[i] == 0.0) {
            scanf(" %f", &fValues[i]);
            break;
        }
    }

    system("clear");
    printf("\n\n\tDo you want to calculate your GPA average?\n\n\t1 for Yes\n\t2 for No\n\n\t:");
    scanf("%d", &tmp);
    switch (tmp) {
        case 1:
        AvgCalc();
        break;

        case 2:
        break;
    }
}
