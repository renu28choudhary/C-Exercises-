// Use strings to create a simple welcome message:

// #include<stdio.h>

// int main(){
//     char message[] = "welcome to c programming";
//     char name[] = "Renu";
//     printf("%s %s", message,name);
//     return 0;
// }

// use input;
#include<stdio.h>

int main(){
    char name[30];
    printf("enter your full name: ");
    fgets(name,sizeof(name),stdin);
    printf("%s",name);
    return 0;
}
