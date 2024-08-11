/***********************************************************************
 *
 * Name: Using.cpp
 *
 ***********************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool match(string test) {

    return 3 == test.size();
}

int countStrings(vector<string> &texts, bool (*match)(string test) ) {
    int count = 0;

    for (auto it = texts.begin(); it != texts.end(); ++it) {
        if (match(*it)) ++count;
    }
    return count;
}

int main() {

    vector<string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("two");
    texts.push_back("four");
    texts.push_back("two");
    texts.push_back("three");

    cout << match("oned") << endl;

    cout << count_if(texts.begin(), texts.end(), match) << endl;

    cout << countStrings(texts, match) << endl;

    return 0;
}
