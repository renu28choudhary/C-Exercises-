// Find out if a number is positive or negative:

#include <stdio.h>

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    (num >= 0) ? printf("%d is positive Number", num) : printf("%d is Negative Number", num);
    return 0;
}