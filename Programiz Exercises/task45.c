// C Program to Calculate Average Using Arrays

#include <stdio.h>

// int main()
// {
//     int myNumbers[] = {2, 3, 4, 5};
//     int average;
//     int sum = 0;
//     int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
//     printf("length= %d\n", length);
//     for (int i = 0; i <length; i++)
//     {
//         sum = sum + myNumbers[i];
//     }
//     printf("sum= %d \n", sum);
//     average = sum / length;
//     printf("average = %d \n", average);
// }

// for any array with user input

#include <stdio.h>

int main()
{
    int i, n;
    float myArray[100], average, sum = 0.0;

    printf("enter the numbe of elements in array: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Error,please enter positive number!! \n");
    }
    for (i = 0; i < n; i++)
    {
        printf("enter myArray[%d]: ", i);
        scanf("%f", &myArray[i]);
        sum = sum + myArray[i];
    }
    average = sum / n;
    printf("average= %.1f", average);
    return 0;
}