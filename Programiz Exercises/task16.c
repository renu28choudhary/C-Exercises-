// C Program to Check Whether a Character is an Alphabet or not:

#include <stdio.h>

int main()
{
    char str;
    printf("Enter a character: ");
    scanf("%c", &str);

    if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
    {
        printf("%c character is an Alphabet", str);
    }
    else
    {
        printf("%c character is not an Alphabet", str);
    }
    return 0;
}