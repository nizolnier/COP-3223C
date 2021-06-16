/* Nicole Zolnier
Using the Math Library
6/15/21  
COP 3223 */

#include <stdio.h>
#include <math.h>

int main (void) {
    int a, b, c;
    double disc, root1, root2;
    // Read in the coefficients for the quadratic.
    printf("Enter in a, b and c from your quadratic equation.\n");
    scanf("%d%d%d", &a, &b, &c);
    // Calculate the discriminant.
    disc = pow(b, 2) - 4 * a * c;
    // take care of the complex number case
    if (disc < 0)
        printf("Sorry your quadratic has complex roots.\n");
    // calculate both roots
    else
    {
        root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("The roots are %.2lf and %.2lf.\n", root1, root2);
    }
    return 0;
}