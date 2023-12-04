#include <iostream>

class Base {
private:
    int x;
    int y;
    void base_method();
public:
    Base(int x, int y);
};

class Derived : public Base {
private:
    int z;
public:
    Derived(int x, int y, int z);
    void derived_method();
};

Base::Base(int x, int y) : x{x}, y{y} {};

void Base::base_method() {
    std::cout << "base_method called, x: " << x << ", y: " << y << "\n";
}

Derived::Derived(int x, int y, int z) : Base(x, y), z{z} {};

void Derived::derived_method() {
    std::cout << "derived method called, z: " << z << ".";
    std::cout << " Now calling base_method\n";
    base_method();
}

int main(int argc, char **argv) {
    Derived d(3, 4, 5);
    d.derived_method();

    return 0;
}
