// =====================================================================================
// 
//       Filename:  Ex04_main.cpp
// 
//    Description:  main function for Exercise 4 of Chapter 9 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 06 July 2015 03:40:44  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* The third file should declare two Sales objects. It
 * should use the interactive version of setSales() to provide values for one struc-
 * ture and the non-interactive version of setSales() to provide values for the sec-
 * ond structure. It should display the contents of both structures by using
 * showSales()*/

#include<iostream>
#include "Ex04.h"

using namespace SALES;

int main()
{
    Sales s1, s2;
    
    double sales[] = {5.5, 6.7, 2.2};
    
    setSales(s1,sales,3);
    setSales(s2);
    
    showSales(s1);
    showSales(s2);

    return 0;
}

