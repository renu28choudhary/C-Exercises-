// C Program to Find Largest Element in an Array

#include <stdio.h>

int main()
{
    int n;
    double myNum[100];
    // getting length of an array
    printf("Enter the length of myNum array: ");
    scanf("%d", &n);

    // adding the array elements by uer input:
    for (int i = 0; i < n; i++)
    {
        printf("enter the array element[%d]:  ", i + 1);
        scanf("%lf", &myNum[i]);
    }

    // for storing the value of myNum element.
    for (int i = 1; i < n; i++)
    {
        if (myNum[0] < myNum[i])
        {
            myNum[0] = myNum[i];
        }
    }
    printf("the largest number= %.1lf", myNum[0]);
    return 0;
}