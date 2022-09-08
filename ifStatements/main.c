#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int age;
    char gender;

    printf("How old are you?\n");
    scanf(" %d", &age); //Put a space in front of all scanf's from now on. There is a bug that will cause it to skip over values.

    printf("What is your gender? (m/f)\n");
    scanf(" %c", &gender);

    if(age >= 18) {
        printf("You may enter this website ");

        if(gender == 'm'){  //Double quotes makes a difference. This does not work in double quotes.
            printf("dude.");
        }
        else{
            printf("m'lady.");
        }
    } else{
        printf("Go play Minecraft, this isn't for you.");
    }
}
