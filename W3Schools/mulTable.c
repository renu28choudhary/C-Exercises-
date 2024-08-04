// Use a for loop to create a program that prints the multiplication table of a specified number (2 in this example):

#include <stdio.h>

int main()
{
    int num, result = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        result = num * i;
        printf("%d = %d * %d \n", result, num, i);
    }

    return 0;
}