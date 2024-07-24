// C Program to Count Number of Digits in an Integer:

#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (count = 1; count <= num; count++)
    {
        if (num > 0)
        {
            num = num / 10;
            printf("%d number is\n ", num);
            count = count++;
            printf("count = %d \n ", count);
        }
    }
    printf("%d final count ", count);

    return 0;
}