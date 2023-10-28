#include <iostream>

// Base class (parent class)
class BaseClass {
public:
    void commonMethod() {
        std::cout << "This is a method from BaseClass." << std::endl;
    }
};

// First derived class (ChildA) inheriting from BaseClass with virtual inheritance
class ChildA : virtual public BaseClass {
public:
    void methodA() {
        std::cout << "This is a method from ChildA." << std::endl;
    }
};

// Second derived class (ChildB) inheriting from BaseClass with virtual inheritance
class ChildB : virtual public BaseClass {
public:
    void methodB() {
        std::cout << "This is a method from ChildB." << std::endl;
    }
};

// Final derived class (ChildC) inheriting from both ChildA and ChildB
class ChildC : public ChildA, public ChildB {
public:
    void methodC() {
        std::cout << "This is a method from ChildC." << std::endl;
    }
};

int main() {
    ChildC obj;

    obj.commonMethod();  // Call the method from BaseClass
    obj.methodA();       // Call the method from ChildA
   
}