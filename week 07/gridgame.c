/* Nicole Zolnier
Move around a 2D grid
Note: This code can easily create array out of bounds ererors.
6/28/21  
COP 3223 */

#include <stdio.h>

#define ROWS 5
#define COLS 10

int main() {
    int i, j;
    char board[ROWS][COLS];

    // initialize the game board  
    for (i=0; i<ROWS; i++)
        for (j=0; j<COLS; j++)
            board[i][j] = '_';
            
    // ask the user where they want to start
    int row, col;
    printf("Where do you want to start (row, col)?\n");
    scanf("%d%d", &row, &col);
    
    // place an X on the starting square - no error checking here
    board[row][col] = 'X';
    
    // print out the board
    for (i=0; i<ROWS; i++) {
        for (j=0; j<COLS; j++)
            printf("%c", board[i][j]);
        printf("\n");
    }
    
    // set up a loop we'll break out of
    while (1) {
          
        // see if the user wants to move again
        int choice;  
        printf("Do you want to move again?(1=yes, 0=no)\n");
        scanf("%d", &choice);      
        
        // time to stop!
        if (choice == 0)
            break;
         
        // get the user's move
        int dir;    
        printf("Where do you want to move? (0=up,1=down,2=left,3=right)\n");  
        scanf("%d", &dir);
        
        // adjust the row or column based on the user's move
        if (dir == 0) 
            row--;
        else if (dir == 1) 
            row++;
        else if (dir == 2)
            col--;
        else
            col++;
            
        // place an X in the new square
        board[row][col] = 'X';
        
        // reprint the board
        for (i=0; i<ROWS; i++) {
            for (j=0; j<COLS; j++)
                printf("%c", board[i][j]);
            printf("\n\n");
        }
            
    }    
    
    return 0;
}
