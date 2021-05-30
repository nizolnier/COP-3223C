/* Nicole Zolnier
Casting and Real Division
5/29/21  
COP 3223 */

#include <stdio.h>

int main(void){
    int grade1 = 75;
    int grade2 = 80;
    //calculate the avg in 5 separate ways
    int average1 = (grade1 + grade2) / 2;
    int average2 = grade1 + grade2 / 2;
    int average3 = (grade2 + grade1) / 2;
    double average4 = (grade1 + grade2 / 2);
    double average5 = (double)(grade1 + grade2 / 2); // casting (converting to a double)
    double average6 = (grade1 + grade2 / 2.0);
    double average7 = (double)((grade1 + grade2) / 2);
    int average8 = (grade1 + grade2 / 2.0);
    //print out the result of each
    printf("Ave #1 = %d\n", average1);
    printf("Ave #2 = %d\n", average2);
    printf("Ave #3 = %d\n", average3);
    printf("Ave #4 = %f\n", average4);
    printf("Ave #5 = %f\n", average5);
    printf("Ave #6 = %f\n", average6);
    printf("Ave #7 = %f\n", average7);
    printf("Ave #8 = %d\n", average8);
    return 0;
}