// Q9: Write a Program to find the factorial of a given number.

#include <stdio.h>

int main()
{
    int n, fact = 1;

    printf("enter a number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("Factorial: 1");
    }
    else
    {
        for (int i = n; i > 1; i--)
        {
            fact = fact * i;
        }
        printf("factorial: %d", fact);
    }
    return 0;
}