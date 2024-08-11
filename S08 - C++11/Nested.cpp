/***********************************************************************
 *
 * @file: Nested.cpp
 *
 * @brief Program to demonstrate nested template classes.
 *
 ***********************************************************************/

#include <iostream>
#include "Ring.h"

using namespace std;


int main() {

    Ring<int>::iterator it;

    it.print();

    /*
    Ring <string> textring(3);

    textring.add("one");
    textring.add("two");
    textring.add("three");
    textring.add("four");

    for (int i = 0; i < textring.size(); ++i) {
        cout << textring.get(i) << endl;
    }

    */

    return 0;
}
