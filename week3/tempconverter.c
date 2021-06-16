/* Nicole Zolnier
Converting Fahrenheit to Celsius or vice versa
6/15/21  
COP 3223 */

#include <stdio.h>

int main() {
    double fahr, cel;
    int choice;
    // print out the choices for the user and read in their selection
    printf("Which of the following conversions would you like to make?\n");
    printf("1. Fahrenheit to Celsius.\n");
    printf("2. Celsius to Fahrenheit.\n");
    scanf("%d", &choice);
    // execute Fahrenheit to Celsius
    if (choice == 1) {
        // read in the temperature in Fahrenheit
        printf("Please enter the temperature in Fahrenheit.\n");
        scanf("%lf", &fahr);
        // calculate and output the result in Celsius
        cel = (fahr - 32) * 5 / 9;
        printf("%.2lf Fahrenheit = %.2lf Celsius.\n", fahr, cel);
    }
    // execute Celsius to Fahrenheit
    else {
        // read in the temperature in Celsius
        printf("Please enter the temperature in Celsius.\n");
        scanf("%lf", &cel);
        // calculate and output the result in Fahrenheit
        fahr = 1.8 * cel + 32;
        printf("%.2lf Celsius = %.2lf Fahrenheit.\n", cel, fahr);
    }
    return 0;
}