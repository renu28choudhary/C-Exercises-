// Full pyramid of *

#include <stdio.h>

int main()
{
    int i, k = 0, rows, space;

    printf("enter number of rows: ");
    scanf("%d", &rows); // 4

    for (i = 1; i <= rows; i++, k = 0)
    {
        for (space = 1; space <= rows - i; space++) // space<3
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
    return 0;
}