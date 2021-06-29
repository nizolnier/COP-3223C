/* Nicole Zolnier
Sudoku game
6/28/21  
COP 3223 */

#include <stdio.h>

int main() {
    FILE* ifp = fopen("sudokode.txt", "r");
    
    int n;
    fscanf(ifp, "%d", &n);
    
    int casenum;
    for (casenum=1; casenum<=n; casenum++) {
    
        int square[9][9];
        int correct = 1;
        
        // read in the board
        int i, j;
        for (i=0; i<9; i++) {
            
            // read in this row
            int temp;
            fscanf(ifp, "%d", &temp);
            
            // peel off each digit in the row, one by one
            for (j=8; j>=0; j--) {
                square[i][j] = temp%10;           
                temp = temp/10;
            }
        }
    
        // check row i
        for (i=0; i<9; i++) {
            
            // initialize frequency array
            int freq[10];
            for (j=0; j<10; j++)
                freq[j] = 0;    
                
            // go through each number in this row
            for (j=0; j<9; j++) {
                if (square[i][j] < 1 || square[i][j] > 9)
                    correct = 0;
                else
                    freq[square[i][j]]++;
            }
    
            // if any number doesn't appear once, it's not a valid Sudoku      
            for (j=1; j<10; j++)
                if (freq[j] != 1)
                    correct = 0;
    
        }
        
        // check column j
        for (j=0; j<9; j++) {
            
            // initialize frequency array
            int freq[10];
            for (i=0; i<10; i++)
                freq[i] = 0;    
                
            // go through each number in this row
            for (i=0; i<9; i++) {
                if (square[i][j] < 1 || square[i][j] > 9)
                    correct = 0;
                else
                    freq[square[i][j]]++;
            }
    
            // if any number doesn't appear once, it's not a valid Sudoku       
            for (i=1; i<10; i++)
                if (freq[i] != 1)
                    correct = 0;
    
        }
        
        int startrow, startcol;
        
        // check the box at (startrow, startcol)
        for (startrow=0; startrow<9; startrow += 3) {
            for (startcol=0; startcol<9; startcol += 3) {
                
                // initialize the frequency array
                int freq[10];
                for (i=0; i<10; i++)
                    freq[i] = 0;                  
                
                for (i=0; i<3; i++)
                    for (j=0; j<3; j++)
                        if (square[startrow+i][startcol+j] < 1 || 
                            square[startrow+i][startcol+j] > 9)
                            correct = 0;
                        else
                            freq[square[startrow + i][startcol + j]]++;
            
                for (i=1; i<10; i++)
                    if (freq[i] != 1)
                        correct = 0;
            }
        }
        
        if (correct)
            printf("Sudoku #%d:  You're the man!\n\n", casenum);
        else
            printf("Sudoku #%d:  Try again!\n\n", casenum);
            
    }
    
    fclose(ifp);
    return 0;
}
