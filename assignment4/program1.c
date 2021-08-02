/* Nicole Zolnier - 7/15/21
Finding the average of an array with numbers {78, 90, 56, 99, 88, 68, 92}
*/

#include <stdio.h>

// declaring the function before using it
double average (int *array, int arraySize);

// declaring size of the array
const int SIZE = 7;

int main () {
    // declaring the variable that will hold the return of the function
    double avg;
    // declaring the array and initializing with the numbers we want (if the size is added here, it leads to an error)
    int nums[] = {78, 90, 56, 99, 88, 68, 92};

    // calling the function and saving the return in avg
    avg = average(nums, SIZE);

    // printing :) (with all the decimals because the exercise didnt say where to stop)
    printf("The resulting average is %lf \n", avg);

    // and that's a wrap! (at least for main)
    return 0;
}

// function average :)
// pre-condition = the function takes an array of integers and its size
// post-condition = the function will return the average of the array
double average (int *array, int arraySize) {
    // declaring index and sum of numbers (0 for now)
    int i, sum = 0;
    // declaring the average as a double to allow decimal precision
    double avg;

    // for every number of the array, add it to the variable sum
    for(i = 0; i< arraySize; i++) {
        sum += array[i];
    }

    // casting sum and calculating the average :)
    avg = (double) sum / arraySize;

    // returning average
    return avg;
}
