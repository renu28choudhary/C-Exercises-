// Use a for loop to create a program that only print even values between 0 and 10:

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("even number: %d\n", i);
        }
    }
    return 0;
}