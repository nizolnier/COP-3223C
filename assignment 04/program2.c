/* Nicole Zolnier - 7/15/21
Calculating letter grade according to number grade
*/

#include <stdio.h>

// declaring the function before using it 
char calcGrade (double grade);

int main () {
    // declaring variable to hold user input
    double numGrade;
    // declaring variable that will hold return from function
    char letterGrade;

    // prompting user and getting the value
    printf("Please enter your current grade\n");
    scanf("%lf", &numGrade);

    // calling the function and storing the return in letterGrade
    letterGrade = calcGrade(numGrade);

    // printing :)
    printf("Your letter grade is %c", letterGrade);

    // and that's a wrap! (at least for main)
    return 0;
}

// function calcGrade :)
// pre-condition = the function expects a number with as much decimals as you would like
// post-condition = the function returns a character depending on the number you entered
char calcGrade (double grade) {
    // based on the syllabus: 90 to 100 = a, 80 to 89 = b, 70 to 79 = c, 60 to 69 = d then create if's based on that
    // it gotta be >= for the one that starts the letter grade (like 90, 80, 70, 60) or those numbers will fall into the f
    // i'm not a nice teacher so there are no rounding up here, 59.9 is still an F 
    if(grade >= 90) {
        return 'A';
    } else if (grade < 90 && grade >= 80) {
        return 'B';
    } else if (grade < 80 && grade >= 70) {
        return 'C';
    } else if (grade < 70 && grade >= 60) {
        return 'D';
    } 

    // last case scenario, i'm sorry to this man
    return 'F';
}
