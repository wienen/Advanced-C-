/***********************************************************************
 *
 * Name: Complex.h
 *
 ***********************************************************************/

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

namespace caveofprogramming
{

    class Complex
    {
    public:
        Complex ();
        Complex (double real, double imaginary);
        Complex (const Complex &other);
        const Complex & operator=(const Complex& other);

        double Re() const { return real; }
        double Im() const {return imaginary; }

        bool operator==(const Complex &rhs) const;
        bool operator!=(const Complex &rhs) const;

        Complex operator*() const;

    private:
        double real;
        double imaginary;
    };

    ostream & operator<<(ostream &out, const Complex &c);

    Complex operator+(const Complex &lhs, const Complex &rhs);
    Complex operator+(const Complex &lhx, const double rhs);
    Complex operator+(const double lhx, const Complex &rhs);

} /* caveofprogramming */







#endif /* COMPLEX_H */
