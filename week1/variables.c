/* Nicole Zolnier
Using variables
5/27/21  
COP 3223 */

#include <stdio.h>

int main(void){
	
	//declare variables
	int feet_in_mile, yards_in_mile;
	int feet_in_yard;
	
	//initialize variables
	yards_in_mile = 1760;
	feet_in_yard = 3;
	
	// calculate the number of feet in a mile
	feet_in_mile = yards_in_mile * feet_in_yard; 

	// output
	printf("feet in mile = %d\n", feet_in_mile);
	return 0;
}
