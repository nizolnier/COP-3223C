/* Nicole Zolnier - 6/16/21
Outputting a Roman number between 1 and 20
*/
#include <stdio.h>
// lib for exit(-1)
#include <stdlib.h>

int main (void) {
    // declaring variable
    int number;
    // prompting user and getting the value
    printf("Enter a number between 1 and 20\n");
    scanf("%d", &number);

    // analyzing each case (i'm not gonna go through all of them in the comments, sorry)
    // roman numerals accept up to 3 I's or so in 4 and 9 it changes
    switch (number) {
    case 1:
        printf("Your number is %d and in Roman numeral is I\n", number);
        break;

    case 2:
        printf("Your number is %d and in Roman numeral is II\n", number);
        break;

    case 3:
        printf("Your number is %d and in Roman numeral is III\n", number);
        break;

    case 4:
        printf("Your number is %d and in Roman numeral is IV\n", number);
        break;

    case 5:
        printf("Your number is %d and in Roman numeral is V\n", number);
        break;

    case 6:
        printf("Your number is %d and in Roman numeral is VI\n", number);
        break;

    case 7:
        printf("Your number is %d and in Roman numeral is VII\n", number);
        break;

    case 8:
        printf("Your number is %d and in Roman numeral is VIII\n", number);
        break;
        
    case 9:
        printf("Your number is %d and in Roman numeral is IX\n", number);
        break;

    case 10:
        printf("Your number is %d and in Roman numeral is X\n", number);
        break;

    case 11:
        printf("Your number is %d and in Roman numeral is XI\n", number);
        break;

    case 12:
        printf("Your number is %d and in Roman numeral is XII\n", number);
        break;

    case 13:
        printf("Your number is %d and in Roman numeral is XIII\n", number);
        break;

    case 14:
        printf("Your number is %d and in Roman numeral is XIV\n", number);
        break;

    case 15:
        printf("Your number is %d and in Roman numeral is XV\n", number);
        break;

    case 16:
        printf("Your number is %d and in Roman numeral is XVI\n", number);
        break;

    case 17:
        printf("Your number is %d and in Roman numeral is XVII\n", number);
        break;

    case 18:
        printf("Your number is %d and in Roman numeral is XVIII\n", number);
        break;

    case 19:
        printf("Your number is %d and in Roman numeral is XIX\n", number);
        break;

    case 20:
        printf("Your number is %d and in Roman numeral is XX\n", number);
        break;
    // the default case is the out of range since it is not part of what i prompted the user
    default:
        printf("Whops! Your number is out of range :(\n");
        exit(-1);
    }

    return 0;
}