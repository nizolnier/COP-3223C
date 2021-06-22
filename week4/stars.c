/* Nicole Zolnier
Prints out stars in a triangle shape
6/22/21  
COP 3223 */

#include <stdio.h>
#define TOTAL_ROWS 10

int main() {
    int row, col, numstars;
    int rate = 1;

    // loop through each row
    for (row = 1; row <= TOTAL_ROWS; row++)
    {
        numstars = row; // print out the correct number of stars
        for (col = 1; col <= numstars; col++)
            printf("*"); // go to the new line
        printf("\n");
    }

    return 0;
}

