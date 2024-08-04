//  Find out if a person is old enough to vote:

#include<stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    (age >=18) ? printf("you can vote") : printf("wait some more time to wait");
    return 0;
}