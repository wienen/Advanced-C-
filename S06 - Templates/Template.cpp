/***********************************************************************
 *
 * Name: Template.cpp
 *
 ***********************************************************************/

#include <iostream>

using namespace std;

template <class T>
class Test {
private:
    T obj;

public:
    Test(T obj): obj(obj) {

    }

    void print() {
        cout << obj << endl;
    }

    int sizeOfObj() {
        return sizeof(obj);
    }
};


int main() {

    Test<string> test1("Hello");

    test1.print();

    cout << "The size of the object that contained was " << test1.sizeOfObj() << endl;

    Test<int> test2(5);

    test2.print();

    cout << "The size of the object that contained was " << test2.sizeOfObj() << endl;


    return 0;
}
