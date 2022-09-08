#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lastName[20];

    printf("Enter your last name\n");
    scanf(" %c", lastName);

    // Short-hand if/else: (test) ? (true code) : (false code)
    (lastName[0] < 'C') ? printf("You are on the blue team") : printf("You are on the red team");

    return 0;
}
