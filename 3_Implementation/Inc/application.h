#include <stdio.h>

//function prototypes
void displayBoard();
int verifySelection(int,int);
void checkForWin();

//global variables
char board[ 8 ], whoWon = ' ';

int currentPlayer = 0;
