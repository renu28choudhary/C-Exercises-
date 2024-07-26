// C Program to Calculate the Sum of Natural Numbers:

// #include <stdio.h>

// int main()
// {
//     int n;
//     int sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     printf("%d is sum of natural number till %d", sum, n);
//     return 0;
// }

// another way:

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("%d is sum of natural number till %d", sum, n);
    return 0;
}