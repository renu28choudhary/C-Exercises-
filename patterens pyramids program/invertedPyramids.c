// Inverted half pyramid of *

#include <stdio.h>

int main()
{
    int i, j, columns;

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for (i = columns; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}