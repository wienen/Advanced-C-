/***********************************************************************
 *
 * Name: ComplexNumber.cpp
 *
 ***********************************************************************/

#include "Complex.h"

using namespace std;
using namespace caveofprogramming;


int main() {


    Complex c1(2, 3);

    Complex c2(c1);

    Complex c3;
    c3 = c2;

    cout << "C1 = " << c1 << "; c2 = " << c2 << "; c3 = " << c3 << endl;

    return 0;
}
