// Q9: Write a Program to find the factorial of a given number.

// #include <stdio.h>

// int main()
// {
//     int n, fact = 1;

//     printf("enter a number: ");
//     scanf("%d", &n);

//     if (n == 0 || n == 1)
//     {
//         printf("Factorial: 1");
//     }
//     else
//     {
//         for (int i = n; i > 1; i--)
//         {
//             fact = fact * i;
//         }
//         printf("factorial: %d", fact);
//     }
//     return 0;
// }

// recurssion method:
#include <stdio.h>

int n;

int getFactorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * getFactorial(n - 1);
}

int main()
{
    printf("factorial: %d", getFactorial(n = 7));
    return 0;
}
