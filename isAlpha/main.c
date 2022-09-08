#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  //Includes isalpha(), isdigit(). NOTE: THESE ARE CASE-SENSITIVE!
#include <string.h>
#include <math.h>

int main()
{
    //Ints and chars can be used interchangeably
    int value = '2';

    if( (isalpha(value)) ){
        printf("%c is a letter", value);
    } else if( (isdigit(value)) ){
        printf("%c is a number", value);
    } else{
        printf("WTF is %c?!", value);
    }
    return 0;
}
