// =====================================================================================
// 
//       Filename:  Ex07.h
// 
//    Description:  Header file for Complex number operations
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 11:25:16  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// 
// =====================================================================================
#ifndef _AUTOGUARD_Complex_H_
#define _AUTOGUARD_Complex_H_

class Complex{
  
    private:
        int real;
        int imag;

    public:
        Complex()
        {
           real = 0;
           imag = 0;
        }
        Complex(int r, int i)
        {
            real = r;
            imag = i;
        }
        ~Complex();
        
        Complex operator+(Complex &c);
        Complex operator-(Complex &c);
        Complex operator*(double num) const;
        Complex operator~();

        friend Complex operator*(Complex &c1, Complex &c2);
        friend std::ostream& operator<<(std::ostream &os,Complex &c);
        friend std::istream& operator>>(std::istream &is,Complex &c);
};

#endif

