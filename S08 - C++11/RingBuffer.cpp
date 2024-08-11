/***********************************************************************
 *
 * Name: RingBuffer.cpp
 *
 ***********************************************************************/

#include <iostream>
#include "Ring.h"

using namespace std;



int main() {

    Ring <string> textring(3);

    textring.add("one");
    textring.add("two");
    textring.add("three");
    textring.add("four");

    for (auto item: textring) {
        cout << item << endl;
    }


    return 0;

}
