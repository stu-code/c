#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define MAXLEN 15

int main()
{
    char pass[50];
    int flagUpper, flagNum, flagSpecial;
    int pass_len;

    // Check that the password is <= MAXLEN characters
    do{
        //Init flags at the first iteration
        flagUpper = flagNum = flagSpecial = 0;

        printf("Enter your password (%d characters or less): ", MAXLEN);
        scanf(" %s", pass);

        pass_len = strlen(pass);

//        printf("LEN: %d \n", pass_len);

        //Don't start iterating through and go back to the top (all flags are 0 at this point)
        if(pass_len > MAXLEN){
            printf("Please enter a password %d characters or less.\n\n", MAXLEN);
        } else{

            for(int i = 0; i < pass_len; i++){

                //Set and retain a flag for each type
                if(isupper(pass[i]) ){
                   flagUpper = 1;
                } else if(isdigit(pass[i]) ){
                   flagNum = 1;
                } else if(isalpha(pass[i]) == 0)
                   flagSpecial = 1;

                //Print each check
                printf("[%d] %c: Upper %d Num %d Special %d\n", i, pass[i], flagUpper, flagNum, flagSpecial);
            }

            //If we do not meet the complexity requirements, try again.
            if( (flagUpper + flagNum + flagSpecial < 3) ){
                printf("Your password does not meet the complexity requirements. Your password must have at least one number, capital letter, and special character.\n\n");
            }
        }
      } while(flagUpper + flagNum + flagSpecial < 3);

      printf("Your password was entered successfully. \n");

    return 0;
}
