// 12. Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.
// Test Data :
// Input the Roll Number of the student :784
// Input the Name of the Student :James
// Input the marks of Physics, Chemistry and  Computer Application : 70 80 90

#include <stdio.h>

int main()
{
    int n, p, m, c, total;
    char name[20];
    float percentage;
    printf("Enter the name: ");
    scanf("%s", &name);
    printf("Enter the roll number: ");
    scanf("%d", &n);
    printf("Enter the marks p,m,c: ");
    scanf("%d %d %d", &p, &m, &c);

    total = p + m + c;
    printf("total: %d \n", total);
    percentage = (total / 3);
    printf("percentage: %.2f", percentage);
    return 0;
}
