// =====================================================================================
// 
//       Filename:  Ex06.h
// 
//    Description:  Header file for Exercise 6 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 01:10:41  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// 
// =====================================================================================
#ifndef _AUTOGUARD_Move_H_
#define _AUTOGUARD_Move_H_

class Move {
    private:
        double x;
        double y;
    public:
        Move(double a = 0, double b = 0);
        void showmove() const;
        Move add(const Move &m) const;
        void reset(double a = 0, double b = 0);
        ~Move();
};

#endif

