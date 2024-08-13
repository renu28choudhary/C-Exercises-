// 1. Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.
#include<stdio.h>

int main(){
    int n=0, n1=10;
    while(n<=10){
        printf("%d \n",n);
        n++;
    }
    while(n1 >= 0){
        printf("%d \n",n1);
        n1--;
    }
    return 0;
}