#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade         = 0;
    float scoreEntered  = 0;
    float numberOfTests = 0;
    float average       = 0;

    printf("Press 0 when complete. \n\n");

    // Guarantees this runs at least once before the test occurs
    do{
          printf("Tests: %.0f \t Average: %.2f \n", numberOfTests, average);
          printf("\nEnter test score: ");
          scanf("%f", &scoreEntered);

          grade += scoreEntered; // grade = grade + scoreEntered
          numberOfTests++;
          average = grade / numberOfTests; // Running average

    } while(scoreEntered != 0);
    return 0;
}
