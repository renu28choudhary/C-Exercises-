// C Program to Find the Largest Number Among Three Numbers:

#include <stdio.h>

int main()
{
    int num1 = 33, num2 = 217, num3 = 319;
    if (num1 > num2 && num1 > num3)
    {
        printf("%d number is greatest", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d number is greatest", num2);
    }
    else
    {
        printf("%d number is greatest", num3);
    }
    return 0;
}