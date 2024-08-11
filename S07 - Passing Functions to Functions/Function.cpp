/***********************************************************************
 *
 * Name: Function.cpp
 *
 ***********************************************************************/

#include <iostream>

using namespace std;

void test(int n) {
    cout << "Hello, " << n << endl;
}

int main() {

    test(6);

    // This is not a pointer to a function that takes no arguments and returns void:
    // void *pTest();
    // It is actually just a prototoype for the function pTest.
    //
    // If you do wnat to declare a pointer to a function w/o argumants returning void, use:
    void (*pTest)(int);

    pTest = &test;

    // The next line is ambiguous: it could mean that the return value of pTest() is a pointer
    // which is subsequently dereferenced using *, while we mean to call the function that
    // pTest points to.
    //
    // NOT:
    // *pTest();

    // The dererence operatorn must dereference pTest and not the return value of some function pTest();
    // So, do:
    (*pTest)(7);

    // We can also just use the name of the function:
    void (*pTest2)(int);
    pTest2 = test;
    pTest2(8);

    // Or even:
    void (*pTest3)(int) = test;
    pTest3(9);


    return 0;
}
