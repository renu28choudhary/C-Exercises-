// C Program to Make a Simple Calculator Using switch...case:

#include <stdio.h>

int main()
{
    double number1, number2, result;
    char operator;
    
    printf("enter operation:  ");
    scanf("%c", &operator);

    printf("enter two numbers:  ");
    scanf("%lf %lf", &number1, &number2);

    switch (operator)
    {
    case '+':
        result = number1 + number2;
        printf("%.1lf", result);
        break;

    case '-':
        result = number1 - number2;
        printf("%.1lf", result);
        break;

    case '*':
        result = number1 * number2;
        printf("%.1lf", result);
        break;

    case '/':
        result = number1 / number2;
        printf("%.1lf", result);
        break;

    default:
        printf("not a valid operator");
        break;
    }
    return 0;
}
