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

/* implement add_and_print here */

void add_and_print(Complex x, Complex y) {
    int realTotal = x.get_real_part() + y.get_real_part();
    int imaginaryTotal = x.get_imaginary_part() + y.get_imaginary_part();

    std::cout << "(" << x.get_real_part() << "+" << x.get_imaginary_part() << "i) " <<  "+ (";
    std::cout << y.get_real_part() << "+" << y.get_imaginary_part() << "i) " <<  "= (";
    std::cout << realTotal << "+" << imaginaryTotal << "i)" << std::endl;
}

// Int + Int
void add_and_print(int x, int y) {
    int result = x + y;
    std::cout << x << " + " << y << " = " << result << std::endl;
}

// Double + Double
void add_and_print(double x, double y) {
    double result = x + y;
    std::cout << x << " + " << y << " = " << result << std::endl;
}

int main(int argc, char **argv) {
    Complex c1(4, 5);
    Complex c2(9, 11);
    int i1 = 4, i2 = 9;
    double d1 = 5.8, d2 = 11.2;

    add_and_print(c1, c2); // should print "(4+5i) + (9+11i) = (13+16i)"
    add_and_print(i1, i2); // should print "4 + 9 = 13"
    add_and_print(d1, d2); // should print "5.8 + 11.std::cout << x.get_imaginary_part() << std::endl;2 = 17"

    return 0;
}
