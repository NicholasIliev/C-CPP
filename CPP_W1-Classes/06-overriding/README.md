The program [overriding.cpp](overriding.cpp) declares a `Vehicle` class and
2 classes inheriting from it, `Car` and `Bike`. Each should override the
`get_number_of_wheels` virtual function that returns the number of wheels:
2 for Bike, 4 for Car. 

```cxx
#include <iostream>
#include <stdlib.h>

#define NUM_VEHICLES 10

class Vehicle {
public:
    virtual int get_number_of_wheels() = 0;
};

class Car : public Vehicle {
    /* ... */
};

class Bike : public Vehicle {
    /* ... */
};

int main(int argc, char **argv) {
    Vehicle* array[NUM_VEHICLES];

    for(int i = 0; i < NUM_VEHICLES; ++i) {
        if(rand() % 2)
            array[i] = new Car;
        else
            array[i] = new Bike;
    }

    for(int i = 0; i < NUM_VEHICLES; ++i) {
        std::cout << "array[" << i << "] has ";
        std::cout << array[i]->get_number_of_wheels() << " wheels\n";
        delete array[i];
    }

    return 0;
}
```

Override `get_number_of_wheels` in both `Car` and `Bike` so that the program
above compiles. An example of expected output is:
```shell
./overriding
array[0] has 4 wheels
array[1] has 2 wheels
array[2] has 4 wheels
array[3] has 4 wheels
array[4] has 4 wheels
array[5] has 4 wheels
array[6] has 2 wheels
array[7] has 2 wheels
array[8] has 4 wheels
array[9] has 4 wheels
```

Check the correctness of your program with this command:
```shell
check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W1-Classes/06-overriding
```
