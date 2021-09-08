/* Nicole Zolnier
Allow user to guess a secret number 
6/22/21  
COP 3223 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int secret_number;
    int guess;
    //create a secret number randomly
    srand(time(0));
    
    secret_number = 1 + rand() % 100;
    //prompt user for a guess
    printf("Guess a number between 1-100\n");
    do
    {
        scanf("%d", &guess);
        if (guess < secret_number)
            printf("Your guess is too low!\n");
        else if (guess > secret_number)
            printf("Your guess is too high!\n");
    } while (guess != secret_number);

    printf("You guess correctly!\n");
    return 0;
}