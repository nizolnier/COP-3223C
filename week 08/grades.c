/* Nicole Zolnier
Calculate GPA
7/12/21  
COP 3223 */

#include <stdio.h>

int Comp_Grade(char grade);
char readChar();

int main() {
	
	// set up all of the variables
	int total_points = 0, total_hours = 0, c_hours = 0;
	char ans = 'Y';
	char my_grade;
	
	// loop to allow user to enter grades
	while (ans == 'Y' || ans == 'y') {
		
		// get the grade and # of hours for the current class
		printf("Enter your letter grade.\n");
		my_grade = readChar();
		printf("Enter the number of credit hours.\n");
		scanf("%d", &c_hours);
		
		// update teh number of total points and total hours
		total_points += c_hours*Comp_Grade(my_grade);
		total_hours += c_hours;
		
		// see if user wants to add another grade
		printf("Do you have another grade to enter?\n");
		ans = readChar();
	}
	
	// print out the gpa
	printf("Your GPA is %.2lf\n", (double)total_points/total_hours);
	
	return 0;
	
}

// pre-condition: grade must be a A, B, C, D, or F
// post-condition: a corresponding integer from 0 to 4, based on the grade that will be returned
int Comp_Grade(char grade){
	// return the appropriate integer for each grade.
	if(grade == 'A')
		return 4;
	else if (grade == 'B')
		return 3;
	else if (grade == 'C')
		return 2;
	else if (grade == 'D')
		return 1;
		
	// for f and all invalid cases.
	return 0;
}

// pre-condition: none
// post-condition: returns the first character read from the stream
// not a space, tab or newline charater
char readChar(){
	char ans;
	
	scanf("%c", &ans);
	
	// read another character until you get a non-white space one
	while (ans == ' ' || ans == '\n' || ans == '\t')
		scanf("%c", &ans);
		
	return ans;
	
}







