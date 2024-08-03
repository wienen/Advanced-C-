/********************************************************
 * Name: Standard Exceptions.cpp
 * ******************************************************
 */

#include <exception>
#include <iostream>
#include <new>

using namespace std;

void goesWrong() {
    bool error1Detected = true;
    bool error2Detected = false;

    if (error1Detected) {
        throw bad_alloc();
    }

    if (error2Detected) {
        throw exception();
    }
}

int main() {

    try {
        goesWrong();
    }
    catch(bad_alloc &e) {
        cout << "Bad allocation exception: " << e.what() << endl;
    }
    catch (exception &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
