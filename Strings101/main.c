#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[]  = "Stu";
    char food[] = "Steak";

    printf("%s loves %s\n", name, food);

    strcpy(name, "Annie");
    strcpy(food, "Chia");   //Adding a space causes issues. Maybe we'll figure that out later.

    printf("%s loves %s\n", name, food);
}
