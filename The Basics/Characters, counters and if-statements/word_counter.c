//
// Created by emray on 6/27/2026.
// Loosely based definition of a word based on a sequence of characters that don't contain any specials.
// This WOULD work provided a text file input. It will not work with an IDE.
#include <stdio.h>

#define IN 0 /* Inside a word*/
#define OUT 1 /* Outside a word */

int main() {
    int c, n1, nw, nc, state;
    state = OUT;
    n1 = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++n1;

        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", n1, nw, nc);
}