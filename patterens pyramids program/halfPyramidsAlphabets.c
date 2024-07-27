// Half pyramid of alphabets

#include <stdio.h>

int main()
{
    char i, j, rows;

    printf("Enter number of rows: ");
    scanf("%c", &rows);

    for (i = 'a'; i <= rows; i++)
    {
        for (j = 'a'; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}