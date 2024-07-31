// Q2: Write a Program to find the Sum of two numbers entered by the user.

#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("enter number num1: ");
    scanf("%d", &num1);

    printf("enter number num2: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("%d", sum);

    return 0;
}