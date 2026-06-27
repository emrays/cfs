// Exercises: modify to print a header, and write a corresponding Celsius to Fahrenheit table. (Ref org table)
// Created by emray on 6/27/2026.
//

#include <stdio.h>

int main() {
    float lower, upper, step;
    double fahr;

    lower = 0;
    upper = 300;
    step = 20;

    double celsius = lower;
    printf("Celsius to Fahrenheit\n");
    while (celsius <= upper) {
        fahr = (celsius)*(9.0/5.0)+32.0;
        printf("%3.2f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}