#include <iostream>

class Rectangle {
public:
    float length;
    float width;
};

class Circle {
public:
    float radius;
};

float rectangle_perimeter(Rectangle *r) {
    return 2.0 * (r->length + r->width);
}

float circle_circumference(Circle *c) {
    return 2.0 * 3.14 * c->radius;
}

int main(int argc, char **argv) {
    Rectangle r;
    Circle c;

    r.length = 10;
    r.width = 20;

    c.radius = 1;

	std::cout << "Rectangle l: " << r.length << ", w: " << r.width;
	std::cout << ", perimeter: " << rectangle_perimeter(&r) << "\n";

	std::cout << "Circle r: " << c.radius;
	std::cout << ", circumference: " << circle_circumference(&c) << "\n";
    return 0;
}
