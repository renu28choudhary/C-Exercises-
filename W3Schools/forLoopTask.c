// Use a for loop to create a program that counts to 100 by tens:

#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i <= 100; i = i + 10)
    {
        printf("%d ", i);
    }
    return 0;
}