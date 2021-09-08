/* Nicole Zolnier
Using switch case
6/15/21  
COP 3223 */

#include <stdio.h>

int main () {
	
	char grade;

    printf("Enter your letter grade (ex. B)\n");   
     scanf("%lf", &grade);
	
	switch (grade) {
		case 'A':
			printf("Your grade is fantastic\n");
			break;
		
		case 'B':
			printf("Your grade is above average\n");
			break;	
			
		case 'C':
			printf("Your grade is average\n");
			break;
			
		case 'D':
			printf("You need some improvement\n");
			break;
		
		default: 
			printf("User error or see your teacher for more help!");
	}
	
	printf("Your grade is %c\n", grade);
	return 0;
}
