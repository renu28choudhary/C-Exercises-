// C Program to Reverse a Number:

#include <stdio.h>

int main()
{
    int num, reverseNum = 0, remainder;
    printf("Enter a Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;                     // 12/10 remainder 2 // 1
        reverseNum = reverseNum * 10 + remainder; // 0+2 =2
        num = num / 10;                           // 12/10 = 1
    }

    printf("reverse number: %d", reverseNum);
    return 0;
}

// using for loop:

// int main()
// {
//     int n = 23, rnum = 0, temp, remainder;
//     temp = n; // 23

//     for (; temp != 0; temp /= 10)
//     {                                 // 23/ 10 = 2
//         remainder = temp % 10;        //  3
//         rnum = rnum * 10 + remainder; //  3
//     }
//     printf("reverse number: %d", rnum);
//     return 0;
// }