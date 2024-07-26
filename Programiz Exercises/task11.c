// C Program to Check Whether a Character is a Vowel or Consonant:

// #include <stdio.h>

// int main()
// {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     char vowel[5] = {'a', 'e', 'i', 'o', 'u'};

//     for (int i = 0; i < 5; i++)
//     {
//         if (c == vowel[i])
//         {
//             printf("%c Character is a Vowel \n", c);
//             return 0;
//         }
//     }
//     printf("%c Character is a Consonant", c);
// }

// another way:
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    char b = tolower(c);

    if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u')
    {
        printf("%c Character is a Vowel \n", b);
        return 0;
    }
    else
    {
        printf("%c Character is a Consonant", b);
    }
}
