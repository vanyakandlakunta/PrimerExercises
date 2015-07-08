// =====================================================================================
// 
//       Filename:  Ex06.cpp
// 
//    Description:  Function definitions for Exercise 6 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 01:13:00  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================
#include "Ex06.h"
#include<iostream>

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

Move::~Move()
{
    
}

void Move::showmove() const
{
    std::cout<<"x = "<<x<<std::endl;
    std::cout<<"y = "<<y<<std::endl;
}

Move Move::add(const Move &m) const
{
    Move mNew(x,y);
    
    mNew.x = x + m.x;
    mNew.y = y + m.y;

    return mNew;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
