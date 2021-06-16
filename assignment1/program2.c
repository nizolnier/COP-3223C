/* Nicole Zolnier
Calculating volume in inches and feet
5/31/21  
COP 3223 */
#include <stdio.h>

// constant used to divide
const int INCHES_IN_FEET = 1728;

int main (void) {
    // declaring variables
    float length, width, height;
    float volume_in_inches, volume_in_feet;

    // prompting user and getting values
    printf("Please enter the length, width, height of your box (in inches).\n");
    scanf("%f%f%f", &length, &width, &height);

    // calculating
    volume_in_inches = length * width * height;
    volume_in_feet = volume_in_inches / INCHES_IN_FEET;

    // printing :)
    printf("The volume is  %.2f cubic inches.\n", volume_in_inches);
    printf("The volume is  %.2f cubic feet.\n", volume_in_feet);

    return 0;
}
