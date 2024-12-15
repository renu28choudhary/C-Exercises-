// 8. Write a C program to find the largest of three numbers.

#include <stdio.h>
int main()
{
    int n1 = 723, n2 = 567, n3 = 123;
    if (n1 > n2 && n1 > n3)
    {
        printf("%d is largest number", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%d is largest number", n2);
    }
    else
    {
        printf("%d is largest number", n3);
    }
    return 0;
}