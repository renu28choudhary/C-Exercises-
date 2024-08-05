// Use the weekday number to calculate and output the weekday name:

#include <stdio.h>

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thrusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("saturday");
        break;
    default:
        printf("Sunday");
        break;
    }
}