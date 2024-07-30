// Q6: Write a Program to check if the given number is Even or Odd.

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num %2 == 0) ? printf("%d is Even Number", num) : printf("%d is odd Number", num);
    return 0;

}