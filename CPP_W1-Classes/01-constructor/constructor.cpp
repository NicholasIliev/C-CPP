#include <iostream>

class Pair {
public:
    int x;
    int y;
};

int main(int argc, char **argv) {
    Pair p;

    p.x = 10;
    p.y = 20;

    std::cout << "p.x is " << p.x << ", p.y is " << p.y << "\n";

    return 0;
}
