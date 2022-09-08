#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int bacon;

    // do bacon = 1 to 10 by 1
    for(bacon = 1; bacon <= 10; bacon++){
        printf("Bacon is %d \n", bacon);
    }

    printf("--------------------------\n");

    // do bacon = 0 to 100 by 8
    for(bacon = 0; bacon <= 100; bacon += 8){
        printf("Bacon is %d \n", bacon);
    }
    return 0;
}
