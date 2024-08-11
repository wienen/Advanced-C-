/***********************************************************************
 *
 * Name: Complex.cpp
 *
 ***********************************************************************/

#include <complex>
#include <iostream>
#include <type_traits>
#include "Complex.h"

namespace caveofprogramming {

    ostream & operator<<(ostream &out, const Complex &c) {
        out << c.Re() << (c.Im() > 0 ? "+" : "") << c.Im() << "i";
        return out;
    }

    Complex operator+(const Complex &lhs, const Complex &rhs) {
        return Complex(lhs.Re() + rhs.Re(), lhs.Im() + rhs.Im());
    }

    Complex operator+(const Complex &lhs, const double rhs) {
        return Complex(lhs.Re() + rhs, lhs.Im());
    }

    Complex operator+(const double lhs, const Complex &rhs) {
        return Complex(lhs + rhs.Re(), rhs.Im());
    }


    Complex::Complex(): real(0), imaginary(0)
    {

    }

    Complex::Complex (double real, double imaginary) :
        real(real), imaginary(imaginary)
    {

    }

    Complex::Complex(const Complex &other) {
        real = other.real;
        imaginary = other.imaginary;
    }

    const Complex & Complex::operator=(const Complex& other){

        real = other.real;
        imaginary = other.imaginary;
        return *this;
    }

    bool Complex::operator==(const Complex &rhs) const {
        return real == rhs.real && imaginary == rhs.imaginary;
    }

    bool Complex::operator!=(const Complex &rhs) const {
        return !(*this == rhs);
    }

    Complex Complex::operator*() const {
        return Complex(real, -imaginary);
    }
}

