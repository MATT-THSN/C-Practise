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
int verifySelection(int, int, int);
void checkForWin();

//GLOBAL VARIABLES
char board[3][3];
char cWhoWon = ' ';
int iCurrentPlayer = 0;

int main(void) {
    int y = 0;
    int x = 0;
    int iSquareX = 0;
    int iSquareY = 0;

    for( y = 0; y < 3; y++ ) {
        for( x = 0; x < 3; x++ ) { 
            board[x][y] = ' '; 
        }
    }
    displayBoard();

    while ( cWhoWon == ' ') {
        printf("\n%c\n", cWhoWon);
        if (iCurrentPlayer == 1 || iCurrentPlayer == 0) {
            printf("\nPLAYER X\n");
            printf("Enter an available square number (1-3 & 1-3): ");
            scanf("%d%d", &iSquareX, &iSquareY);
            if ( verifySelection(iSquareX, iSquareY, iCurrentPlayer) == 1 ) { iCurrentPlayer = 1; }
            else { iCurrentPlayer = 2; }
        }
        else {
            printf("\nPLAYER 0\n");
            printf("Enter an available square number (1-3 & 1-3): ");
            scanf("%d%d", &iSquareX, &iSquareY); 
            if ( verifySelection(iSquareX, iSquareY, iCurrentPlayer) == 1) {iCurrentPlayer = 2;}
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
    printf("%c\t|%c\t|%c\n", board[0][0], board[0][1], board[0][2]);
    printf("--------|-------|------\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[1][0], board[1][1], board[1][2]);
    printf("--------|-------|------\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[2][0], board[2][1], board[2][2]);
    printf("\t|\t|\n");
} //END FUNCTION DEFINITION

//FUNCTION DEFINITION
int verifySelection(int iSquareX, int iSquareY, int iPlayer) {
    if (board[iSquareX - 1][iSquareY - 1] == ' ' && (iPlayer == 1 || iPlayer == 0)) {
        board[iSquareX - 1][iSquareY - 1] = 'X';
        return 0;
    }
    else if (board[iSquareX - 1][iSquareY - 1] == ' ' && iPlayer == 2) {
        board[iSquareX - 1][iSquareY - 1] = '0';
        return 0;
    }
    else {
        return 1;
    }// END IF
} // END FUNCTION DEFINITION

//FUNCTION DEFINITION
void checkForWin() {
    int catTotal;
    int x = 0;
    int y = 0;

    if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') { cWhoWon = 'X'; }
    else if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') { cWhoWon = 'X'; }
    else if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') { cWhoWon = 'X'; }
    else if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') { cWhoWon = 'X'; }
    else if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') { cWhoWon = 'X'; }
    else if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') { cWhoWon = 'X'; }
    else if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') { cWhoWon = 'X'; }
    else if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') { cWhoWon = 'X'; }
    else if(board[0][0] == '0' && board[0][1] == '0' && board[0][2] == '0') { cWhoWon = '0'; }
    else if(board[1][0] == '0' && board[1][1] == '0' && board[1][2] == '0') { cWhoWon = '0'; }
    else if(board[2][0] == '0' && board[2][1] == '0' && board[2][2] == '0') { cWhoWon = '0'; }
    else if(board[0][0] == '0' && board[1][0] == '0' && board[2][0] == '0') { cWhoWon = '0'; }
    else if(board[0][1] == '0' && board[1][1] == '0' && board[2][1] == '0') { cWhoWon = '0'; }
    else if(board[0][2] == '0' && board[1][2] == '0' && board[2][2] == '0') { cWhoWon = '0'; }
    else if(board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0') { cWhoWon = '0'; }
    else if(board[2][2] == '0' && board[1][1] == '0' && board[2][0] == '0') { cWhoWon = '0'; }
    if(cWhoWon == 'X') {
        printf("\nX Wins!\n");
        return;
    }
    if(cWhoWon == '0') {
        printf("\n0 Wins!\n");
        return;
    }
    //Check for CAT / draw game
    for (y = 0; y < 3; y++) {
        for (x = 0; x < 3; x++) {
            if(board[x][y] != ' ') {
                catTotal += 1;
            }
    }
    }//END For Loop
    if (catTotal == 9) {
        cWhoWon = 'C';
        printf("\nCAT Game!\n");
        return;
    }//END IF
}// END FUNC DEC