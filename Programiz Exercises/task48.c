// C Program to Add Two Matrices Using Multi-dimensional Arrays:

// #include <stdio.h>

// int main()
// {
//     int myNum1[2][2] = {{2, 3}, {4, 5}};
//     int myNum2[2][2] = {{6, 7}, {8, 9}};
//     int sum[2][2], i, r = 2, c = 2;

//     for (i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             sum[i][j] = myNum1[i][j] + myNum2[i][j];
//         }
//     }
//     // to print in matrice form:
//     for (i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d ", sum[i][j]);
//             // to get spacing between two elements:
//             if (j == c - 1)
//             {
//                 printf("\n");
//             }
//         }
//     }
//     return 0;
// }

// user input matrice:

#include <stdio.h>

int main()
{
    int r, c, i, j;
    int m1[r][c], m2[r][c], sum[r][c];

    printf("enter r &c values for both matrices:  ");
    scanf("%d", &r);

    printf("enter c values for both matrices:  ");
    scanf("%d", &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter m1 the matrices element: ");
            scanf("%d", &m1[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter m2 the matrices element: ");
            scanf("%d", &m2[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d ", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}