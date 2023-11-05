#include <stdio.h>
#include "module1.h"
#include "module2.h"
#include "module3.h"


int main(int argc, char **argv) {
    module3_enum e = CASE2;

    int res1 = module1_function1(42);
    double res2 = module1_function2(0);
    unsigned long long int res3 = module2_function1();
    module3_function1(e);

    printf("res1: %d\n", res1);
    printf("res2: %lf\n", res2);
    printf("res3: %llu\n", res3);
    return 0;
}