// 9. Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

#include <stdio.h>

int main()
{
    int x, y;
    printf("enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("first quadrant");
    }
    else if (x < 0 && y > 0)
    {
        printf("second quadrant");
    }
    else if (x < 0 && y < 0)
    {
        printf("third quadrant");
    }
    else if (x > 0 && y < 0)
    {
        printf("Fourth quadrant");
    }
    return 0;
}