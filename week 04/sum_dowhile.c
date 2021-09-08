/* Nicole Zolnier
Summing up the odd numbers in between 1 and 100 with do/while
6/22/21  
COP 3223 */

#include <stdio.h>

int main() {
    // init variables
    int val = 1;
    int sum = 0;
    // add successive odd numbers
    do {

        sum = sum + val;
        val = val + 2;
    } while (val < 100);

    // print the results
    printf("1+3+5+....+99 =%d\n", sum);
    return 0;
}