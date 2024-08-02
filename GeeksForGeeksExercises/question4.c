// Q4: Write a Program to Swap the values of two variables.
// using third variable
// #include <stdio.h>

// int main()
// {
//     int a, b, temp; // 2 3

//     printf("enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     temp = a; // temp = 2
//     a = b;    // a=3
//     b = temp;

//     printf("a: %d b: %d", a, b);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 6, b = 3;
    a = a + b; // 9
    b = a - b; // 6
    a = a - b; // 3
    printf("a:%d b:%d", a, b);
    return 0;
}