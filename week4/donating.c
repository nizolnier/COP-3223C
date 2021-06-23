/* Nicole Zolnier
While loop
6/22/21  
COP 3223 */

#include <stdio.h>

int main () {
    double value, total = 0;
    char answer, dummy;
    printf("Does anyone have any money? \n");
    scanf("%c", &answer);
    while (answer == 'y' || answer == 'Y') {
        printf("Enter the amount of your donation.\n");
        scanf("%lf", &value);
        // total = total + value;
        total += value;
        printf("Does anyone have any money?\n");
        scanf("%c%c", &dummy, &answer);
    }

    printf("As a group, you have collected $%.2lf for drinks.\n", total);
    
    return 0;
}