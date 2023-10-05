#include <stdio.h>   // Include standard input/output library for functions like printf
#include <stdlib.h>  // Include standard library for functions like atoi

int main(int argc, char *argv[]) {
    // Declare variables to be used in the program
    int i, j;

    // Check if the program was called with at least one command-line argument
    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]); // Print a usage message if not enough arguments are provided
        return 1; // Return a non-zero exit code to indicate an error
    }

    // Convert the first command-line argument (a string) to an integer
    int num = atoi(argv[1]);

    // Loop to print a pattern of asterisks
    for (i = 1; i <= num; i++) {  // This loop iterates from 1 to 'num'
        for (j = 1; j <= i; j++) {  // This nested loop iterates from 1 to 'i'
            printf("*");  // Print an asterisk for each iteration of the inner loop
        }
        printf("\n");  // Print a newline character to move to the next line after each row of asterisks
    }

    return 0;  // Return 0 to indicate successful execution of the program
}
