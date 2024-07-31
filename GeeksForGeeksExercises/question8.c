// Q8: Write a Program to make a simple calculator.

#include <stdio.h>

int main()
{
    int a, b, result;
    char operator;
    printf("Enter the operation: ");
    scanf("%c", &operator);
    +printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (operator)
    {
    case '+':
        result = a + b;
        printf("result: %d", result);
        break;
    case '-':
        result = a - b;
        printf("result: %d", result);
        break;
    case '*':
        result = a * b;
        printf("result: %d", result);
        break;
    case '/':
        result = a + b;
        printf("result: %d", result);
        break;
    default:
        printf("please enter valid opearator");
        break;
    }
    return 0;
}