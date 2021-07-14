/* Nicole Zolnier
Enter in the price and tax rate for several items and calculate the total spent
7/12/21  
COP 3223 */

#include <stdio.h>

// function prototype 
double Total_With_Tax(double, double);

int main(void) {
	
	// declare variables
	char ans, dummy;
	double total_price = 0, price, tax_rate;
	char name[10];
	
	// see if there is an item to buy;
	printf("Is there another item to buy?\n");
	scanf("%c", &ans);
	
	// loop as long as there are items to buy
	while (ans == 'y' || ans == 'Y'){
		
		// read in the price and taxrate for current item
		printf("Enter the item price and tax rate.\n");
		scanf("%lf%lf", &price, &tax_rate);
		
		// price and tax rate for the current item
		// add the price of this item to the tally
		total_price += Total_With_Tax(price, tax_rate);
		
		// see if the user has another item to buy
		printf("Is there another item to buy?\n");
		scanf("%c%c,", &dummy, &ans);		
		
	}
	
	// print out the result
	printf("The total is %.2lf.\n", total_price);
	
	return 0;
} //end main

// precondition: value is positive and tax_rate is expressed as a decimal and not a percentage. The tax is between 1 and 0
// postcondition: The total coas of an item with sticker price value taxed ad tax_rate is returned
// note: value and tax_rate are formal parameters
double Total_With_Tax(double price, double tax_rate) {
	return price*(1+tax_rate);
}
