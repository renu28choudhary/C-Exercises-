//  Write a C program that prompts the user to enter a positive integer. Use a while loop to print the multiplication table for that number up to 10.

#include <stdio.h>

int main()
{
    int num, result, i = 1;

    printf("enter a positive number:  ");
    scanf("%d", &num);
    while (i <= 10)
    {
        result = num * i;
        printf("%d = %d * %d\n", result, num, i);
        i++;
    }
    return 0;
}
