The program [constructor.cpp](constructor.cpp) defines a class `Pair` with
2 variable members:

```cxx
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
```

Rewrite the class Pair definition to properly encapsulate its data: public
constructor with private data, rather than public data initialised manually
in the main function. The expected output should be:

```shell
./constructor
p.x is 10, p.y is 20
```

Check the correctness of your program with this command:
```shell
check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W1-Classes/01-constructor
```
