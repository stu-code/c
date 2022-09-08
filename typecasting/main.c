#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avgProfit;

    int cost        = 10
      , nSales      = 7
      , nDaysWorked = 3
    ;

    //This will not work. Mixing floats and ints is not recommended
    avgProfit = (nSales * cost)/nDaysWorked;

    printf("Average profit before Typecasting: %.2f\n", avgProfit);

    avgProfit = ((float)nSales * (float)cost)/(float)nDaysWorked;
    printf("Average profit after Typecasting: %.2f\n", avgProfit);
}
