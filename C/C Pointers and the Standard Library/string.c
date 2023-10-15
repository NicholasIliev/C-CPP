#include <stdio.h>
#include <string.h>

int main() {
    char buffer1[100], buffer2[100];

    printf("input string1:\n");
    fgets(buffer1, sizeof(buffer1), stdin);

    printf("input string2:\n");
    fgets(buffer2, sizeof(buffer2), stdin);

    int result = strcmp(buffer1, buffer2);

    if (result == 0) {
        printf("strings are similar\n");
    } else {
        printf("strings are different\n");
    }

    return 0;
}
