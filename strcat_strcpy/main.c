#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[100] = "Hey ";

    //Continually modifies a
    strcat(a, "Annie ");
    strcat(a, "you ");
    strcat(a, "are ");
    strcat(a, "beautiful! \n");

    printf(" %s", a);


    return 0;
}
