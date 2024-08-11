/***********************************************************************
 *
 * Name: Auto.cpp
 *
 ***********************************************************************/

#include <iostream>

using namespace std;

template <class T, class S>
auto test(T value1, S value2) -> decltype(value1 + value2) {
    return value1 + value2;
}

int get() {
    return 999;
}

auto test2() -> decltype(get()) {
    return get();
}

int main() {

//    auto value = 7; // int
//    auto text = "Hello"; // const char *

//    cout << value << endl;
//    cout << typeid(text).name() << ": " << text << endl;

    cout << test(4, 6) << endl;
    cout << test2() << endl;
    return 0;
}
