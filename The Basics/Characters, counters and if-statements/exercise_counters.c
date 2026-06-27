//
// Created by emray on 6/27/2026.
// K&R 1-8, 1-9, 1-10.

#include <stdio.h>
#include <ctype.h>
// #define EOL '\n' // Yes, this needs to be defined for some reason.

/*
int main () {
    int c, n1;
    n1 = 0;
    while ((c = getchar ()) != EOF) {
        if (c == '\t') {                    // Change this variable here for this task! Yes it is that simple for \t
            ++n1;
            printf("%d\n", n1);
        }
    }
}
*/

// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

/*int main() {
    int c, p = EOF;
    while ((c = getchar()) != EOF) {
        if ((c != ' ') + (p != ' ') > 0) putchar(c);
        p = c;
    }
}*/
// Write a program to copy its input to its output, replacing each tab by \t,
// each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b') {     // This operand do kinda be useless now, backspace?
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(c);
    }
}