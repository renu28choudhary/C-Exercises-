// . Write a C program that prompts the user to input a series of numbers until they input a duplicate number. Use a while loop to check for duplicates.

#include <stdio.h>

int main()
{
    int pn[100], cn, hasDuplicate = 0;
    int index = 0;
    while (!hasDuplicate)
    {
        printf("enter a number: ");
        scanf("%d", &cn);

        for (int i = 0; i < index; i++)
        {
            if (cn == pn[i])
            {
                hasDuplicate = 1;
                printf("duplicate number");
                break;
            }
        }
        pn[index++] = cn;
    }
    return 0;
}
