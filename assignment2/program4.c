/* Nicole Zolnier - 6/16/21
Generating a random number, doing fun operations with it for the user to guess
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    // declaring the variables, one for the number and one for the user's guess
    int secretnum, guess;
    //seeding the random number generator
    srand(time(NULL));
    // creating the secret number
    secretnum = rand() % 50 + 1;

    // checking to see if even or odd. when it is even, the rest of the division by 2 is 0
    if(secretnum%2 == 0){
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // checking to see if it is divisible by 3. when it is, the rest of the division by 3 is 0
    if(secretnum%3 == 0){
        printf("The number is divisible by 3.\n");
    } else {
        printf("The number is not divisible by 3.\n");
    }

    // checking to see if it is divisible by 10. when it is, the rest of the division by 10 is 0
    if(secretnum%10 == 0){
        printf("The number is divisible by 10.\n");
    } else {
        printf("The number is not divisible by 10.\n");
    }
    
    // prompting the user for him/her to guess and getting the value
    printf("Guess the number!\n");
    scanf("%d", &guess);

    // if he guess the correct number, he/she wins and the prize is nothing
    if(guess == secretnum){
        printf("And we have a winner!!! The number is %d, congrats :)\n", secretnum);
    } 
    // if the difference between the number guess and the correct number is less than 10, he/she gets a special message for being so close
    else if(abs(guess - secretnum) < 10){
        printf("Close, but not this time! The number is %d.\n", secretnum);
    } 
    // if nothing like that happens, he/she is a loser :/
    else {
        printf("I'm sorry, but you lost! The number is %d.\n", secretnum);
    }
    return 0;
}