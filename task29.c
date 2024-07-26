// C Program to Display Prime Numbers Between Two Intervals

#include <stdio.h>

int main()
{
    int lowRange, highRange, flag = 0;
    
    printf("Enter the range to display prime numbers: ");
    scanf("%d %d", &lowRange, &highRange);

    while (lowRange < highRange)
    {
        for (int i = 2; i < lowRange; i++)
        {
            if (lowRange % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("prime numbers: %d", lowRange);
            lowRange++;
        }
    }
    return 0;
}