// 14. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
// Equilateral triangle: An equilateral triangle is a triangle in which all three sides are equal.
// Isosceles triangle: An isosceles triangle is a triangle that has two sides of equal length.
// Scalene triangle: A scalene triangle is a triangle that has three unequal sides

#include <stdio.h>

int main()
{
    int s1, s2, b;
    printf("enter three sides: ");
    scanf("%d %d %d", &s1, &s2, &b);
    if (s1 == s2 && s2 == b && s1 == b)
    {
        printf("Equilateral triangle");
    }
    else if (s1 == s2 || s1 == b || s2 == b)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }
    return 0;
}