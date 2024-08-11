/***********************************************************************
 *
 * Name: Equals.cpp
 *
 ***********************************************************************/


#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;


int main() {

    Complex c1(3,2);
    Complex c2(3,2);

    if (c1 == c2) {
        cout << "The numbers are equal." << endl;
    } else {
        cout << "The numbers are NOT equal." << endl;
    }

    if (c1 != c2) {
        cout << "The numbers are NOT equal." << endl;
    } else {
        cout << "The numbers are equal." << endl;
    }

    return 0;
}
