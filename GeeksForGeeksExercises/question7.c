// Q7: Write a Program to find the largest number among three numbers.

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the Third number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%d is largest number", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is largest number", num2);
    }
    else
    {
        printf("%d is largest number", num3);
    }
    return 0;
}