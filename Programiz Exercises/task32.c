// C Program to Display Factors of a Number:

#include <stdio.h>

// int main()
// {
//     int num, quotient, factors, divisor;

//     printf("enter a number: ");
//     scanf("%d", &num);

//     for (divisor = 2; divisor <= num; divisor++)
//     {
//         if (num % divisor == 0)
//             // quotient= num/divisor;
//             printf("factors= %d ", divisor);
//     }
//     // factors= quotient * divisor;
//     // printf("factors= %d * %d", quotient,divisor);

//     return 0;
// }
// display

int main()
{
    int num, quotient, factors, divisor;

    printf("enter a number: ");
    scanf("%d", &num);

    for (divisor = 2; divisor <= 15; ++divisor)
    {
        if (num % divisor == 0) // 15/3
        {
            quotient = num / divisor; // 15/3 = 5
            printf("factors= %d * %d \n", quotient, divisor);
        }
    }
    return 0;
}
