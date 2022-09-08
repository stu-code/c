#include <stdio.h>
#include <math.h>

/* 1.4: Symbolic Constants. Note: Symbolic constants are case-sensitive. */
#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    float fahr, celsius;

    fahr = LOWER;

    /* Floats: Celsius is defined as a float although Fahrenheit is an integer.
       Fahrenheit must be converted to a float in order to return a float?
       If we want to print it as an integer, we can typecast it in our print statement.
    */
    printf("F to C Temperature Conversion Table\n"); /* Exercise 1-3 */

    while(fahr <= UPPER) {
        celsius = (fahr-32)*5.0/9.0;
        printf("%d\t%.2f\n", (int)fahr, celsius);   /* Typecast Fahrenheit to integer to round it to the nearest int */
        fahr = fahr + STEP;
    }

    /* Exercise 1-4 */
    celsius = LOWER;

    printf("\nC to F Temperature Conversion Table\n");

    while(celsius <= UPPER)
    {
        fahr = (9.0/5.0)*celsius + 32;    /* The returned value is different if a floating point is not specified for each number */
        printf("%d\t%d\n", (int)celsius, (int)fahr);
        celsius = celsius + STEP;
    }

    /* Exercise 1-5 */
    printf("\nF to C Conversion Table Backwards\n");

    for(fahr = UPPER; fahr >= 0; fahr = fahr - STEP)
    {
        celsius = (fahr - 32)*5.0/9.0;
        printf("%d\t%.2f\n", (int)fahr, celsius);
    }
}
