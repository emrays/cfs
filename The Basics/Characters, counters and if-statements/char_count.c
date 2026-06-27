//
// Created by emray on 6/27/2026.
// Counting characters using previously learned syntax from char_IO.
// I couldn't get K&R's code to work, so I made my own with essentially the same knowledge except if statement.

#include <stdio.h>
#define EOL '\n' // Yes, generating the stupid EOL char in interactive mode is busted.

int main() {
    long nc;
    int c;
    nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == EOL) {
            printf("%ld\n", nc-1); // Print number of input chars, (not including the return char)
            nc = 0;
        }
    }
}
// Programs should act intelligent when given zero-length inputs. It returns the correct value

/* The same concept but for line counting. With EOL specifically defined it creates something useful.
int main () {
    int c, n1;
    n1 = 0;
    while ((c = getchar ()) != EOF) {
        if (c == '\n') {
            ++n1;
            printf("%d\n", n1);
        }
    }
}
*/
