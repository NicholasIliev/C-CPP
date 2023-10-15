#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x = atoi(argv[1]); // Number of rows
    int y = atoi(argv[2]); // Number of columns
    int xy = x * y;

    // Allocate memory for the array of int* (rows)
    int **arr = (int **)malloc(x * sizeof(int *));

    // Allocate memory for each column
    for (int i = 0; i < y; i++) {
        arr[i] = (int *)malloc(y * sizeof(int));
    }

    // Initialize the array with values
    int value = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            arr[i][j] = value++;
        }
    }

    // Print the array
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < x; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}


