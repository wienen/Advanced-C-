/***********************************************************************
 *
 * Name: Sets.cpp
 *
 ***********************************************************************/

#include <cstdlib>
#include <iostream>
#include <set>

using namespace std;



int main() {

    set<int> numbers;

    numbers.insert(3);
    numbers.insert(2);
    numbers.insert(1);
    numbers.insert(3);
    numbers.insert(3);

    set<string> letters;

    letters.insert("one");
    letters.insert("two");
    letters.insert("three");
    letters.insert("three");
    letters.insert("one");
    letters.insert("one");

    letters.erase("one");

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << endl;
    }

    for (auto it = letters.begin(); it != letters.end(); ++it) {
        cout << *it << endl;
    }

    if (numbers.count(3) > 0) {
        cout << "Number found" << endl;
    } else {
        cout << "Number not found" << endl;
    }

    return 0;
}
