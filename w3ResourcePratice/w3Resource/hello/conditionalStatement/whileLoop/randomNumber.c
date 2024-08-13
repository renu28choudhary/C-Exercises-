// 5. Write a C program that generates a random number between 1 and 20 and asks the user to guess it. Use a while loop to give the user multiple chances until they guess the correct number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, n, attempts=0;
    srand(time(NULL));
    randomNumber =rand() % 20 + 1;
    printf("randomNumber: %d \n", randomNumber);
    while (1)
    {
        printf("Guess the random number: ");
        scanf("%d", &n);
        if (randomNumber != n)
        {
            printf("wrong number, Guesss again !!\n");
            attempts = attempts +1;
        }
        else
        {
            printf("you guessed correct! \n");
            break;
        }
    }
    printf("attempts: %d",attempts);
    return 0;
}