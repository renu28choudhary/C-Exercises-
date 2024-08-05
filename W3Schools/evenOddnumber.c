// Find out if a number is even or odd:

#include <stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is Even Number", num) : printf("%d is odd Number", num);
    return 0;
}