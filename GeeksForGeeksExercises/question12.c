// Q12: Write a Program to Calculate the Sum of Natural Numbers using recursion.

// #include <stdio.h>
// int n = 5;

// int getSum(int n)
// {
//     if (n != 0)
//         return n + getSum(n - 1);
//     else
//         return n;
// }
// int main()
// {
//     printf("sum= %d", getSum(n));
// }

// using for loop:

#include <stdio.h>

// int main()
// {
//     int num = 5, sum = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         sum = sum + i;
//     }
//     printf("%d", sum);
//     return 0;
// }

// using while loop:

#include <stdio.h>

int main()
{
    int n = 5, sum = 0;
    while (n > 0)
    {
        sum = sum + n;
        n--;
    }
    printf("sum : %d", sum);
    return 0;
}