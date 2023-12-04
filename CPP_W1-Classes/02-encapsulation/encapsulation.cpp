#include <iostream>

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(float length, float width) {
        this->length = length;
        this->width = width;
    }

    float get_length() const {
        return length;
    }

    float get_width() const {
        return width;
    }

    float perimeter() const {
        return 2.0 * (length + width);
    }
};

class Circle {
private:
    float radius;

public:
    Circle(float radius) {
        this->radius = radius;
    }

    float get_radius() const {
        return radius;
    }

    float circumference() const {
        return 2.0 * 3.14 * radius;
    }
};

int main() {
    Rectangle r(10, 20);
    Circle c(1);

    std::cout << "Rectangle l: " << r.get_length() << ", w: " << r.get_width();
    std::cout << ", perimeter: " << r.perimeter() << "\n";

    std::cout << "Circle r: " << c.get_radius();
    std::cout << ", circumference: " << c.circumference() << "\n";

    return 0;
}
