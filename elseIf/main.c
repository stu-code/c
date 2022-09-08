#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade1, grade2, grade3, avg;

    printf("Enter your 3 grades\n");

    scanf("%f", &grade1);
    scanf("%f", &grade2);
    scanf("%f", &grade3);

    avg = (grade1 + grade2 + grade3)/3;

    if(avg >= 90){
        printf("Grade: A");
    } else if(avg >= 80){
        printf("Grade: B");
    } else if(avg >= 70){
        printf("Grade: C");
    } else if(avg >= 60){
        printf("Grade: D");
    } else{
        printf("Your dumb");
    }
    return 0;
}
