// 3. Write a C program that calculates the product of numbers from 1 to 5 using a while loop.

# include<stdio.h>

int main(){
    int n=5,product=1;
    while(n>0){
      product = product *n;
      n--;
    }
    printf("product: %d",product);
    return 0;
}