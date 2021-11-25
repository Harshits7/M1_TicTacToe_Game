#include"application.h"

void displayBoard() {

     printf("\t|\t|\n");
     printf("%c\t|%c\t|%c\n", board[0], board[1], board[2]);
     printf("--------|-------|--------\n");
     printf("\t|\t|\n");
     printf("%c\t|%c\t|%c\n", board[3], board[4], board[5]);
     printf("--------|-------|--------\n");
     printf("%c\t|%c\t|%c\n", board[6], board[7], board[8]);
     printf("\t|\t|\n");
};

int verifySelection(int square, int player) {

     if((player == 0 || player == 1) && board[square-1] == ' ') {

         board[ square - 1 ] = 'X';

         return 0;
     }

     else if(board[square-1] == ' ' && player == 2) {

          board[square-1] = 'O';

          return 0;

     } else 

       return 1;  
     
}

void checkForWin() {

     int i, 
         contor = 0;
 
     if(board[ 0 ] == 'X' && board[ 1 ] == 'X' && board[ 2 ] == 'X') {

        whoWon = 'X';

     } else if(board[ 3 ] == 'X' && board[ 4 ] == 'X' && board[ 5 ] == 'X') {

        whoWon = 'X';

     } else if(board[ 6 ] == 'X' && board[ 7 ] == 'X' && board[ 8 ] == 'X') {

        whoWon = 'X';

     } else if(board[ 0 ] == 'X' && board[ 3 ] == 'X' && board[ 6 ] == 'X') {

        whoWon = 'X';

     } else if(board[ 1 ] == 'X' && board[ 4 ] == 'X' && board[ 7 ] == 'X') {

        whoWon = 'X';

     } else if(board[ 2 ] == 'X' && board[ 5 ] == 'X' && board[ 8 ] == 'X') {

        whoWon = 'X';

     } else 

     if(board[ 0 ] == 'O' && board[ 1 ] == 'O' && board[ 2 ] == 'O') {

        whoWon = 'O';

     } else if(board[ 3 ] == 'O' && board[ 4 ] == 'O' && board[ 5 ] == 'O') {

        whoWon = 'O';

     } else if(board[ 6 ] == 'O' && board[ 7 ] == 'O' && board[ 8 ] == 'O') {

        whoWon = 'O';

     } else if(board[ 0 ] == 'O' && board[ 3 ] == 'O' && board[ 6 ] == 'O') {

        whoWon = 'O';

     } else if(board[ 1 ] == 'O' && board[ 4 ] == 'O' && board[ 7 ] == 'O') {

        whoWon = 'O';

     } else if(board[ 2 ] == 'O' && board[ 5 ] == 'O' && board[ 8 ] == 'O') {

        whoWon = 'O';

    }     

     //for diagonals
     if(board[ 0 ] == 'X' && board[ 4 ] == 'X' && board[ 8 ] == 'X') {

        whoWon = 'X';

     } else if(board[ 2 ] == 'X' && board[ 4 ] == 'X' && board[ 6 ] == 'X') {

        whoWon = 'X';
     }


     if(board[ 0 ] == 'O' && board[ 4 ] == 'O' && board[ 8 ] == 'O') {

        whoWon = 'O';

     } else if(board[ 2 ] == 'O' && board[ 4 ] == 'O' && board[ 6 ] == 'O') {

        whoWon = 'O';
     }


     if(whoWon == 'X') {

        printf("\nX WON\n");
        return; 
     }


     if(whoWon == 'O') {

        printf("\nO WON\n");
        return; 
     }


     for(i = 0; i < 9; i++) 
         if(board[i] != ' ') 
               contor++;
 
     if(contor == 9) {

        whoWon = 'C';
        printf("\nCAT GAME\n");
        return;
     } 
     
}