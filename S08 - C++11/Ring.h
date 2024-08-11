/***********************************************************************
 *
 * @file: Ring.h
 *
 * @brief: Header file for the class Ring.
 *
 ***********************************************************************/


#ifndef RING_H_
#define RING_H_

#include <iostream>
using namespace std;

template<typename T>
class Ring
{
public:
    class iterator;

 /*   Ring (int i): ringsize(i) {

    }

    virtual ~Ring ();

    void add(T) {
    }

    T get(int i) {

        return (T) 0;
    }

    int size() {

        return 0;
    }

private:
    int ringsize;
*/
};

template<typename T>
class Ring<T>::iterator {
public:
    /******************************************************************
     *
     * @brief Prints a message from the iterator class.
     *
     *****************************************************************/

    void print() {
        cout << "Hello from iterator" << T() << endl;
    }
};


#endif /* RING_H_ */


