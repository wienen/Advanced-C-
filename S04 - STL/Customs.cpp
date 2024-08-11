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
        cout << name << ": " << age << flush;
    }

    bool operator<(const Person &other) const {
        // This operator is also used to determine if two keys are equal!
        // See https://stackoverflow.com/questions/27153303
        //
        // In short:
        // a == b ~ !(a<b) && !(b<a)

        if (name == other.name) {
            return age < other.age;
        } else {
            return name < other.name;
        }
    }

private:
    string name;
    int age;
};

int main() {

    map<Person, int> people;

    people[Person("Mike", 40)] = 43;
    people[Person("Mike", 50)] = 53;
    people[Person("Vicky", 30)] = 31;;
    people[Person("Raj", 20)] = 23;


    for (auto it = people.begin(); it != people.end(); ++it) {
        cout << it->second << ": " << flush;
        it->first.print();
        cout << endl;
    }


    return 0;
}
