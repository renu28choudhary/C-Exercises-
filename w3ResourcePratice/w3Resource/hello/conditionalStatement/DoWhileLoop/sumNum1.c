// . Write a C program that prompts the user to enter a series of numbers until they input a negative number. Calculate and print the sum of all entered numbers using a do-while loop.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n > 0)
            sum = sum + n;
        else
            printf("sum: %d", sum);

    } while (n > 0);
    // printf("sum: %d", sum);
    return 0;
}