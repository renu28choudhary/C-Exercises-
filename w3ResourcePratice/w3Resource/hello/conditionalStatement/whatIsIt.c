// 16. Write a C program to check whether a character is an alphabet, digit or special character.

#include <stdio.h>

int main()
{
    char str;
    printf("enter a charcter,digit or special charatcer: ");
    scanf("%c", &str);
    if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
    {
        printf("%c is character", str);
    }
    else if (str >= '0' && str <= '9')
    {
        printf("%c is Number", str);
    }
    else
    {
        printf("%c is special character", str);
    }
    return 0;
}
