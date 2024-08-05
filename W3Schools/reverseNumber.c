// Use a while loop to reverse some numbers:

#include <stdio.h>

int main()
{
    int num;
    int reNum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        reNum = reNum * 10 + num % 10;
        num = num / 10;
    }
    printf("Reverse Number: %d", reNum);
    return 0;
}