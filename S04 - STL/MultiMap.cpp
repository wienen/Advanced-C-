/***********************************************************************
 *
 * Name: MultiMap.cpp
 *
 ***********************************************************************/

#include <iostream>
#include <map>

using namespace std;



int main() {

    multimap<int, string> lookup;

    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(10, "Vicky"));
    lookup.insert(make_pair(30, "Raj"));
    lookup.insert(make_pair(20, "Bib"));


    for (auto it = lookup.begin(); it != lookup.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;

    for (auto it = lookup.find(10); it != lookup.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;

    auto its = lookup.equal_range(20);

    for (auto it = its.first; it != its.second; ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
