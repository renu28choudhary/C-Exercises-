// 8. Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop.

// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n = 20, sum =0;
//     for(int i=2;i<=n;i++){
//         if(i%2 ==0){
//             sum= sum + pow(i,3);
//         }
//     }
//     printf("sum: %d", sum);
//     return 0;
// }

// another way using while loop:

#include <stdio.h>

int main()
{
    int n = 20, sum = 0;
    while (n > 0)
    {
        sum = sum + (n * n * n);
        n = n - 2;
    }
    printf("sum: %d", sum);
    return 0;
}