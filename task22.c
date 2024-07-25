// C Program to Find LCM of two Numbers:
// finding multiples:

// #include <stdio.h>

// int main()
// {
//     int num1, num2, lcm, i, j;
//     printf("enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     for (i = 1; i <= 20; i++)
//     {
//         for (j = 1; j <= 20; j++)
//         {
//             int result1 = num1 * i;
//             int result2 = num2 * j;
//             if (result1 == result2)
//             {
//                 printf("%d is multiple of %d and %d \n", result1, num1, num2);
//                 return result1;
//             }
//         }
//     }
// }

//  LCM of two numbers = product of two numbers ÷ HCF of two numbers.

#include <stdio.h>

int main()
{
    int num1, num2, lcm, hcf, i;

    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (num1 * num2) / hcf;

    printf(" %d is hcf \n", hcf);
    printf("LCM = %d", lcm);

    return 0;
}