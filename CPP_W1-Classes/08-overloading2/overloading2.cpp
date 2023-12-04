#include <iostream>

class Complex {
private:
    int real{0};
    int imag{0};

public:
    Complex() = default;
    Complex(int real_part, int imaginary_part);
    int get_real_part();
    int get_imaginary_part();
};

Complex::Complex(int real_part, int imaginary_part) 
    : real{real_part}, imag{imaginary_part} {};

int Complex::get_real_part() {
    return real;
}

int Complex::get_imaginary_part() {
    return imag;
}

/* implement operator overrides here */

int main(int argc, char **argv) {
    Complex c1(4, 5);
    Complex c2(9, 11);
    
    std::cout << c1 + c2 << "\n"; // should print (13+16i)

    return 0;
}
