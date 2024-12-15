// 18. Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>

int main()
{
    int price, sellingPrice, loss, profit;
    printf("entera price: ");
    scanf("%d", &price);
    printf("enter a selling price: ");
    scanf("%d", &sellingPrice);
    if (price > sellingPrice)
    {
        loss = price - sellingPrice;
        printf("loss= %d", loss);
    }
    else
    {
        profit = sellingPrice - price;
        printf("profit= %d", profit);
    }
    return 0;
}