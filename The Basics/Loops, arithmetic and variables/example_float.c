// This is an example from Variables_arithmetic with small changes implemented.
// Created by emray on 6/27/2026.
// Changes: right-justified print and float-point arithmetic.

#include <stdio.h>

int main() {
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celcius = (5.0/9.0)*(fahr-32.0); // Emphasizing explicit decimal points for human readers. float-32 = float-32.0
    /*
     * We were unable to use 5/9 in the previous version, but because we are using float
     * it is not truncated because it is the ratio of two floating point values.
     * integers are automatically converted to floats provided one float is already present.
     * fahr = lower & while (fahr <= upper) would naturally work the same way.
     */
        printf("%3.0f\t%6.2f\n", fahr, celcius);
    /*
     * 3.0f here states that the floating point number should be printed at least 3 digits wide.
     * %.2f in %6.1f specifies that it should be written at least 1 char after the decimal point
     * This can be omitted, of course, writing %3f and %6.0f is equivalent, if less verbose.
     */
        fahr = fahr + step;
    }
}
