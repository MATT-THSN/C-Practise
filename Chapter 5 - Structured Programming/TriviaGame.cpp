/* 
* App name: Trivia
* Desc: Displays topics and asks a question based on selected topic
* Date Modified: 26/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Questions(int Category);
void EndingDisplay(void);

int iCorrectAnswers = 0;
int iIncorrectAnswers = 0;

int main(void) {
    system("clear");

    int iSelection = 0;
    printf("\n\tTRIVIA GAME\n");
    printf("\n\tCategories:");
    printf("\n\tAnimal Trivia: Enter \'1\'");
    printf("\n\tVehicle Trivia: Enter \'2\'");
    printf("\n\tHistory Trivia: Enter \'3\'");
    printf("\n\tMovie Trivia: Enter \'4\'");
    printf("\n\tQUIT: Enter \'5\'\n\n");
    printf("Selection: ");
    scanf("%d", &iSelection);
    
    system("clear");
    if(iSelection < 5) {
        Questions(iSelection);
    }
    else {
        EndingDisplay();
    }
    return 0;
}

void Questions(int Category) {
    int iSelection = 0;

    switch(Category) {
        default:
            printf("Error: Not a valid option");
        break;
        case 1:
            iSelection = 0;
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
                iCorrectAnswers++;
            }
            else {
                iCorrectAnswers--;
            }
        break;
        case 2:
            iSelection = 0;
            do {
                if(!(iSelection >= 1 && iSelection <= 4)) { 
                    printf("\nYou need to select a valid option\n"); 
                }
                printf("\n\tVehicle Trivia Question.");
                printf("\n\n\tThe vehicle manufacturer Volvo was founded in what country?\n");
                printf("1. Sweden\n");
                printf("2. Austria\n");
                printf("3. Saudi Arabia\n");
                printf("4. Switzerland\n");
                scanf("%d", &iSelection);
                system("clear");
            } while(!(iSelection >= 1 && iSelection <= 4));

            if(iSelection == 1) {
                iCorrectAnswers++;
            }
            else {
                iCorrectAnswers--;
            }
        break;
        case 3:
            iSelection = 0;
            do {
                if(!(iSelection >= 1 && iSelection <= 4)) { 
                    printf("\nYou need to select a valid option\n"); 
                }
                printf("\n\tHistory Trivia Question.");
                printf("\n\n\tOn the Apollo 11 moon mission, which astronaut stayed aloft in the command module while Neil Armstrong and Buzz Aldrin walked on the moon?\n");
                printf("1. Michael Collins\n");
                printf("2. Buzz Aldrin\n");
                printf("3. James McDuff\n");
                printf("4. Niel Armstrong\n");
                scanf("%d", &iSelection);
                system("clear");
            } while(!(iSelection >= 1 && iSelection <= 4));

            if(iSelection == 1) {
                iCorrectAnswers++;
            }
            else {
                iCorrectAnswers--;
            }
        break;
        case 4:
            iSelection = 0;
            do {
                if(!(iSelection >= 1 && iSelection <= 4)) { 
                    printf("\nYou need to select a valid option\n"); 
                }
                printf("\n\tMovie Trivia Question.");
                printf("\n\n\tWhat car did the character James Bond drive, in the film, Casino Royale?\n");
                printf("1. Aston Martin DBS\n");
                printf("2. Aston Martin DB9\n");
                printf("3. Aston Martin DB11\n");
                printf("4. Aston Martin DB5\n");
                scanf("%d", &iSelection);
                system("clear");
            } while(!(iSelection >= 1 && iSelection <= 4));
            
        if(iSelection == 1) {
                iCorrectAnswers++;
            }
            else {
                iCorrectAnswers--;
            }
        break;
    } 
}

void EndingDisplay() {
    int iCurTime = time(NULL);
    int iNewTime;
    system("clear");

    do {
        printf("\n\tThanks for playing my game!");
        printf("\n\n\tYou had %d correct answers and %d wrong answers.", iCorrectAnswers, iIncorrectAnswers);
        iNewTime = time(NULL);
    } while((iNewTime - iCurTime) < 3);
}