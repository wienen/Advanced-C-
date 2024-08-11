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

/**********************************************************************
 *
 * This class suffers from some severe leakage risks. It should use
 * smart pointers or auto pointers and a vector instead of an
 * array to T*. It lays a lot of responsibility at the feet of the
 * invoker for deleting resources and checking if references actually
 * are still OK. This may be a good subject for applying some of the
 * lessons in [Effective C++ 3rd ed.pdf](hook://file/jK3A5jeEa?p=R3VudGVyIE11zIhsbGVyL0Jvb2tzLTM=&n=Effective%20C%2B%2B%203rd%20ed%2Epdf)
 **********************************************************************/
template<typename T>
class Ring
{
public:
    class iterator;

    Ring (int size): m_pos(0), m_size(size), m_values(NULL)  {
        m_values = new T[size]; /** TODO:  Not Exception save: may leak resources */
    }

    ~Ring () {
        delete [] m_values;
    }

    void add(T value) {
        m_values[m_pos] = value;

        ++m_pos;

        if (m_pos == m_size) {
            m_pos = 0;
        }
    }

    T &get(int pos) {

        return m_values[pos];;
    }

    int size() {

        return m_size;
    }

    iterator begin() {
        return iterator(0, *this);
    }

    iterator end() {
        return iterator(m_size, *this);
    }

private:
    int m_pos;
    int m_size;
    T *m_values;

};

template<typename T>
class Ring<T>::iterator {
public:

    iterator(int pos, Ring &aRing) : m_pos(pos), m_ring(aRing) {}

    /** Prefix increment operator */
    iterator &operator++() {
        ++m_pos;

        return *this;
    }

    /** Postfix increment operator @parameter int: unused; only indicates this is a postfix operator i.s.o. a prefix */
    iterator &operator++(int) {
        return operator++();
    }

    T &operator*() {
        return m_ring.get(m_pos);
    }

    bool operator!=(const iterator &rhs) const {
        return m_pos != rhs.m_pos;
    }

private:
    int m_pos;
    Ring &m_ring;
};

#endif /* RING_H_ */


