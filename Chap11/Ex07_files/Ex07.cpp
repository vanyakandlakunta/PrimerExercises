// =====================================================================================
// 
//       Filename:  Ex07.cpp
// 
//    Description:  Class definition for Ex07 Chapter 11 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 11:50:55  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

#include <iostream>
#include "Ex07.h"
using namespace std;

Complex::~Complex()
{
    //do nothing
}

Complex Complex::operator+(Complex &c)
{
    Complex sum;
    sum.real = real + c.real;
    sum.imag = imag + c.imag;
    return sum;
}

Complex Complex::operator-(Complex &c)
{
    Complex diff;
    diff.real = real - c.real;
    diff.imag = imag - c.imag;
    return diff;
}

Complex Complex::operator*(double num) const
{
    Complex prod;
    prod.real = (real * num);
    prod.imag = (imag * num);
    return prod;
}

Complex operator*(Complex &c1,Complex &c2)
{
    Complex prod;
    prod.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    prod.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return prod;
    
}

Complex Complex::operator~()
{
    Complex conj;
    conj.real = real;
    conj.imag = imag * (-1);
    return conj;
}

std::ostream& operator<<(std::ostream &os,Complex &c)
{
    os << "("<<c.real<<","<<c.imag<<"i)"<<endl;
}

std::istream& operator>>(std::istream &is, Complex &c)
{
    cout<<"Real:";
    is>>c.real;
    cout<<"Imaginary:";
    is>>c.imag;
}

