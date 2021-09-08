/* Nicole Zolnier
Testing && and || , finding the slope
6/15/21  
COP 3223 */

#include <stdio.h>

int main(void) {
    double a, b, c;
    // read user input
    printf("Enter a, b and c.\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    //take care of invalid line case
    if ((a == 0) && (b == 0))
        printf("Invalid operation.\n");
    else {
        //handle each case separately
        if (b == 0)
            printf("Vertical line.\n");
        else if (a == 0)
            printf("slope = 0\n");
        else if (-a / b > 0)
            printf("Slope is positive.\n");
        else
            printf("Slope is negative.\n");
    }
}