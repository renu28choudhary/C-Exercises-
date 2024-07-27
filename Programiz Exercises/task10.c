// C Program to Check Whether a Number is Even or Odd:

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 1)
    {
        (num % 2 == 0) ? printf("%d is Even number", num) : printf("%d is Odd number", num);
    }
    else
    {
        printf("Enter a positive number");
    }

    return 0;
}