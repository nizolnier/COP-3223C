/* Nicole Zolnier - 6/16/21
Generating a random number and doing fun operations with it
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void) {
    // declaring the variable
    int randnum;
    //seeding the random number generator
    srand(time(NULL));
    // creating the random number
    randnum = rand() % 100 + 1;

    // outputing the number
    printf("The number is %d.\n", randnum);

    // checking to see if even or odd. when it is even, the rest of the division by 2 is 0
    if(randnum%2 == 0){
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // checking to see if it is divisible by 3. when it is, the rest of the division by 3 is 0
    if(randnum%3 == 0){
        printf("The number is divisible by 3.\n");
    } else {
        printf("The number is not divisible by 3.\n");
    }

    // checking to see if it is divisible by 10. when it is, the rest of the division by 10 is 0
    if(randnum%10 == 0){
        printf("The number is divisible by 10.\n");
    } else {
        printf("The number is not divisible by 10.\n");
    }
    
    return 0;
}