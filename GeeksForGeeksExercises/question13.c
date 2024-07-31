// Q13: Write a Program to find the maximum and minimum of an Array.

// #include <stdio.h>

// int main()
// {
//     int myNum[] = {12, 13, 41, 5};
//     int maxNum, minNum;
//     int length = sizeof(myNum) / sizeof(myNum[0]);
//     printf("length: %d \n", length);
//     minNum = myNum[0];
//     maxNum = myNum[0];

//     for (int i = 1; i < 4; i++)
//     {
//         if (minNum > myNum[i])
//         {
//             minNum = myNum[i];
//         }
//     }
//     for (int i = 1; i < 4; i++)
//     {
//         if (maxNum < myNum[i])
//         {
//             maxNum = myNum[i];
//         }
//     }

//     printf("Minimum number: %d \n", minNum);
//     printf("Maximum number: %d\n", maxNum);
//     return 0;
// }

// user input array:

#include <stdio.h>

int main()
{
    int length, maxNum, minNum;
    int myNum[length];
    printf("Enter the length of array: ");
    scanf("%d", &length);
    for (int i = 0; i < length; i++)
    {
        printf("Enter the elements of array myNum[%d]:  ", i);
        scanf("%d", &myNum[i]);
    }
    minNum = myNum[0];
    for (int i = 1; i < length; i++)
    {
        if (minNum > myNum[i])
        {
            minNum = myNum[i];
        }
    }
    printf("Minimum number: %d \n", minNum);
    return 0;
}