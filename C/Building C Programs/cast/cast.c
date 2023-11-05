#include <stdio.h>

typedef enum {
    INT,
    CHAR,
    FLOAT
} array_type;

void array_print(void *ptr, int size, array_type type) {
    if (type == INT) {
        int *intPtr = (int *)ptr; // Cast ptr to an int pointer
        printf("[");
        for (int i = 0; i < size; i++) {
            if (i < size - 1) {
                printf("%d, ", intPtr[i]);
            } else {
                printf("%d", intPtr[i]);
            }
        }
        printf("]\n");
    }
    else if (type == CHAR) {
        char *charPtr = (char *)ptr; // Cast ptr to an char pointer
        printf("[");
        for (int i = 0; i < size; i++) {
            if (i < size - 1) {
                printf("%c, ", charPtr[i]);
            } else {
                printf("%c", charPtr[i]);
            }
        }
        printf("]\n");
    }
    else if (type == FLOAT) {
        float *floatPtr = (float *)ptr; // Cast ptr to an char pointer
        printf("[");
        for (int i = 0; i < size; i++) {
            if (i < size - 1) {
                printf("%f, ", floatPtr[i]);
            } else {
                printf("%f", floatPtr[i]);
            }
        }
        printf("]\n");
    }
}

int main(int argc, char **argv) {
    int int_tab[3] = {1, 2, 3};
    char char_tab[2] = {'a', 'b'};
    float float_tab[3] = {2.5, 1.1, 12.42};

    array_print(int_tab, 3, INT);
    array_print(char_tab, 2, CHAR);
    array_print(float_tab, 3, FLOAT);

    return 0;
}