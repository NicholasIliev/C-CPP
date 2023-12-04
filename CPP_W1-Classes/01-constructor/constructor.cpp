#include <iostream>

class Pair {
private:
    int x;
    int y;

public:
    // Public constructor to initialize x and y
    Pair(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Public getter functions to access x and y
    int getX() { 
        return x; 
    }
    int getY() { 
        return y; 
    }
};

int main(int argc, char **argv) {
    // Create an instance of Pair using the constructor
    Pair p(10, 20);

    std::cout << "p.x is " << p.getX() << ", p.y is " << p.getY() << "\n";

    return 0;
}
