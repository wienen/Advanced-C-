/***********************************************************************
 *
 * Name: Sort.cpp
 *
 ***********************************************************************/

#include <iostream>
#include <vector>

using namespace std;

class Test
{
public:
    Test (int id, string name): id(id), name(name) {};

    void print() {
        cout << id << ": " << name << endl;
    }


// bool operator<(const Test& rhs) const {
//         return name < rhs.name;
//     }

    friend bool comp(const Test&, const Test&);

private:
    int id;
    string name;
};

bool comp(const Test &lhs, const Test &rhs){
   return lhs.name < rhs.name;
}

int main() {

    vector<Test> tests;

    tests.push_back(Test(5, "Mike"));
    tests.push_back(Test(10, "Sue"));
    tests.push_back(Test(7, "Raj"));
    tests.push_back(Test(3, "Vickey"));

    sort(tests.begin(), tests.end(), comp);


    for (int i = 0; i < tests.size(); ++i) {
        tests[i].print();
    }

    return 0;
}
