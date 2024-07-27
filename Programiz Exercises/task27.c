// C Program to Check Whether a Number is Palindrome or Not

#include <stdio.h>

int main()
{
    int num, rNum = 0, remainder, temp; // 23
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num; // 131
    while (temp != 0)
    {
        remainder = temp % 10;        // 131 %10 = 1
        rNum = rNum * 10 + remainder; // 1
        temp = temp / 10;             // 13
    }
    printf("%d rnum \n", rNum);
    (num == rNum) ? printf("%d is Palindrome number", num)
                  : printf("%d is not Palindrome number", num);
    return 0;
}

// int main()
// {
//     int oNum = 252, rNum = 0, remainder, temp;
//     temp = oNum;
//     while (temp != 0)
//     {
//         remainder = temp % 10;        // 6
//         rNum = rNum * 10 + remainder; // 6
//         temp = temp / 10;
//     }
//     (oNum == rNum) ? printf("%d is Palindrome number", oNum) : printf("%d is not Palindrome number", oNum);
//      return 0;
// }
