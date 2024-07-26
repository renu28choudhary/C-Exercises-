// Half pyramid of *

#include <stdio.h>

int main()
{
    int i, j, rows; 

    printf("enter rows: "); //3
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) // i<=3
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}