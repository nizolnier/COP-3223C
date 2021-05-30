/* Nicole Zolnier
Cost of circular plot of land
5/27/21  
COP 3223 */

#include <stdio.h>

const float PI = 3.14159;

int main() {
    float radius, area;
    float cost, totalcost;
    //prompt the user to enter the radius
    printf("Please enter the radius and cost of your circle.\n");
    //read the radius in
    scanf("%f%f", &radius, &cost);
    //calculate the area of the circle
    area = PI * radius * radius;
    totalcost = cost * area;
    //print out the total cost of the circle
    printf("The circle will cost $%.2f.\n", totalcost);
    // .2f lists outcome with two decimal places

    return 0;
}