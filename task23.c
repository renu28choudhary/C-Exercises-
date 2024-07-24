// C Program to Display Characters from A to Z Using Loop

#include <stdio.h>

int main()
{
    char c;
    for (c = 'a'; c <= 'z'; c++)
    {
        printf("%c ", c);
    }
    printf("\n");
    for (c = 'A'; c <= 'Z'; c++)
    {
        printf(" %c ", c);
    }
    return 0;
}