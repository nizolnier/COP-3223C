/* Nicole Zolnier
Searching an array
6/27/21  
COP 3223 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    int index, numbers[SIZE];
    srand(time(0));
    // fill array with number 0-99
    for (index = 0; index < SIZE; index++)
        numbers[index] = rand() % 100;
    printf("Original Array Vals: ");
    for (index = 0; index < SIZE; index++)
        printf("%d ", numbers[index]);
    printf("\n");
    // find the number the user wants to search for
    int val;
    printf("What is the number to search for?\n");
    scanf("%d", &val);
    // look through the array for it. If you find it, change found to 1
    int found = 0;
    for (index = 0; index < SIZE; index++)
    {
        if (numbers[index] == val)
            found = 1;
    } 
    // print the result
    if (found == 1)
        printf("%d was in the array.\n", val);
    else
        printf("%d was NOT in the array.\n", val);
    return 0;
}