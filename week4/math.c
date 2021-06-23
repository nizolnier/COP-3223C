/* Nicole Zolnier
Calculating exponent and factorial with for loop
6/22/21  
COP 3223 */

#include <stdio.h>

int main() {
    int index;
    /******************* calculating an exponent **********************/
    int base, exp;
    // get the base and exponent from the user
    printf("Enter the base.\n");
    scanf("%d", &base);
    printf("Enter the exponent.\n");
    scanf("%d", &exp);
    // start our answer
    int answer = 1;
    // multiply answer by base the correct number of times
    // the printf is so you can see what answer equals at each step
    for (index = 0; index < exp; index++) {
        answer = answer * base;
        printf("power=%d, answer = %d\n", index + 1, answer);
    }
    // print out the final answer
    printf("%d raised to the %d = %d\n", base, exp, answer);

    /******************* calculating a factorial *********************/
    int n;
    
    // get n from the user
    printf("What factorial do you want to calculate?\n");
    scanf("%d", &n);
    
    // start our answer
    answer = 1;
    
    // multiply answer by 1, then 2, then 3, ...
    // the printf is so you can see what answer equals at each step
    for (index = 1; index<=n; index++) {
        answer = answer*index;
        printf("multiplier=%d, answer = %d\n", index, answer); 
    }
    
    // print out the final answer
    printf("%d! = %d\n", n, answer);

    return 0;
}
