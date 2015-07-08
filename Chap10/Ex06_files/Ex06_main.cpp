// It is good
// =====================================================================================
// 
//       Filename:  Ex06_main.cpp
// 
//    Description:  main function for Exercise 6 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 01:18:39  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

#include<iostream>
#include "Ex06.h"

int main()
{
    double a = 10, b = 20;
    Move m(a,b),m1(a,b),m2(a,b);
    
    m.showmove();
    m2 = m.add(m1);
    
    m2.showmove();
    m2.reset(a,b);
    
    m2.showmove();

    return 0;
}


