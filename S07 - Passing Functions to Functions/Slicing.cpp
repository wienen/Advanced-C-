/***********************************************************************
 *
 * Name: Slicing.cpp
 *
 ***********************************************************************/

#include <iostream>

using namespace std;

class Parent {
private:
    int one;
public:

    Parent(): one(1) {}

    // Copy constructor
    Parent(const Parent &p): one(1) {
        one = p.one;
        cout << "Copy parent" << endl;
    }

    virtual void print() {
        cout << "parent" << endl;
    }
};

class Child: public Parent {
private:
    int two;
public:

    Child(): two(2) {}

    void print() {
        cout << "child" << endl;
    }
};

int main() {

    Child c1;
    Parent &p1 = c1;

    p1.print();

    // Copy assignment
    // The copy constructor of parent is called. The copy constructor for child is not called.
    // This will give rise to object slicing: we are slicing off the child part of the object,
    // as we are only initializing the parent part; the child part is not accessible as p2
    // is a Parent object, not a child object: we are slicing off the child part of the object,
    // as we are only initializing the parent part; the child part is not accessible as p2
    // is a Parent object, not a child object. We are upcasting a Child object to a Parent object
    // (upcasting, because we are going UP the hierarchy).
    Parent p2 = Child();
    p2.print(); // prints "parent"!

    return 0;
}
