#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalCost = 1000;

    totalCost *= 1.1;
    printf("Total cost: %d\n", totalCost);

    totalCost *= 1.1;
    printf("Total cost: %d\n", totalCost);

    totalCost *= 1.1;
    printf("Total cost: %d\n", totalCost);

    totalCost *= 1.1;
    printf("Total cost: %d\n", totalCost);

    // Try adding
    printf("Add 100: %d\n", totalCost += 100);
    return 0;
}
