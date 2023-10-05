#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int ulli;

ulli factorial(int num);

int main(int argc, char **argv) {

    int num = atoi(argv[1]);

    ulli result = factorial(num);

    printf("%d! = %llu\n", num, result);

    return 0;
}

ulli factorial(int num) {
    int i;
    ulli result = 1;

    for (i = 2; i <= num; i++) {
        result *= i;
    }

    return result;

}