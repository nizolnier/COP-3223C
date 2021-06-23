/* Nicole Zolnier
Break statement example
6/22/21  
COP 3223 */

#include <stdio.h>

int main() {
    int i = 0, j = 0;
    //iterate the loop overa range from 0-5
    for (i = 0; i < 5; i++)
    {
        printf("i = %d, j = ", i);
        for (j = 0; j < 5; j++)
        {
            //break statement
            if (j == 2)
                continue;
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}