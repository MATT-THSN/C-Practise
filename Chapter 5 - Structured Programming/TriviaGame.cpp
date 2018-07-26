/* 
* App name: Trivia
* Desc: Displays topics and asks a question based on selected topic
* Date Modified: 26/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MainDisplay(void);
void Questions(int Category);
int AnswerTracker(bool);
void EndingDisplay(void);

int main(void) {
    system("clear");
    MainDisplay();
    return 0;
}

void MainDisplay(void) {
    int iSelection = 0;
    printf("\n\tTRIVIA GAME\n");
    printf("\n\tCategories:");
    printf("\n\tAnimal Trivia: Enter \'1\'");
    printf("\n\tVehicle Trivia: Enter \'2\'");
    printf("\n\tHistory Trivia: Enter \'3\'");
    printf("\n\tMovie Trivia: Enter \'4\'\n\n");
    printf("Selection: ");
    
    scanf("%d", &iSelection);
    system("clear");
    Questions(iSelection);
}

void Questions(int Category) {
    switch(Category) {
        default:
            printf("Error: Not a valid option");
            MainDisplay(); 
        break;
        case 1:
            int iSelection = 0;

            do {
                if(!(iSelection >= 1 && iSelection <= 4)) { 
                    printf("\nYou need to select a valid option\n"); 
                }
                printf("\n\tAnimal Trivia Question.");
                printf("\n\n\tWhat spiny venous fish, common in home aquariums, has become an invasive species in the Caribbean Sea and U.S. Atlantic coastal waters?\n");
                printf("1. Lion Fish\n");
                printf("2. Cat Fish\n");
                printf("3. Gold Fish\n");
                printf("4. Clown Fish\n");
                scanf("%d", &iSelection);
                system("clear");
            } while(!(iSelection >= 1 && iSelection <= 4));

            if(iSelection == 1) {
                AnswerTracker(true);
            }
            else {
                AnswerTracker(false);
            }
        break;
    } 
}