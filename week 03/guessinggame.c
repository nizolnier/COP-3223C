/* Nicole Zolnier
Utilizing random number generation
6/15/21  
COP 3223 */

#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

#define DEBUG 1
int main() {
    int guess1, guess2;
    int diff1, diff2;
    int secretnum;
    //seeding the random number generator
    srand(time(0));
    //create the secret number
    secretnum = rand() % 100 + 1;
    /* 
    if (DEBUG)
        printf("The secret number is %d.\n", secretnum); */

    //get both guesses
    printf("Contestant #1, what number do you guess (1-100?)\n");
    scanf("%d", &guess1);
    printf("Contestant #2, what number do you guess (1-100?)\n");
    scanf("%d", &guess2);
    //compute how far off each guess is
    diff1 = abs(guess1 - secretnum);
    diff2 = abs(guess2 - secretnum);
    //contenstant 1 wins
    if (diff1 < diff2)
    {
        printf("Contestant #1 , you win, the secret number was %d!\n", secretnum);
    }
    //contestant 2 wins
    else if (diff2 < diff1)
    {
        printf("Contestant #2 , you win, the secret number was %d!\n", secretnum);
    } //tie
    else
    {
        printf("It was a tie, the secret number was %d\n", secretnum);
    }

    return 0;
}