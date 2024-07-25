// C Program to Check Whether a Number is Prime or Not
// here checking if number is divisible if yes then change flaf to 0 and number is nit prime number otherwise initial assumption is number is prime.
#include <stdio.h>

int main()
{
    int num, i, flag = 1; // flag is  true
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is not prime number", num);
    }
    return 0;
}