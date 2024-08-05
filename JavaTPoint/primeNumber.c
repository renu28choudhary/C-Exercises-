// Write a c program to check prime number.

#include <stdio.h>

int main()
{
    int n, i, flag = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    (flag == 0) ? printf("%d is prime number", n) : printf("%d is not a prime number", n);
    return 0;
}