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

    //Test increment and parenthesis ops
    expr1 = expr1 + 1;
    expr2 = (5 * (expr1 + b % a) - 91) * (b - a - c + expr1 / 6);
    printf("Expr1 = %d\n", expr1);
    printf("Expr2 = %d\n", expr2);

    //clarify the use of % on negative values
    printf("-17 mod 4 = %d\n", (-17 % 4));
    printf("17 mod 4 = %d\n", (17 % -4));
    printf("-17 mod -4 = %d\n", (-17 % -4));
}