// K&R 1.6 and 1.7
// Created by emray 27/6/2026.

#include <stdio.h>

int main () {
    printf("%d", getchar() != EOF);
}

/*
 * getchar() is a function that returns a character (well, technically also a number) inputted from the terminal.
 * You take that character and compare it with EOF in a boolean expression.
 * If it's equal to EOF, then the expression evaluates to 1 (true), if not it's 0 (false)
 * Honestly disregard this task, its kinda nonsensical. Whatever is above works fine, but its more about the concept
 * != takes precedence over !, when the condition for EOF is fulfilled, it returns a value. That's it really.
 * (not a boolean)
 */