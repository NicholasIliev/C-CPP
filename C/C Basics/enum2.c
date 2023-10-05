#include <stdio.h>

typedef enum {
    FLAG1 = 1,
    FLAG2 = 2,
    FLAG3 = 4,
    FLAG4 = 8
} flags;

void print_flags(flags f) {

    if(f & FLAG1)                       //  checks if FLAG1 is set in f, and it is set in both 3 and 7.
        printf("FLAG1 enabled\n");
    if(f & FLAG2)                       //  checks if FLAG2 is set in f, and it is set in both 3 and 7.
        printf("FLAG2 enabled\n");
    if(f & FLAG3)                       // checks if FLAG3 is set in f, and it is set only in 7.
        printf("FLAG3 enabled\n");
    if(f & FLAG4)                       // checks if FLAG4 is set in f, and it is not set in either 3 or 7.
        printf("FLAG4 enabled\n");
}

int main(int argc, char **argv) {
    flags f1 = FLAG1 | FLAG2;           // FLAG1 | FLAG2 = 3 (binary: 0011)
    flags f2 = FLAG1 | FLAG2 | FLAG3;   // FLAG1 | FLAG2 | FLAG3 = 7 (binary: 0111)

    printf("f1:\n");
    print_flags(f1);

    printf("f2:\n");
    print_flags(f2);

    return 0;
}

/*

In the context of working with binary flags and bitwise operations, "set" typically refers to a bit having a value of 1. When we say that a flag is "set," it means that the corresponding bit for that flag in a binary representation has a value of 1, indicating that the flag is considered active, enabled, or "on."

Conversely, when a flag is "not set," it means that the corresponding bit has a value of 0, indicating that the flag is inactive, disabled, or "off."

For example, if we have a set of flags represented as binary numbers:

FLAG1 might be represented as 0001 (with the rightmost bit set to 1).
FLAG2 might be represented as 0010 (with the second rightmost bit set to 1).
FLAG3 might be represented as 0100 (with the third rightmost bit set to 1).
When we say that FLAG1 is "set," it means that the rightmost bit of its binary representation is 1. Similarly, when we say that FLAG2 is "set," it means that the second rightmost bit is 1, and so on.

In summary, "set" in this context refers to a flag being active or having a value of 1 in its binary representation.

These values (1, 2, 4, and 8) are chosen to be powers of 2 to ensure that they have distinct binary representations, allowing you to use bitwise OR to combine them without overlapping. This assignment ensures that each flag can be checked independently using bitwise operations, providing the desired behavior in your code.

I apologize for the earlier confusion, and thank you for pointing it out.

*/