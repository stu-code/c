#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tuna = 20;
    int a = 5, b = 10, answer = 0;

    printf("%d\n", tuna);
    tuna++; //Increments by 1

    printf("%d\n", tuna);
    tuna--; //Decrements by 1;

    printf("%d\n", tuna);

    ++tuna; //Does not matter if it's before or after since it increments by 1, but....
    printf("%d\n", tuna);

    //What happens when it's on the right instead of the left?
    answer = ++a * b; //Add 1 to the value of A and multiply it by b

    printf("Answer: %d\n", answer);

    //Reset
    a = 5, b = 10, answer = 0;
    answer = a++ * b; //Do the equation, run this line of code, then change a afterwards. In other words, this is 5*10, increment a by 1.

    printf("Answer: %d\n", answer);

    //Whenever it's used on the left, it's changed before running an equation
    //Whenever it's used on the right, it adds 1 to a after running the equation

    return 0;
}
