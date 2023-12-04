#include <iostream>

class Pair {
private:
    int x;
    int y;
public:
    Pair(int x, int y);
    void print();
};

Pair::Pair(int x, int y) :
    x{x}, y{y} {}

void Pair::print() {
    std::cout << "Pair x: " << x << ", y: " << y << "\n";
}

class TopLevel {
private:
    Pair *p;
    int val;
public:
    TopLevel(int x, int y, int val);
    void print();
};

TopLevel::TopLevel(int x, int y, int val) : 
    p{new Pair(x, y)}, val{val} {}

void TopLevel::print() {
    std::cout << "Toplevel val: " << val << ", with pair:\n";
    p->print();
}

int main(int argc, char **argv) {
    TopLevel t(10, 20, 30);
    t.print();
    return 0;
}
