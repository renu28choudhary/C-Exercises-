// Q5: Write a Program to calculate Compound Interest.

#include <stdio.h>
#include <math.h>

int main()
{
    int principalAmount, time;
    float rate, compoundInterst;
    double amount;

    printf("Enter the principal ampunt: ");
    scanf("%d", &principalAmount);
    printf("Enter the time : ");
    scanf("%d", &time);
    printf("Enter the Rate : ");
    scanf("%f", &rate);

    amount = principalAmount * (pow((1 + rate / 100), time));
    compoundInterst = amount - principalAmount;

    printf("compound Interst :%f", compoundInterst);
    return 0;
}