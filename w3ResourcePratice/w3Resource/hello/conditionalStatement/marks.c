// Write a C program to determine eligibility for admission to a professional course based on the following criteria
// Eligibility Criteria : Marks in  Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in  Maths and Physics >=140

#include <stdio.h>

int main()
{
    int p =78, c = 80, m = 90;
    int total = p + c+ m;
    int mpTotal= m + p;

    if (total >= 190 || mpTotal >= 140)
    {
        if (m >= 65 && c >= 50 && p >= 55)
        {
            printf("you are eligible for admission");
        }
    }
    else
    {
        printf("you are not eligible for admission");
    }
    return 0;
}