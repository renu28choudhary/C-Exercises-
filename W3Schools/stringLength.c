// Create a program that counts the number of characters found in a specific word:

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[] = "hellomylove";
//     printf("length: %d", strlen(str));
//     return 0;
// }

// user input:
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count = 0;
    printf("enter a string: ");
    // scanf("%s", &str);
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
            count++;
    }
    printf("length: %d", count);
    return 0;
}