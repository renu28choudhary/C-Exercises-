// 17. Write a C program to check whether an alphabet is a vowel or a consonant.

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
//     char str;
//     printf("enter a string: ");
//     scanf("%c", &str);
//     str = tolower(str);
//     for (int i = 0; i < 5; i++)
//     {
//         if (str == vowel[i])
//         {
//             printf("%c is vowel", str);
//             return 0;
//         }
//     }
//     printf("%c is consonent", str);
// }

// another way:

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str;
    printf("enter a string: ");
    scanf("%c", &str);
    str = tolower(str);
    if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
    {
        printf("%c is vowel", str);
    }
    else
    {
        printf("%c is consonent", str);
    }
    return 0;
}