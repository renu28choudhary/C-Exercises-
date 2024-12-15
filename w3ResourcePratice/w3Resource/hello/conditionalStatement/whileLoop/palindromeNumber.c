// 9. Write a C program that implements a program to check if a given number is a palindrome using a while loop.
// num and reverse number same.
#include <stdio.h>
int main()
{
    int num, rnum = 0, remainder;
    printf("enter a number: ");
    scanf("%d", &num);
    int oNum = num;
    while (num > 0)
    {
        remainder = num % 10;
        rnum = rnum * 10 + remainder;
        num = num / 10;
    }
    (oNum == rnum) ? printf("%d is palindrome number", oNum) : printf("%d is not a palindrome number", oNum);
    return 0;
}