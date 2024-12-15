// 15. Write a C program to check whether a triangle can be formed with the given values for the angles.
// Test Data :40 55 65

#include <stdio.h>
int main()
{
    int angA, angB, angC, total;
    printf("Enter the angles: ");
    scanf("%d %d %d", &angA, &angB, &angC);
    total = angA + angB + angC;
    if (total == 180)
    {
        printf("Triangle can be formed");
    }
    else
    {
        printf("Triangle can not be formed");
    }

    return 0;
}