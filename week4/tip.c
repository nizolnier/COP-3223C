/* Nicole Zolnier
Prints out a tip chart at 15% on a meal from 1-100 dollars
6/22/21  
COP 3223 */

#include <stdio.h>
#define TIP_RATE 0.15
#define MAX_PRICE 100

int main (void) {
    int meal_value;
    double tip_amt;
    meal_value = 1;
    // loop until you hit the max meal value
    while (meal_value <= MAX_PRICE) {
        // calculate the corresponding tip
        tip_amt = meal_value * TIP_RATE;
        // print out the tip for this meal
        printf("On a meal of $%d, you should tip $%.2lf\n", meal_value, tip_amt);
        meal_value++;
        // go to the next meal value
    }
    return 0;
}