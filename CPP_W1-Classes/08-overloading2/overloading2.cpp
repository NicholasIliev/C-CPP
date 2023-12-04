#include <iostream>

class Complex {
private:
    int real{0};
    int imag{0};

public:
    Complex() = default;
    Complex(int real_part, int imaginary_part);
    int get_real_part() const;  // Marked as const
    int get_imaginary_part() const;  // Marked as const

    // Operator overload for addition
    Complex operator+(const Complex& other) const;

    // Operator overload for printing to std::cout
    friend std::ostream& operator<<(std::ostream& os, const Complex& complex);
};

Complex::Complex(int real_part, int imaginary_part)
    : real{real_part}, imag{imaginary_part} {}

int Complex::get_real_part() const {  // Marked as const
    return real;
}

int Complex::get_imaginary_part() const {  // Marked as const
    return imag;
}

// Operator overload for addition
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

// Operator overload for printing to std::cout
std::ostream& operator<<(std::ostream& os, const Complex& complex) {
    os << "(" << complex.get_real_part() << "+" << complex.get_imaginary_part() << "i)";
    return os;
}

int main() {
    Complex c1(4, 5);
    Complex c2(9, 11);

    std::cout << c1 + c2 << "\n"; // should print (13+16i)

    return 0;
}

