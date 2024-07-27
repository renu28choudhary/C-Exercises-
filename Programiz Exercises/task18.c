// C Program to Find Factorial of a Number:

#include <stdio.h>

int main()
{
    int num, result = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    (num == 0 || num == 1) ? printf("Factorial = 1") : printf("Factorial = %d", result);

    return 0;
}