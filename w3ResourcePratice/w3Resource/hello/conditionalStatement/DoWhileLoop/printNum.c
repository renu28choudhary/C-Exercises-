// 1. Write a C program to print numbers from 1 to 10 and 10 to 1 using a do-while loop.

#include <stdio.h>

int main()
{
    int i = 1, n = 10;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    do
    {
        printf("%d\n", n);
        n--;
    } while (n > 0);
    return 0;
}