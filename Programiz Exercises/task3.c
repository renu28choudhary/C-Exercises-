// C Program to Add Two Numbers

#include <stdio.h>

// int main() {
//     int num1, num2;
//     printf("enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     int result = num1 + num2;

//     printf("%d", result);
//     return 0;
// }

// another way:

int getSum(int, int);

int main()
{
    int sum = getSum(12, 12);
    printf("%d", sum);
    return 0;
}

int getSum(int a, int b)
{
    int result = a + b;
    return result;
}