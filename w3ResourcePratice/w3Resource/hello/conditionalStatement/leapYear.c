// 4. Write a C program to find whether a given year is a leap year or not.

#include <stdio.h>
int main()
{
    int n;
    printf("enter a year: ");
    scanf("%d", &n);
    (n %4== 0) ? printf("%d is a Leap year", n) : printf("%d is not aLeap year", n);
    return 0;
}