// =====================================================================================
// 
//       Filename:  Ex04.h
// 
//    Description:  Header file for Time Class (Listing 11.10)
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 10:36:57  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// 
// =====================================================================================
#ifndef _AUTOGUARD_Time_H_
#define _AUTOGUARD_Time_H_

#include<iostream>

class Time {
    
    private:
        int hours;
        int minutes;
        
    public:
        Time();
        ~Time();
        Time(int h, int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0, int m = 0);
        friend Time operator+(const Time &t, const Time &t1) ;
        friend Time operator-(const Time &t, const Time &t1) ;
        friend Time operator*(const Time &t, double n) ;
        friend Time operator*(double m, const Time & t)
        { return t * m; }
        // inline definition
        friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif

