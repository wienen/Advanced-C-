/***********************************************************************
 *
 * Name: BinaryFiles.cpp
 *
 ***********************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

// Do not pad structs to align with word boundaries for structs that are to
// be written to files
#pragma pack(push, 1)

struct Person {
    char name[50];
    int age;
    double height;
};

// And turn padding back on for efficiency
#pragma pack(pop)

int main() {

    Person someone = {"Hans Wienen", 52, 1.83};

    string fileName = "test.bin";

    // Write binary file

    ofstream outputFile;

    outputFile.open(fileName, ios::binary); // prevent line endings and such

    if (outputFile.is_open()) {

        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

        outputFile.close();
    } else {
        cout << "Could not create file " + fileName << endl;
    }

    // Read binary file
    //

    Person savedone = {};

    ifstream inputFile;

    inputFile.open(fileName, ios::binary); // prevent line endings and such

    if (inputFile.is_open()) {

        inputFile.read(reinterpret_cast<char *>(&savedone), sizeof(Person));

        inputFile.close();
    } else {
        cout << "Could not read file " + fileName << endl;
    }

    cout << savedone.name << ", " << savedone.age << ", " << savedone.height << endl;

    return 0;
}
