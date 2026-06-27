//Created by emray on 6/27/2026.
//This file introduces several new ideas,
// including comments, declarations, variables, arithmetic expressions, loops , and formatted output

#include <stdio.h>

/* print Fahrenheit-Celsius table with the formula oC=(5/9)(oF-32) for fahr = 0, 20, ..., 300 */
int main() {
    int fahr, celcius;
    int lower, upper, step;

    /* In C, all variables must be declared. A declaration announces the properties of variables.
       Int has 10^-38 to 10^38 range on x86. Floats provide 6 significant digits.
       Other data types include: char, short, long, double.
       In order; a single byte, short integer, long integer and double precision float.
    */


    lower = 0;          // Lower limit of temperature scale
    upper = 300;        // Upper limit of the temperature scale
    step = 20;          // step size, i.e. how much one cycle increases the loop.
    // Here we initialize all the variables. Assignment statements, which set initial values.
    // Individual statements are terminated with ;

    fahr = lower;
    while(fahr <= upper) {
        celcius = 5.0*(fahr-32)/9.0;
        /*
        The reason for multiplying by 5 and then diving by 9 instead of just multiplying by 5/9
        is because integer division truncates. Fractions are discarded. Since 5/9 are integers, 5/9 would be truncated to 0.
        So Celsius would always be 0
        */
        printf("%d\t%d\n", fahr, celcius);
       /*
         * printf's first arg is a string of chars, each % indicating
         * where one of the other (2nd or 3rd) args is to be substituted
         * and in what form to print it. e.g. %d specifies int, so it will cause the two values of fahr and Celsius
         * to be printed with a \t between them. printf is a stdlib ANSI function, not part of C.
         *
         * Furthermore, printf also recognizes %o, %x, %c, %s and %%
         * In order; octal, hexidecimal, characters, character string and itself (%%)
        */

        /*
         * The numbers right now aren't right-justified, i.e. they look not that pretty. It's an easy fix though.
         * augment each %d with a width (number) the numbers will be printed right-justified. For example 3 and 6
         * printf("%3d %6d\n", fahr, Celsius);
         * This will print the first number of each line in a field 3 digits wide
         * and the second field 6 digits wide
         */
        fahr = fahr + step;
    }
    /* All variables are computed the same way, so we use the while() loop.
     * All the conditions in the () is tested. Then executed. Then retested.
     * When condition = false, the loop ends, executing the statement that follows the loop
     */
    /* The bigger problem with this code is the fact that its not particularly accurate. 0F is actually -17.8C not -17C.
     * So we should probably swap to using floating-point arithmetic. You can find this example under example_float.c
     */
}