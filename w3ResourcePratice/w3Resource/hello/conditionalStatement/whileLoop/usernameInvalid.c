// 7. Write a C program that prompts the user to input a username. Use a while loop to keep asking for a username until a valid one is entered (e.g., at least 8 characters long).

#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];

    while (1)
    {
        printf("Enter a user name:  \n");
        scanf("%s", &name);
        if (strlen(name) >= 8)
        {
            printf("username accepted");
            break;
        }
        else
        {
            printf("Error !! enter a valid user name again\n");
        }
    }
    return 0;
}