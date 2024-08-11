/***********************************************************************
 *
 * Name: Overloading.cpp
 *
 ***********************************************************************/

#include <iostream>

using namespace std;

class Test {
    private:
        int id;
        string name;

    public:
        Test(): id(0), name("") {

        }

        Test(int id, string name): id(id), name(name) {

        }

        void setId(int id) { this->id = id; }
        void print() const {
            cout << id << ": " << name << endl;
        }

        const Test & operator=(const Test &rhs){

            cout << "Assignment running" << endl;
            id = rhs.id;
            name = rhs.name;

            return *this;
        }


        Test(const Test &other) {
            cout << "Copy constructor Running" << endl;
            id = other.id;
            name = other.name;
        }
};

int main() {

    Test test1(10, "Mike");
    test1.print();


    Test test2(20, "Bob");
    test2 = test1;
    test2.print();

    Test test3;
    // test3 = test2 = test1;

    test3.operator=(test2);
    test3.print();

    // This is copy initialization
    Test test4 = test1;
    test4.print();
    return 0;
}
