/***********************************************************************
 *
 * Name: Abstract.cpp
 *
 ***********************************************************************/

#include <iostream>

using namespace std;

class Animal {
    // This is an abstract class
    // as it contains pure virtual functions/methods

public:
    virtual void speak() = 0;
    virtual void run() = 0;
};

class Dog: public Animal {
public:
    virtual void speak() {
        cout << "Bark" << endl;
    }
};

class Labradoodle: public Dog {
public:
    Labradoodle() {
       cout << "New Labradoodle" << endl;
    }

    virtual void run() {
        cout << "Running!" << endl;
    }
};

void test(Animal &a) {
    a.run();
}


int main() {

//    Dog dog;
//    dog.speak();

    Labradoodle odin;
    odin.speak();
    odin.run();

    Animal *animals[5];
    animals[0] = &odin;


    animals[0]->speak();

    test(odin);

    return 0;
}
