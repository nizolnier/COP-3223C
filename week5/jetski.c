/* Nicole Zolnier
Jetski Problem
6/22/21  
COP 3223 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926535898

int main() {
    
    FILE *ifp;

    // open the input file    
    ifp = fopen("jetski.in", "r");

    int numcases;
    int day;
    fscanf(ifp, "%d", &numcases);
    
    // process each case.
    for (day=1; day<=numcases; day++) {
        int mph, time;
        double radius;
        double area;
 
        // read in the data for this case
        fscanf(ifp,"%d%d", &mph, &time);
        
        // this is how far skippy can go in miles
        // we divide by 60 because the time was given in minutes and we need to convert to hours
        radius = mph*time/60.0;
        
        // semi-circle area
        area = .5*PI*radius*radius;
        
        // print the answer
        printf("Day %d: %.2lf\n", day, area);
    }
    
    // close the file
    fclose(ifp);
    system("PAUSE");
    return 0;
}
