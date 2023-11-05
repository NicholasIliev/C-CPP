#include "module3.h"
#include <stdio.h>

void module3_function1(module3_enum param) {
    switch(param) {
        case CASE1:
            printf("module3_function1 called with parameter CASE1\n");
            break;
        case CASE2:
            printf("module3_function1 called with parameter CASE2\n");
            break;
        case CASE3:
            printf("module3_function1 called with parameter CASE3\n");
            break;
        default:
            printf("module3_function1 called with unknown parameter\n");
    }
}
