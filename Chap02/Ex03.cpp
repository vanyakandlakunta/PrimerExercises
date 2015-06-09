// =====================================================================================
// 
//       Filename:  Ex03.cpp
// 
//    Description:  Exercise 3 of Chapter 2 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 07 June 2015 10:42:48  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*  Write a C++ program that uses three user-defined functions (counting main() as
 *  one) and produces the following output:
 *  Three blind mice
 *  Three blind mice
 *  See how they run
 *  See how they run
 *  One function, called two times, should produce the first two lines, and the remain-
 *  ing function, also called twice, should produce the remaining output.*/

#include<iostream>
void printFunc1();
void printFunc2();
int main()
{
    printFunc1();
    printFunc1();
    printFunc2();
    printFunc2();
    return 0;
}

void printFunc1()
{
    std::cout<<"Three blind mice"<<std::endl;
}

void printFunc2()
{
    std::cout<<"See how they run"<<std::endl;
}
