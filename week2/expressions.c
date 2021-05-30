/* Nicole Zolnier
Arithmetic Operations
5/29/21  
COP 3223 */

#include <stdio.h>

int main(void) {
    int a = 3, b = 7, c = 5;

    int expr1, expr2;
    //      3   7*5 / 2 =17   3*7 % 4 = 1 
    //      20 - 1 = 19
    expr1 = a + b * c / 2 - (a * b % 4);
    // 19 - 7 = 12
    b = expr1 - b;

    printf("Expr1 = %d\n", expr1);
    printf("b = %d\n", b);

    // test increment and parenthesis ops
    expr1 = expr1 + 1;
    expr2 = (5 * (expr1 + b % a) - 91) * (b - a - c + expr1 / 6);
    printf("Expr1 = %d\n", expr1);
    printf("Expr2 = %d\n", expr2);

    // clarify the use of % on negative values
    // negative
    printf("-17 mod 4 = %d\n", (-17 % 4));
    // positive
    printf("17 mod -4 = %d\n", (17 % -4));
    // negative
    printf("-17 mod -4 = %d\n", (-17 % -4));

}