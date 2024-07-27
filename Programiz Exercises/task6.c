// C Program to Compute Quotient and Remainder

#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, remainder;
    printf("Enter divident & divisor: ");
    scanf("%d %d", &dividend, &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf(" quotient is %d and remainder is %d", quotient, remainder);
    return 0;
}