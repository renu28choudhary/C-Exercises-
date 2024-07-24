// C Program to Generate Multiplication Table:

#include <stdio.h>

int main()
{
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 1; i <= 10; i++)
    {
        result = i * number;
        printf("%d = %d * %d \n", result, i, number);
    }
    return 0;
}