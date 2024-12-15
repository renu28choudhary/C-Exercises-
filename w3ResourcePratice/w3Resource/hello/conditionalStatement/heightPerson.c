// 7. Write a C program to accept the height of a person in centimeters and categorize the person according to their height.

#include <stdio.h>

int main()
{
    float height;
    printf("Enter height: ");
    scanf("%f", &height);
    if (height < 150.00)
    {
        printf("Dwarf\n");
    }
    else if (height > 150 && height <= 170)
    {
        printf("average height \n");
    }
    else
    {
        printf("abnormal height \n");
    }
    return 0;
}