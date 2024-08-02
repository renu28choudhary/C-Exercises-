// Q14: Write a Program to Reverse an Array.

#include<stdio.h>  
int main()  
{  
    int n, arr[n], i;  
    printf("Enter the size of the array: ");  
    scanf("%d", &n);  
    
    for(i = 0; i < n; i++)  
    {   printf("Enter the elements: "); 
        scanf("%d", &arr[i]);  
    }  
    int rev[n], j = 0;  
    for(i = n-1; i >= 0; i--)  
    {  
        rev[j] = arr[i];  
        j++;  
    }  
    printf("The Reversed array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", rev[i]);  
    }  
}  