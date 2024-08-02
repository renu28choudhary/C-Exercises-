// Q3: Write a Program to find the size of int, float, double, and char.

#include <stdio.h>

int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("int : %lu\n", sizeof(intType));
    printf("float: %lu \n", sizeof(floatType));
    printf("double: %lu\n", sizeof(doubleType));
    printf("char: %lu \n", sizeof(charType));
    return 0;
}