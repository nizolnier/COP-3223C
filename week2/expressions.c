/* Nicole Zolnier
Arithmetic Operations
5/29/21  
COP 3223 */

#include <stdio.h>

int main(void) {
    int a = 3, b = 7, c = 5;

    int expr1, expr2;

    expr1 = a + b * c / 2 - (a * b % 4);

    b = expr1 - b;

    printf("Expr1 = %d\n", expr1);

    printf("b = %d\n", b);
}