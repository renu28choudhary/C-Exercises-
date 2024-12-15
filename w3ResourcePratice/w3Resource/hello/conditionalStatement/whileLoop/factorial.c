// 6. Write a C program that prompts the user to enter a positive integer. It then calculates and prints the factorial of that number using a while loop.

#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("enter a number: ");
    scanf("%d", &n);
    if(n<0){
        printf("enter a positive integer");
        return 0;
    }
    while (n != 0)
    {
        fact = fact *  n;
        n--;
    }
    printf("factorial: %d",fact);
    return 0;
}