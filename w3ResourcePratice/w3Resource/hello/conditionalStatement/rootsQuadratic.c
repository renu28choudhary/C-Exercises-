// 11. Write a C program to calculate the root of a quadratic equation.
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    float x1, x2;
    printf("enter the values of a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - (4 * a * c);
    if (d == 0)
    {
        x1 = -b / (2.0 * a);
        x2 = x1;
        printf("root1 &2 are equal: %f \n", x1);
    }
    else if (d > 0)
    {
        printf("Both roots are real and different.\n");
        x1 = (-b + sqrt(d)) / (2 * a); // Calculate the first root.
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("First  Root Root1 = %f\n", x1); // Print the roots.
        printf("Second Root Root2 = %f\n", x2);
    }
       else   // If discriminant is negative.
       printf("Roots are imaginary;\nNo Solution. \n");   // Print no solution message.

    return 0;
}