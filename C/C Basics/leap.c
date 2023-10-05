#include <stdio.h>
#include <stdlib.h>

int checkArguments(int argc, char *argv[]);

int main(int argc, char *argv[]) {
    if (checkArguments(argc, argv) != 0) {
        return 1;
    }

    int year = atoi(argv[1]);

    if (year % 4 != 0) {
        printf("%d is not a leap year", year);
    }
    else if (year % 100 != 0) {
        printf("%d is a leap year", year);
    }
    else if (year % 400 != 0) {
        printf("%d is not a leap year", year);
    }
    else {
        printf("%d is a leap year", year);
    }

    return 0;
}

int checkArguments(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <The Year>\n", argv[0]);
        return 1;
    }
    return 0;
}