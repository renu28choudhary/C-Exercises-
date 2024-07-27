// C Program to Swap Two Numbers

#include <stdio.h>

int main()
{
    int num1, num2, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("%d %d", num1, num2);
    return 0;
}

// Another way without temp variable;'

#include <stdio.h>

int main()
{
    int n1, n2; // 2 3
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    n1 = n1 + n2; // 5
    n2 = n1 - n2; // 2
    n1 = n1 - n2; // 5-2 =3
    printf("%d %d", n1, n2);
    return 0;
}