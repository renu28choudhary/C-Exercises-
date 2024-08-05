// Create a program that finds the lowest age among different ages:

#include <stdio.h>

int main()
{
    int myAge[] = {45, 17, 20, 24, 56, 34, 65};
    int lowest = myAge[0];
    int length = sizeof(myAge) / sizeof(myAge[0]);
    for (int i = 1; i < length; i++)
    {
        if (lowest > myAge[i])
        {
            lowest = myAge[i];
        }
    }
    printf("lowest age: %d", lowest);

    return 0;
}