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
    
    Complex operator+(Complex& other);
};

Complex::Complex(int real_part, int imaginary_part) 
    : real{real_part}, imag{imaginary_part} {};

int Complex::get_real_part() {
    return real;
}

int Complex::get_imaginary_part() {
    return imag;
}

Complex Complex::operator+(Complex& other) {
    return Complex(real + other.real, imag + other.imag);
}

std::ostream& operator<<(std::ostream& out, Complex c) {
    return std::cout << "(" << c.get_real_part() << "+" << c.get_imaginary_part() << "i)";
}

template <typename T> void add_and_print(T t1, T t2) {
    std::cout << t1 << " + " << t2 << " = " << t1 + t2 << "\n";
}

int main(int argc, char **argv) {
    Complex c1(4, 5);
    Complex c2(9, 11);
    int i1 = 4, i2 = 9;
    double d1 = 5.8, d2 = 11.2;

    add_and_print<Complex>(c1, c2); // should print "(4+5i) + (9+11i) = (13+16i)"
    add_and_print<int>(i1, i2); // should print "4 + 9 = 13"
    add_and_print<double>(d1, d2); // should print "5.8 + 11.2 = 17"

    return 0;
}
