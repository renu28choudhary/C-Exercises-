// 2. Write a C program to check whether a given number is even or odd.

#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("%d is even number", n) : printf("%d is odd number", n);
    return 0;
}