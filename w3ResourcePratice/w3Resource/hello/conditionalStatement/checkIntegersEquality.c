// 1. Write a C program to accept two integers and check whether they are equal or not.

#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    (n1 == n2) ? printf("%d and %d are same numbers", n1, n2)
               : printf("%d and %d are not same numbers", n1, n2);
    return 0;
}