/***********************************************************************
 *
 * Name: Customs.cpp
 *
 ***********************************************************************/

#include <complex>
#include <iostream>
#include <map>

using namespace std;

class Person
{
public:
    Person(string name, int age):
        name(name), age(age) {
        }

    // Copy constructor
    Person(const Person &other) {
        cout << "Copy constructor running for " << other.name << endl;
        name = other.name;
        age = other.age;
    }

    // A map needs a constructor without parameters
    // This is normally created if you do not define any constructors,
    // but once you do define a contructor that has parameters,
    // you need to explicitly create a parameterless constructor as well.
    //
    // The parameterless constructor is used when assigning new values to
    // the map. So in `people[3] = Person("Mike", 40);`, the compiler
    // first creates an empty Person for people[3] and then copies the Person("Mike", 40)
    // object into that empty placeholder.
    Person(): name(""), age(0) {
    }

    void print() const {
        cout << name << ": " << age << endl;
    }


private:
    string name;
    int age;
};

int main() {

    map<int, Person> people;

    people[3] = Person("Mike", 40);
    people[8] = Person("Vicky", 30);
    people[2] = Person("Raj", 20);

    people.insert(make_pair(55, Person("Bob", 45)));

    for (auto it = people.begin(); it != people.end(); ++it) {
        cout << it->first << ": " << flush;
        it->second.print();
    }


    return 0;
}
