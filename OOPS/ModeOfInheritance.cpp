#include<iostream>
using namespace std;

class Parent{
    //these are access specifiers
    public:
        int x;

    protected:
        int y;

    private:
        int z;
};

//Child1, Child2, Child3 are different modes of Inheritance
class Child1: public Parent{  //we are publicly inherit the parent class
    //x will remain public
    //y will remain protected
    //z will not be accessable
};

class Child2: private Parent{
    //x will be private 
    //y will be private
    //z will be inaccessable
};

class Chile3: protected Parent{
    //x will be protected
    //y will be protected
    //z will be inaccessable
};

// The capability of a class to derive properties and characteristics from another class is called Inheritance.

// Sub Class: The class that inherits properties from another class is called Subclass or Derived Class. 
// Super Class: The class whose properties are inherited by a subclass is called Base Class or Superclass. 