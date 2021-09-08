/* Nicole Zolnier
Summing up the positive odd integers less than 100
6/22/21  
COP 3223 */
#include <stdio.h>

int main(void) {
    // initialize the first value to add and the total
    int val = 1;
    int sum = 0;
    // loop as long as the value to add is less than 100
    while (val < 100) {
        // add in the value
        sum += val;
        // advance to the next value
        val += 2;

    } 
    // print out the result
    printf("1+3+5+...+99= %d\n", sum);

    return 0;
}