//  Write a C program to check whether a given number is positive or negative.

#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    (n >= 0) ? printf("%d is positive number", n) : printf("%d is negative number", n);
    return 0;
}