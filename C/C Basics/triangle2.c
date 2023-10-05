#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if the command-line argument is provided
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    // Convert the input argument to an integer
    int num = atoi(argv[1]);

    // Print a pattern of asterisks
    for (int i = 1; i <= (num + 1) / 2; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Continue printing the pattern in reverse
    for (int i = ((num + 1) / 2) - 1; i <= num; i++) {
        for (int j = i; j <= num; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
