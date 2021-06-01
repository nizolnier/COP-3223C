/* Nicole Zolnier
Summing and finding the average of 5 integers
5/31/21  
COP 3223 */

#include <stdio.h>

int main (void) {
    // declaring variables
    long int a, b, c, d, e, sum;
    float avg;

    // prompt user
    printf("Please enter five integers.\n");
    // getting the numbers
    scanf("%ld %ld %ld %ld %ld", &a, &b, &c, &d, &e);

    // outputing the numbers
    printf("You entered: %ld, %ld, %ld, %ld, %ld\n", a, b, c, d, e);

    // sum and print sum
    sum = a + b + c + d + e;
    printf("The sum of the numbers you entered is: %ld\n", sum);

    // average and print average
    avg = (float)(sum) / 5;
    printf("The average is: %.2f\n", avg);

    return 0;
}