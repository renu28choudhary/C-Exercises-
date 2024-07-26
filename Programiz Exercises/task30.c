// C Program to Check Armstrong Number
// program for 3 digitsnumber:
#include <stdio.h>

int main()
{
    int oNum, remainder, result = 0, num; // 153

    printf("Enter a 3 digit number: ");
    scanf("%d", &oNum);
    num = oNum;
    while (num != 0)
    {
        remainder = num % 10;                                // 153 %10 //3
        result = result + remainder * remainder * remainder;
        //result = result + pow() //  3
        num = num / 10;                                      // 153/10 = 15
    }
    printf("%d result \n", result);
    printf("%d oNum", oNum);
    (result == oNum) ? printf("%d is Armstrong Number", oNum) : printf("%d is not an Armstrong number", oNum);

    return 0;
}


// #include <math.h>
// #include <stdio.h>

// int main() {
//    int num, originalNum, remainder, n = 0;
//    float result = 0.0;

//    printf("Enter an integer: ");
//    scanf("%d", &num);

//    originalNum = num;

//    // store the number of digits of num in n
//    for (originalNum = num; originalNum != 0; ++n) {
//        originalNum /= 10;
//    }

//    for (originalNum = num; originalNum != 0; originalNum /= 10) {
//        remainder = originalNum % 10;

//       // store the sum of the power of individual digits in result
//       result += pow(remainder, n);
//    }

//    // if num is equal to result, the number is an Armstrong number
//    if ((int)result == num)
//     printf("%d is an Armstrong number.", num);
//    else
//     printf("%d is not an Armstrong number.", num);
//    return 0;
// }