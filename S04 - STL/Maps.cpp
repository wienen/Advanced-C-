/***********************************************************************
 *
 * Name: Maps.cpp
 *
 ***********************************************************************/

#include <iostream>
#include <map>
#include <utility>

using namespace std;



int main() {

    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Hans"] = 52;
    ages["Renske"] = 17;

    ages["Mike"] = 70;

    pair<string, int> addToMap("Peter", 100);
    ages.insert(addToMap);

    ages.insert(pair<string, int>("Eize", 81));

    ages.insert(make_pair("Bea", 79));

    // cout << ages["Hans"] << endl;

    string key = "Renske";

    if (ages.find(key) != ages.end()) {
        cout << "Found " << key << endl;
    } else {
        cout << key << " not found" << endl;
    }

    for (auto it = ages.begin(); it != ages.end(); ++it) {
        auto age = *it;

        cout << age.first << ": " << age.second << endl;
    }

    for (auto it = ages.begin(); it != ages.end(); ++it) {
        // cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
