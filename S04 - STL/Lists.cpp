/***********************************************************************
 *
 * Name: Lists.cpp
 *
 ***********************************************************************/

#include <iostream>
#include <list>

using namespace std;



int main() {

    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);

    // list<int>::iterator it=numbers.begin();
    auto it = numbers.begin();
    ++it;
    numbers.insert(it, 300);
    cout << "Element: " << *it << endl;

    auto eraseIt = numbers.begin();
    ++eraseIt;

    eraseIt = numbers.erase(eraseIt);

    cout << "Element: " << *eraseIt << endl;

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {

        if (*it == 2) {
            numbers.insert(it, 1234);
        }
        if (*it == 1) {
            // Here, the iterator is incremented, as it will point to the element after
            // the one erased. So the loop will skip one element.
            it = numbers.erase(it);

            // So, possibly naively, decrement the iterator
            --it;

            // And... it works!
        }
    }

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << endl;
    }


    return 0;
}
