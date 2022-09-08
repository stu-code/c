#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define NDICE 4

/* Create a game where the user rolls 3 dice and prints out their total.
   Ask user to guess if the next roll will be higher or lower than the previous.
   If they win, tell them they won. If they lose, tell them they suck.
*/

int main()
{
    int dice[NDICE];
    int diceTotal;

    char answer;
    char playAgain;

    do{
        //Reset diceTotal
        diceTotal = 0;

        //Generate all dice rolls
        for(int i = 0; i < NDICE; i++){
            dice[i] = ( rand() % 6) + 1;

            //Only print the first n-1 dice
            if(i < NDICE-1){
              printf("Dice %d: %d\n", i+1, dice[i]);
            }
        }

        //Sum dice rolls 1-3
        for(int i = 0; i < NDICE-1; i++){
            diceTotal = diceTotal + dice[i];
        }

        printf("----------------------------\n");
        printf("Total: %d\n\n", diceTotal);

        //Dice 4 is already rolled. Use NDICE-2 to get the 3rd element.
        printf("Will the next roll be higher than, lower than, or the same as %d? (h/l/s): ", dice[NDICE-2]);
        scanf(" %c", &answer);

        answer = toupper(answer);

        printf("%d\n\n", dice[NDICE-1]);

        //Win conditions. "You x. Play again? (Y/N) <input>"
        if(   (answer == 'L' && dice[NDICE-2] > dice[NDICE-1])  //Dice 3 > Dice 4
           || (answer == 'H' && dice[NDICE-2] < dice[NDICE-1])  //Dice 3 < Dice 4
           || (answer == 'S' && dice[NDICE-2] == dice[NDICE-1]) //Dice 3 = Dice 4
          )
        {
            printf("You win! ");
        } else {
            printf("You suck. ");
        }

        //If the user want to play again, go back to the top. Otherwise, end the program.
        printf("Play again? (Y/N) ");
        scanf(" %c", &playAgain);

        playAgain = toupper(playAgain);

        if(playAgain == 'Y'){
           printf("\n");
        }

    } while(playAgain == 'Y');

    return 0;
}
