// Use a for loop to print the powers of 2 up to 512:

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 512; i = i * 2)
    {
        printf("%d \n", i);
    }
    return 0;
}