/* Nicole Zolnier - 6/16/21
Filling a 100 ints array and pritting their average
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// declaring the size of the array as a const as it will be used many times and it doesnt change
const int SIZE = 100;

int main (void) {
    // declaring the index, the "count" of all numbers (idk how to name it better) and the array of numbers
    int i, count, numbers[SIZE];
    // and the average as a double
    double avg;
    // seeding the random numbers
    srand(time(0));

    // looping the array to fill it with random numbers (that can repeat because if it didn't it would be boring)
    // and also adding these numbers to the count
    for (i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 100 + 1;
        count += numbers[i];
    }

    // casting to calculate the average and canculating
    avg = (double)(count) / 100;

    // printting the average with 2 decimal precision
    printf("The average of the numbers in the array is: %.2lf\n", avg);

    // and that's a wrap!
    return 0;
}
