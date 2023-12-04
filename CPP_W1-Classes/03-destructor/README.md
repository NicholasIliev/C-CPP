The program [destructor.cpp](destructor.cpp) contains a memory leak:

```shell
valgrind --leak-check=full ./destructor
# ... 
==2348== LEAK SUMMARY:
==2348==    definitely lost: 8 bytes in 1 blocks

```

The program source is:

```cxx
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
```

Rewrite the program to fix the leak by implementing a destructor for the
relevant class. The expected output is:

```shell
./destructor
Toplevel val: 30, with pair:
Pair x: 10, y: 20
```

Check the correctness of your program with this command:
```shell
check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W1-Classes/03-destructor
```
