#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char grade;

    printf("Enter your grade (A-F) ");
    scanf(" %c", &grade);

    switch(grade){
        case('A') : printf("A? Niceeee");
                    break;
        case('B') : printf("B? Coulda done better");
                    break;
        case('C') : printf("C? Meh");
                    break;
        case('D') : printf("D? Your dumb");
                    break;
        case('F') : printf("F? LOL SERIOUSLY?!");
                    break;
        default   : printf("Enter A-F, dipshit");
    }
    return 0;
}
