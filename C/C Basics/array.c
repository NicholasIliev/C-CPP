#include <stdio.h>
#include <stdlib.h>

// Function to perform Bubble Sort on an integer array
void bubbleSort(int array[], int n);

int main(int argc, char *argv[]) {
    int i, j;
    int array[argc - 1]; // Declare an integer array to store command-line arguments

    // Convert and store the command-line arguments in the integer array
    for (i = 1; i < argc; i++) {
        array[i - 1] = atoi(argv[i]);
    }

    int n = argc - 1; // Number of elements in the array

    // Sort the array using Bubble Sort
    bubbleSort(array, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

// Bubble Sort algorithm implementation
void bubbleSort(int array[], int n) {
    int temp;
    int swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = 0; // Flag to check if any swaps were made in this pass

        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is larger than the next element, swap them
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1; // Set the flag to true, indicating a swap was made
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}

