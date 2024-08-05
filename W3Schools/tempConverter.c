// Use a function to create a program that converts a value from fahrenheit to celsius:

#include <stdio.h>

int getTemperature(float fan)
{
    float cel = (5.0 / 9.0) * (fan - 32);
    return cel;
}

int main()
{
    float result = getTemperature(98.80);
    printf("celsius temp : %.2f", result);
    return 0;
}