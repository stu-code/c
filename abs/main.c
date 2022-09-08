#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int startYear
      , endYear
      , age
    ;

    puts("Enter a start year");
    scanf(" %d", &startYear);

    puts("Enter an end year");
    scanf(" %d", &endYear);

    age = abs(endYear - startYear);

    printf("Your age is %d", age);

    return 0;
}
