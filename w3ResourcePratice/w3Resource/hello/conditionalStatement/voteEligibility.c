// 5. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.

#include <stdio.h>
int main()
{
    int n;
    printf("enter age: ");
    scanf("%d", &n);
    (n > 21) ? printf("%d ,you are Eligible to vote !!", n) : printf("%d, you are not Eligible to vote", n);
    return 0;
}