#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char dogsName[50]
       , dogsFood[50]
       , sentence[100] = ""; //This must be initialized or it will print invalid characters at the start of the string
    ;

    puts("What is your stupid dog's name? ");
    gets(dogsName);

    puts("What does that motherfucker eat? ");
    gets(dogsFood);

    strcat(sentence, dogsName);
    strcat(sentence, " eats ");
    strcat(sentence, dogsFood);

    puts(sentence);

    return 0;
}
