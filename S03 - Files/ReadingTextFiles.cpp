/********************************************************
 * Name: ReadingTextFiles.cpp
 * ******************************************************
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {


    ifstream inFile;

    string inFileName = "test.txt";
    inFile.open(inFileName);

    if (inFile.is_open()) {

        string line;

        while (inFile) {
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();
    } else {
        cout << "Could not open file: " << inFileName << endl;
    }

    return 0;
}
