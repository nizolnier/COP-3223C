/* Nicole Zolnier - 6/16/21
Filling a 10 ints array and pritting the numbers
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// declaring the size of the array as a const as it will be used many times and it doesnt change
const int SIZE = 10;

int main (void) {
    // declaring index and the array of numbers
    int i, numbers[SIZE];
    // seeding the random numbers
    srand(time(0));

    // nice warning for the user to understand what are these numbers printing out of nowhere
    printf("This array contains: ");

    // looping the array to fill it with random numbers from 1 to 100 and to print the numbers
    for (i = 0; i < SIZE; i++) {
        // this fills the current number of the loop with a rand number
        numbers[i] = rand() % 100 + 1;
        // this prints :)
        printf("%d ", numbers[i]);
    }

    // break the line at the end and that's a wrap!
    printf("\n");

    return 0;

}
