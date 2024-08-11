/***********************************************************************
 *
 * Name: Plus.cpp
 *
 ***********************************************************************/

#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;


int main() {

    Complex c1(2,4);

    cout << c1 << endl;

    Complex c2(3,3);

    cout << c2 << endl;

    cout << c1 + c2 << endl;

    double r = 4.3;

    cout << c1 << " + " << r << " = " << c1 + r << endl;
    cout << r << " + " << c1 << " = " << r + c1 << endl;
    cout << c1 + r + 7 + 3 + c2 + c1 << endl;
    return 0;
}
