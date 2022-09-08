#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int a
      , howMany
      , maxValue = 100
    ;

    printf("How many loops do you fwant to loop? ");
    scanf(" %d", &howMany);

    for(a = 1; a <= maxValue; a++){
        printf("%d\n", a);

        if(a == howMany){
            break;
        }

        //Shorthand version does not work. It is not implemented in this way.
//        (a == howMany) ? break : continue;

    }
    return 0;
}
