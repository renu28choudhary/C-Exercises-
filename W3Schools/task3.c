// Use different data types to calculate and output the total cost of a number of items:

#include <stdio.h>

int main()
{
    int items = 45;
    float costPerItem = 3.99;
    float totalCost = items * costPerItem;
    printf("totalCost = %.2f", totalCost);
    return 0;
}