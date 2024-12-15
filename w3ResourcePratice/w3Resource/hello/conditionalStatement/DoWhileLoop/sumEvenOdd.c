// 3. Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops.

#include <stdio.h>

int main()
{
    int n = 1, sumEven = 0, sumOdd = 0;
    do
    {
        if (n % 2 == 0)
        {
            sumEven = sumEven + n;
        }
        else
        {
            sumOdd = sumOdd + n;
        }
        n++;

    } 
    while (n <= 50);

    printf("sumEven: %d\n", sumEven);
    printf("sumOdd: %d", sumOdd);

    return 0;
}