// Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered.

#include <stdio.h>

int main()
{
    int n, sum = 0;
    while (n != 0)
    {
        printf("enter n: ");
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("sum: %d", sum);
    return 0;
}