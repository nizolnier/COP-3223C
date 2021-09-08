/* Nicole Zolnier
Using constants
5/29/21  
COP 3223 */

#include <stdio.h>

// constants
const int YARDS_IN_MILE = 1760;

#define FEET_IN_YARD  3

int main() {
    // declare and initialize variables
    int feet_in_mile, num_miles;

    // calculate the number of feet in a mile
    feet_in_mile = YARDS_IN_MILE * FEET_IN_YARD;

    // prompt user and read in number of miles ran
    printf("How many miles did you run?\n");
    scanf("%d", &num_miles);

    // print final answer
    printf("You ran %d feet\n", feet_in_mile*num_miles );

    return 0;
}