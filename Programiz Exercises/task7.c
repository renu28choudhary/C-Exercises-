// C Program to Find the Size of int, float, double and char

#include <stdio.h>

int main()
{
    int n;
    float num;
    double num1;
    char c;

    printf("size of int = %zu\n", sizeof(n));
    printf("size of float = %zu \n", sizeof(num));
    printf("size of double = %zu \n", sizeof(num1));
    printf("size of char = %zu \n", sizeof(c));
    return 0;
}
