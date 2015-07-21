// =====================================================================================
// 
//       Filename:  Ex01.h
// 
//    Description:  Header file for Drunk walker's problem
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 04:35:15  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// 
// =====================================================================================
#ifndef _AUTOGUARD_Vector_H_
#define _AUTOGUARD_Vector_H_

#include<iostream>

namespace VECTOR
{
    class Vector {
        public:
            
            enum Mode{RECT,POL};

        private:
            double x;
            double y;
            double mag;
            double ang;
            Mode mode;
            
            //private methods for setting values
            void set_mag();
            void set_ang();
            void set_x();
            void set_y();
            
        public:
            // RECT for rectangle, POL for polar
            Vector();
            ~Vector();
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode form = RECT);

            double xval() const {return x;}            // report x value
            double yval() const {return y;}             // report y value
            double magval() const {return mag;}             // report magnitude
            double angval() const {return ang;}             // report angle
            void polar_mode();             // set mode to POL
            void rect_mode();             // set mode to RECT

            // operator overloading
            Vector operator+(const Vector & b) const;
            Vector operator-(const Vector & b) const;
            Vector operator-() const;
            Vector operator*(double n) const;
            
            // friends
            friend Vector operator*(double n, const Vector & a);
            friend std::ostream &operator<<(std::ostream & os, const Vector & v);
    };
}
#endif

