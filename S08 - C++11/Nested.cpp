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

    return 0;
}
