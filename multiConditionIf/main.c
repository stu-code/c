#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hoursStudied = 10;
    int kidsBeatUp   = 2;
    char response;

    if( (hoursStudied >= 10) && (kidsBeatUp == 0) ){
        printf("You are a good kid\n");
    } else{
        printf("You are a real piece of shit\n");
    }

    printf("Do you like bagels? (y/n)\n");
    scanf(" %c", &response);    // 'response' is not an array, so we must use &

    // Must compare strings with SINGLE QUOTES
    if( (response == 'y') || (response == 'n') ){
        printf("Good job, you typed the response correctly");
    } else{
        printf("Have you ever typed before?");
    }
}
