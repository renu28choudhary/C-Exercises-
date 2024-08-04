// Create a program that calculates the average of different ages:

#include <stdio.h>

int main()
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float average, sum = 0;
    int length = sizeof(ages) / sizeof(ages[0]);
    printf("%d \n", length);
    for (int i = 0; i < 8; i++)
    {
        sum = sum + ages[i]; // 20 + 22
    }
    printf("sum : %.2f \n", sum);
    average = sum / length;
    printf("average : %.2f", average);
    return 0;
}