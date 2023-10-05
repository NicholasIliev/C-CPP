#include <stdio.h>
#include <stdlib.h>

double multiply(double num1, double num2, double num3);

int checkArguments(int argc, char *argv[]);

int main(int argc, char **argv) {
    if (checkArguments(argc, argv) != 0) {
        return 1;
    }

    double num1 = atof(argv[1]);
    double num3 = atof(argv[2]);
    double num2 = atof(argv[3]);

    printf("%lf\n",multiply(num1, num2, num3));

    return 0;
}

double multiply(double num1, double num2, double num3){
    return (num1 * num2 * num3);
}

int checkArguments(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <num1> <num2> <num3>\n", argv[0]);
        return 1;
    }
    return 0;
}


