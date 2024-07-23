// C Program to Demonstrate the Working of Keyword long

#include <stdio.h>

int main()
{
    int n;
    long num;
    long long num1;
    double a;
    long double c;

    printf("size of int = %zu\n", sizeof(n));
    printf("size of long  = %zu \n", sizeof(num));
    printf("size of long long int = %zu \n", sizeof(num1));
    printf("size of double = %zu \n", sizeof(a));
    printf("size of long double = %zu \n", sizeof(c));
    return 0;
}