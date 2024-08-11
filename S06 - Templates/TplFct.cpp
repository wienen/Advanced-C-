/***********************************************************************
 *
 * Name: TplFct.cpp
 *
 ***********************************************************************/

#include <iostream>

using namespace std;

template <typename T>
void print(const T n) {
    cout << "Template version: " << n << endl;
}

void print(const int n) {
    cout << "Non-template version: " << n << endl;
}

void print(const string s) {
    cout << "Non-template version (string): " << s << endl;
}

void print(const char *s) {
    cout << "Non-template version (char *): " << s << endl;
}

template<typename T>
void show() {
    cout << T() << endl;
}


int main() {

    print<string>("Life, universe and the rest");
    print<int>(5);
    print(7);

    print<>("Hi y'all") ;
    print("大家好");

    show<double>();

    return 0;
}
