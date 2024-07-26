// Inverted full pyramid of *

#include <stdio.h>

int main()
{
    int i, k = 0, rows, space = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--, k = 0)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("%d ", i);
            k++;
        }
        printf("\n");
    }
    return 0;
}