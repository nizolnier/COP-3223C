/* Nicole Zolnier - 6/23/21
Count total # of occurrences of a letter
*/

#include <stdio.h>
#include <string.h>

int main (void) {
    // defining the variables; strings need to have the character count so I set it as max
    char letter, string[255];
    // variable for index and # times
    int i, count = 0;

    // prompting user to enter a word and then a letter, and then getting their input
    printf("Please enter a word\n");
    scanf("%s", &string);
    printf("Please enter a letter that you would like to count occurances\n");
    // this little boy wasn't working so the gods from stackoverflow told me to put the space before the %c
    scanf(" %c", &letter);
    
    // looping to find how many times the letter appears - i like for better (and for of on js)
    // i is less than the string length which is found with a lib (i miss string.length on js, simpler times)
    for (i=0; i < strlen(string); i++) {
        // if the current letter the loop is on is the letter we look for
        if(string[i] == letter) {
            // count sums 1
            count++;
        }
    }

    // after the loop ends, it prints out how many times the letter has occurred
    printf("%c occurs %d times", letter, count);
    // and that's a wrap!
    return 0;
}