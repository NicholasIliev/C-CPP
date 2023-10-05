#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int ull;

typedef struct s_rectangle {
    ull width;
    ull length;
} rectangle;

void print_rectangle(rectangle r) {
    printf("Rectangle is %llu x %llu\n", r.width, r.length);
}

int main(int argc, char **argv) {
    rectangle r;
    ull width;
    ull length;

    if(argc == 3) {
        width = atoll(argv[1]);
        length = atoll(argv[2]);

        r.width = width;
        r.length = length;

        print_rectangle(r);
    }

    return 0;
}