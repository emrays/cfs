// Created by emray on 6/27/2026.
// The humble for statement. This is a variation on the temperature converter previously showed off.
/*
 *
int main () {
    for (int fahr = 0; fahr <= 300 ; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
 * I dont know what you think but I think this is more elegant. Most of the variables were dropped, only fahr remains
 * The lower and upper limits appear only as upper and lower limits for the "for" statement.
 * The math itself that does the compute doesnt appear before the third argument for printf.
 * Any floating point expression can occur within %6f. for and while loops do much of the same things, essentially
 * for loops are a generalization of while loops. The initialization stays the same (fahr = 0, fahr <= 300 and step +20)
 * The choice between for loops and while loops is arbitrary. It is, however, bad practice to burry magic numbers like this
 * Instead you should do it like this:
 */
#include <stdio.h>

#define LOWER 0             // Notice that there is no ; ending for #define.
#define UPPER 300           // These are conventionally written in upper case for easy reading
#define STEP 20

int main() {
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}