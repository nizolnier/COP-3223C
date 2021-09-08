/* Nicole Zolnier - 6/16/21
Filling a 100 doubles array with # between 0.50 and 50.00 and pritting the numbers in a "grid"
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// declaring the size of the array and the # of columns
const int SIZE = 100;
const int COLS = 10;

int main (void) {
    // declaring index and the array of numbers
    int i;
    double numbers[SIZE];
    // seeding the random numbers
    srand(time(0));
    
    // looping the array to fill it with random numbers and printing them with style B)
    for (i = 0; i < SIZE; i++) {
        numbers[i] = (double)(rand() % 100 + 1)/2.0;

        // this -6 sets the width to be at least 6 spaces wide on the right side and it formats the numbers correctly looking like columns
        // https://www.dummies.com/programming/c/how-to-format-with-printf-in-c-programming/
        printf("%-6.2lf", numbers[i]);

        // whenever the element index contains a 9, it will be, inside the array, the 10th # of the row
        // to know when that happens, add 1 to the index of the element and see if the remainder by the division with the # of columns is 0
        // because (9+1)%10 = 0 
        if((i+1)%COLS == 0) {
            // if it is, create a new row
            printf("\n");
        }
    }

    // break the line at the end and that's a wrap!
    printf("\n");

    return 0;
}
