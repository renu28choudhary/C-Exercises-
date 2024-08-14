// 2. Write a C program that prompts the user to input a series of integers until the user stops by entering 0 using a do-while loop. Calculate and print the sum of all positive integers entered.

#include <stdio.h>

int main()
{
    int n, sum = 0;
    do
    {
        printf("Enter the number: ");
        scanf("%d", &n);
        sum = sum + n;
    } while (n > 0);

    printf("sum: %d", sum);
    return 0;
}