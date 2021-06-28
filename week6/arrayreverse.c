/* Nicole Zolnier
Reads in numbers into an array and prints them out in reverse order
6/27/21  
COP 3223 */

#include <stdio.h>

int main() {
    int index, test_scores[5];

    printf("Please enter 5 test scores.\n");

    for (index = 0; index < 5; index++)
        scanf("%d", &test_scores[index]);

    printf("Here are the scores in reverse order: ");
    for (index = 4; index >= 0; index--)
        printf("%d ", test_scores[index]);
    return 0;
}