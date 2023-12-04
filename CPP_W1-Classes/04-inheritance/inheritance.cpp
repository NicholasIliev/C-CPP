#include <iostream>

/* Class definition and member function implementation here */

int main(int argc, char **argv) {
    Vehicle v(20000);  // a Vehicle with mileage = 20000 miles
    Car c1(10000, 2);  // a Car with mileage = 10000 miles and 2 steering wheels
    Car c2(5000, 4);   // a Car with mileage = 5000 miles and 4 steering wheels
    Motorbike m(50000, 500); // a Motorbike with mileage = 50000 miles and class 500cc

    std::cout << "v's mileage is: " << v.get_mileage() << "\n";
    
    std::cout << "c1's mileage is: " << c1.get_mileage();
    std::cout << ", steering wheels: " << c1.get_steering_wheels << "\n";

    std::cout << "c2's mileage is: " << c2.get_mileage();
    std::cout << ", steering wheels: " << c2.get_steering_wheels << "\n";
    
    std::cout << "m's mileage is:  " << m.get_mileage();
    std::cout << ", cc class: " << m.get_cc_class() << "\n";

    return 0;
}
