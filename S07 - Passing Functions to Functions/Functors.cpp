/***********************************************************************
 *
 * Name: Functors.cpp
 *
 ***********************************************************************/

#include <iostream>

using namespace std;

struct Test {
    virtual bool operator()(string& text) = 0;
};

// This is a functor: a class or a struct overloading the () operator
struct MatchTest: public Test {
    // The operator is () and the extra () are for the arguments
    virtual bool operator()(string &text) {
        return text == "lion";
    }
};


void check(string text, Test &test) {
    if (test(text)) {
       cout << "Test matches!" << endl;
    } else {
       cout << "No match." << endl;
    }
}


int main() {

    MatchTest m;

    check("lion", m);

    return 0;
}
