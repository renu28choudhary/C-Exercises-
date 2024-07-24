// C Program to Check Leap Year:

#include <stdio.h>

int main()
{
    int yrs;
    printf("enter a year: ");
    scanf("%d", &yrs);

    (yrs % 4 == 0) ? printf("%d is a leap year", yrs) : printf("%d is not a leap year", yrs);
    return 0;
}