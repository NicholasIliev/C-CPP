#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int *a = malloc(10 * sizeof(int));
    if (!a) return -1;

    for (int i = 0; i < 10; i++)
        a[i] = i * 2;

    int *b = a;

    for (int i = 0; i < 10; i++)
        printf("%d ", b[i]);
    printf("\n");

    free(a); // Free the allocated memory.

    return 0;
}