//
// Created by emray on 6/27/2026.
// Create a count of the number of occurrences of each digit, whitespace, characters (all of them) and all other chars.
#include <stdio.h>
int main() {
    int c, i, nwhite, nother;
    int arr[10];

    nwhite = nother = 0;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++arr[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        }
        else {
            ++nother;
        }
        printf("digits =");
        for (i = 0; i < 10; ++i) {
            printf(" %d", arr[i]);
        printf(", white space = %d, other = %d\n", nwhite, nother);
        }
    }
}

// This code doesn't work, probably Stone Age ancient or something. Whatever lol.