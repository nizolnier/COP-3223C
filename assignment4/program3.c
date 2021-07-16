/* Nicole Zolnier - 7/15/21
Finding the largest of three numbers
*/

#include <stdio.h>

// declaring the function before using it
int largestNum (int x, int y, int z);

int main () {
    // declaring the 3 integers and the variable to store return from function
    int a,b,c, big;

    // prompting user and getting values
    printf("Enter three integers\n");
    scanf("%d %d %d", &a, &b, &c);

    // calling function and storing return in big
    big = largestNum(a,b,c);

    // printing :)
    printf("The largest amongst the three is %d\n", big);

    // and that's a wrap! (at least for main)
    return 0;
}

// function largestNum :)
// pre-condition: the function takes 3 integers
// post-condition: the function returns the largest of the three
int largestNum (int x, int y, int z) {
    // if the first one is more than the other to, then it's the largest and we return it
    if(x >= y && x >= z) {
        return x;
        // if the second one is more than the other to, then it's the largest and it is returned
    } else if (y >= x && y >= z) {
        return y;
    } 
    
    // last case scenario, the third one is the largest
    return z;
}