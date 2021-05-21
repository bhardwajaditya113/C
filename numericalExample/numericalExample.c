/* Fahrenheit to Celcius conversion table */
#include <stdio.h>

int main(void){
    float fahr, celcius;
    int lower, upper, step;

    /*Set lower and upper limits of the temperature table along with table increment step-size*/
    lower = 0;
    upper = 300;
    step = 20;

    /*Create conversion table using the equation: C = (5/9)(F-32) */
    fahr = lower;
    while(fahr <= upper){
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f \t %6.1f\n", fahr, celcius);
        fahr += step;
    }
}