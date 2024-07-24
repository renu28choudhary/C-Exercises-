//  C Program to Calculate the Power of a Number

#include <stdio.h>
#include <math.h>

int main()
{
    int num, p;
    printf(" Enter number and power: ");
    scanf("%d %d", &num, &p);
    int result = pow(num, p);
    printf("%d power of number % d is %d", p, num, result);
    return 0;
}

// without math function:

// int main()
// {
//     int num, p, result = 1;
//     printf(" Enter number and power: ");
//     scanf("%d %d", &num, &p);
//     while (p != 0)
//     {
//         result = num * result; // 4 // 8
//         --p;                   // 4 8
//     }
//     printf("%d", result);
//     return 0;
// }

// for loop:
// int main()
// {
//     int num = 4, p = 3, result = 1;
//     for (int i = p; i >= 1; i--)
//     {
//         result = result * num;
//     }
//     printf("%d", result);
//     return 0;
// }
