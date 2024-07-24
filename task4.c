// C Program to Multiply Two Floating-Point Numbers

#include <stdio.h>

int main()
{
    float num1, num2;
    printf("Enter two floting point Numbers: ");
    scanf("%f %f", &num1, &num2);
    float result = num1 * num2;
    printf("%.2f", result);
    return 0;
}