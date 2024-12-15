// Calculate the percentage of a user's score in relation to the maximum score in a game:

#include <stdio.h>

int main()
{
    int maxScore = 500;
    int userScore = 200;
    float userPercentage = (float)userScore / maxScore * 100;
    printf("percentage = %.2f", userPercentage);
    return 0;
}