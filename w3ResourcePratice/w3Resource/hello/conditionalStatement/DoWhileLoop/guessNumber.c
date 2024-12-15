// 5. Write a C program that generates a random number between 1 and 100 and asks the user to guess it. Use a do-while loop to give the user multiple chances until they guess the correct number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, randomNum;
    srand(time(NULL));
    randomNum = rand() % 100 + 1;
    printf("%d\n", randomNum);
    do
    {
        printf("Guess the number: ");
        scanf("%d", &num);
        if (num == randomNum)
        {
            printf("you guessed correct !!\n");
        }
        else
        {
            printf("oops, you guessed wrong !!\n");
        }
    } while (num != randomNum);

    return 0;
}