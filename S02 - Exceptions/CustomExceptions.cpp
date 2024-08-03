/********************************************************
 * Name: Standard Exceptions.cpp
 * ******************************************************
 */

#include <exception>
#include <iostream>
// #include <new>

using namespace std;

class MyException: public exception {

    public:
        virtual const char* what() const throw() {
            // Note: throw() with empty brackets means it does not throw any exceptions
            // You could list all exceptions thrown between the brackets, but in general
            // removing the throws clause alltogether is probably better, as these checks
            // seem to occur at runtime, not at compile time. So it takes time during the
            // running of the program to check this. And it does not add any quality during
            // compilation.


            return "Something bad happened!";
        }
};

class Test {
    public:
        void goesWrong() {
            throw MyException();
        }
};


int main() {

    Test test;

    try {
        test.goesWrong();
    }
    catch (MyException &e) {
        cout << e.what() << endl;
    }

    return 0;
}
