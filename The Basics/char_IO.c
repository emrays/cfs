/* Created by Emray on 27/6/2026. Character Input and Output. Often shorthanded as IO.

 * stdlib supports some very simple inputs and outputs. A text stream is a sequence of characters divided into lines.
 * c = getchar(); reads the next input character from a text stream and returns that as its value. As such,
 * "c" contains the next character of input.
 * putchar(c); prints the contents of the integer variable c as a character, usually on the screen (where else really?)
 * example:
#include <stdio.h>
int main() {
    int c = getchar();
    while (c != EOF) {                          // != means not equals to. EOF is a macro, end of file.
        putchar(c);
        c = getchar();
    }
}
 * The problem is distinguishing end of input from valid data. The solution is that getchar returns a value that cannot
 * be mistaken for any real input. This value is called EOF.
 * We must declare C to be a type (data type) big enough to hold any value that getchar returns.
 * That is why we cant use 'char' (1 byte), we must use int (4 bytes). A more concise way of writing the above example is:
 */
#include <stdio.h>
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
