/* Nicole Zolnier
Simple if statement
6/15/21  
COP 3223 */

#include <stdio.h>

int main() {
    int age, fakeid;
    //get user input
    printf("How old are you?\n");
    scanf("%d", &age);
    printf("Do you have a fake id? (yes = 1, no = 0)\n");
    scanf("%d", &fakeid);
    //you can drink
    if (age >= 21) {
        printf("Time for happy hour!\n");
    //not 21 yet!
    } else {
        //for all the lawless people out there
        if (fakeid > 0){
            printf("You can still enjoy happy hour!\n");
        } else
            printf("It's happy hour...minus the vodka for you.\n");
    }

    return 0;
}