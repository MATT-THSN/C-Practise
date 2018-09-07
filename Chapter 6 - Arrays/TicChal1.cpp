/* 
* Programming Practise File
* Desc: Tic-Tac-Toe game
* Date Modified: 06/09/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>

/*
    - Tic-Tac-Toe
    - Play against the computer
    - Code supplied by book, challenge is to modify to code to meet different requirements
*/

//FUNCTION PROTOTYPES
void displayBoard();
int verifySelection(int, int);
void checkForWin();

//GLOBAL VARIABLES
char board[9];
char cWhoWon = ' ';
int iCurrentPlayer = 0;

int main(void) {
    int x;
    int iSquareNum = 0;

    for( x = 0; x < 9; x++ ) { board[x] = ' '; }
    displayBoard();

    while ( cWhoWon == ' ') {
        printf("\n%c\n", cWhoWon);
        if (iCurrentPlayer == 1 || iCurrentPlayer == 0) {
            printf("\nPLAYER X\n");
            printf("Enter an available square number (1-9): ");
            scanf("%d", &iSquareNum);
            if ( verifySelection(iSquareNum, iCurrentPlayer) == 1 ) { iCurrentPlayer = 1; }
            else { iCurrentPlayer = 2; }
        }
        else {
            printf("\nPLAYER 0\n");
            printf("Enter an available square number (1-9): ");
            scanf("%d", &iSquareNum); 
            if ( verifySelection(iSquareNum, iCurrentPlayer) == 1) {iCurrentPlayer = 2;}
            else {iCurrentPlayer = 1;}
        } //END IF
        displayBoard();
        checkForWin();
    } //END LOOP
    return 0;
} // END MAIN

//FUNCTION DEFINITION
void displayBoard() {
    system("clear");
    printf("\n\t|\t|\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[0], board[1], board[2]);
    printf("--------|-------|------\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[3], board[4], board[5]);
    printf("--------|-------|------\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[6], board[7], board[8]);
    printf("\t|\t|\n");
} //END FUNCTION DEFINITION

//FUNCTION DEFINITION
int verifySelection(int iSquare, int iPlayer) {
    if (board[iSquare - 1] == ' ' && (iPlayer == 1 || iPlayer == 0)) {
        board[iSquare - 1] = 'X';
        return 0;
    }
    else if (board[iSquare - 1] == ' ' && iPlayer == 2) {
        board[iSquare - 1] = '0';
        return 0;
    }
    else {
        return 1;
    }// END IF
} // END FUNCTION DEFINITION

//FUNCTION DEFINITION
void checkForWin() {
    int catTotal;
    int x;

    if(board[0] == 'X' && board[1] == 'X' && board[2] == 'X') { cWhoWon = 'X'; }
    else if(board[3] == 'X' && board[4] == 'X' && board[5] == 'X') { cWhoWon = 'X'; }
    else if(board[6] == 'X' && board[7] == 'X' && board[8] == 'X') { cWhoWon = 'X'; }
    else if(board[0] == 'X' && board[3] == 'X' && board[6] == 'X') { cWhoWon = 'X'; }
    else if(board[1] == 'X' && board[4] == 'X' && board[7] == 'X') { cWhoWon = 'X'; }
    else if(board[2] == 'X' && board[5] == 'X' && board[8] == 'X') { cWhoWon = 'X'; }
    else if(board[0] == 'X' && board[4] == 'X' && board[8] == 'X') { cWhoWon = 'X'; }
    else if(board[2] == 'X' && board[4] == 'X' && board[6] == 'X') { cWhoWon = 'X'; }
    else if(board[0] == '0' && board[1] == '0' && board[2] == '0') { cWhoWon = '0'; }
    else if(board[3] == '0' && board[4] == '0' && board[5] == '0') { cWhoWon = '0'; }
    else if(board[6] == '0' && board[7] == '0' && board[8] == '0') { cWhoWon = '0'; }
    else if(board[0] == '0' && board[3] == '0' && board[6] == '0') { cWhoWon = '0'; }
    else if(board[1] == '0' && board[4] == '0' && board[7] == '0') { cWhoWon = '0'; }
    else if(board[2] == '0' && board[5] == '0' && board[8] == '0') { cWhoWon = '0'; }
    else if(board[0] == '0' && board[4] == '0' && board[8] == '0') { cWhoWon = '0'; }
    else if(board[2] == '0' && board[4] == '0' && board[6] == '0') { cWhoWon = '0'; }
    if(cWhoWon == 'X') {
        printf("\nX Wins!\n");
        return;
    }
    if(cWhoWon == '0') {
        printf("\n0 Wins!\n");
        return;
    }
    //Check for CAT / draw game
    for (x = 0; x < 9; x++) {
        if(board[x] != ' ') {
            catTotal += 1;
        }
    }//END For Loop
    if (catTotal == 9) {
        cWhoWon = 'C';
        printf("\nCAT Game!\n");
        return;
    }//END IF
}// END FUNC DEC