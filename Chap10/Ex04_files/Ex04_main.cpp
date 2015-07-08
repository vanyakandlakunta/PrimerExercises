// =====================================================================================
// 
//       Filename:  Ex04_main.cpp
// 
//    Description:  Exercise 4 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 03:25:20  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================
/* main function of Exercise 4 */

#include<iostream>
#include<stdio.h>
#include"Ex04.h"

using namespace SALES;

int main()
{
    double sales[] = {5.5, 6.7, 4.4};
    Sales s1(sales,3), s2;
    
    s2.setSales();
    
    s1.showSales();
    s2.showSales();        

    return 0;
    
}


