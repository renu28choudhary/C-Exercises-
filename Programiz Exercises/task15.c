// C Program to Check Whether a Number is Positive or Negative

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    (number > 0) ? printf("%d is Positive Number", number) : printf("%d is Negative Number", number);
    return 0;
}