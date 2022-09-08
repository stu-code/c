#include <stdio.h>
#include <stdlib.h>

int main()
{
    int currentYear, birthYear, age;

    currentYear = 2020;
    birthYear   = 1989;
    age         = currentYear - birthYear;

    printf("Stu is %d years old.\n", age);

    return 0;
}
