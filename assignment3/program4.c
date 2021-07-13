/* Nicole Zolnier - 6/16/21
Filling a 1000 ints array with only 1-6 and printing how many times each values show up
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// declaring the size of the array numbers and the size of count which is 6 because of the dice rolls
const int SIZE = 1000;
const int SIZE_COUNT = 6;

int main (void) {
    // declaring the index, the array of numbers, the array to count numbers
    int i, numbers[SIZE], count[SIZE_COUNT];

    // seeding the random numbers
    srand(time(0));

    // filling the count array with 0's
    // (because i didnt know how to initialize it with the 0's, i tried doing the {0} but it didnt work out)
    for(i = 0; i < SIZE_COUNT; i++) {
        count[i] = 0;
    }

    // so here we do a loop to fill the numbers array with 1,2,3,4,5,6 and analyze each case to increase the proper count element
    for (i = 0; i < SIZE; i++) {
        // generate a random number limited to 1 to 6 and set it as the current number
        numbers[i] = rand() % 6 + 1;
        // then analyze the cases with a switch
        // for each case, 1 to 6, we add 1 to one count element
        switch(numbers[i]){
            case 1: 
                count[0]++;
                break;
            case 2: 
                count[1]++;
                break;
            case 3: 
                count[2]++;
                break;
            case 4: 
                count[3]++;
                break;
            case 5: 
                count[4]++;
                break;
            default: 
                count[5]++;
                break;
        }
    }

    // here we print each counter
    for (i = 0; i < SIZE_COUNT; i++) {
        // since i starts at 0, it is necessary to add 1 to display it correctly on the screen
        printf("%d occurs %d times\n", (i+1), count[i]);
    }

    // and that's a wrap :)
    return 0;
}