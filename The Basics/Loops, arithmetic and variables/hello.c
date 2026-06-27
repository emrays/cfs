//
// Created by emray on 6/27/2026.
//
#include <stdio.h>          // include information about standard library

int main()                  // define a function called main that received no argument values e.g ().
                            //C99 or later does not support implicit int
{                           //statements of main are enclosed in braces
printf("hello, world\n");   // main calls library function printf to print this sequence of characters
                            // \n represents the newline character. printf never supplies a newline character automatically
                            // Among the others that C provides are:
                            // \t for tab, \b for backspace, \" for the double quote and \\ for the backslash itself. {ref ch. 2.3}
}