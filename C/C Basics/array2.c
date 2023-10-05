#include <stdio.h>
#include <stdlib.h>

// Function to determine if each element in the array is even or odd
void evenOrOdd(int array[], int n);

int main(int argc, char *argv[]) {

    // Check if the number of command-line arguments is greater than 11
    if (argc > 11) {
        printf("Please enter no more than 10 integers!");
        return 1; // Exit with an error code
    }

    // Declare an integer array to store command-line arguments
    int array[argc - 1];
    int i;

    // Convert and store the command-line arguments in the integer array
    for (i = 1; i < argc; i++) {
        array[i - 1] = atoi(argv[i]);
    }

    // Call the evenOrOdd function to process the array
    evenOrOdd(array, argc - 1);

    return 0; // Exit with success
}

// Function to determine if each element in the array is even or odd
void evenOrOdd(int array[], int n) {
    int i;

    // Loop through each element of the array
    for (i = 0; i < n; i++) {
        // Check if the current element is even
        if (array[i] % 2 == 0) {
            printf("%d is even\n", array[i]);
        }
        // If not even, it's considered odd
        else {
            printf("%d is odd\n", array[i]);
        }
    }
}
