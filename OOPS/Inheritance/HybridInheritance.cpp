#include <iostream>

class BaseClass {
    // ...
};

class ClassA : public BaseClass {
    // ...
};

class ClassB : public BaseClass {
    // ...
};

class DerivedClass : public ClassA, public ClassB {
    // ...
};

int main() {
    // Your code logic here
    return 0;
}

