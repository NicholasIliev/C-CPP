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
