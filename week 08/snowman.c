/* Nicole Zolnier
Compute mass of a snowman with radii of 3 snowballs
7/12/21  
COP 3223 */

#include <stdio.h>

#define PI 3.14159
#define SNOW_DENSITY 0.1

// function prototypes
double Sphere_Volume(double radius);
double Mass(double den, double volume);

int main() {
	
	double  r1,r2,r3;
	double total_V, total_M;
	
	// get the sizes of the 3 snowballs
	printf("Enter the 3 radii of snowballs\n");
	scanf("%lf%lf%lf", &r1, &r2, &r3);
	
	// calculate their total_volume then total mass
	total_V = Sphere_Volume(r1) + Sphere_Volume(r2) + Sphere_Volume(r3);
	total_M = Mass(SNOW_DENSITY, total_V);
	
	// print out
	printf("The mass of your snowman in grams is %lf.\n", total_M);
	
	return 0;
}

// pre-condition: radius must be positive
// post-condition the volume of a sphere with a radius of radius is returned in the same units as the radius was given
double Sphere_Volume(double radius) {
	return 4*PI/3*radius*radius*radius;
}


//pre-condition: den and volume must be positive. The unit used for volume must correspond to that used for density
// post-condition: The function will return the mass of the object with the given density den and volume
double Mass(double den, double volume) {
	return den*volume;
}
