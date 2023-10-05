#include <stdio.h>

int multiplication();

int main(){
    int size_of_int = sizeof(int);
    int size_of_double = sizeof(double);
    int size_of_ulli = sizeof(unsigned long long int);

    printf("%d\n",size_of_int);
    printf("%d\n", size_of_double);
    printf("%d\n",size_of_ulli);
    printf("%d\n",multiplication(size_of_int, size_of_double, size_of_ulli));

    return 0;
}

int multiplication(int num1, int num2, int num3){
    return (int)(num1 * num2 * num3);
}