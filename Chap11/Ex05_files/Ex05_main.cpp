// =====================================================================================
// 
//       Filename:  Ex05_main.cpp
// 
//    Description:  Main function for Ex05 Chapter 11 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 11:23:34  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it has a state member
 * that governs whether the object is interpreted in stone form, integer pounds form,
 * or floating-point pounds form. Overload the << operator to replace the
 * show_stn() and show_lbs() methods. Overload the addition, subtraction, and
 * multiplication operators so that one can add, subtract, and multiply Stonewt values.
 * Test your class with a short program that uses all the class methods and friends.*/



#include <iostream>
#include "Ex05.h"

using namespace std;

int main()
{
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);
    Stonewt sum,prod,diff,prod2;

    cout << "The celebrity weighed ";
    cout<<incognito<<endl;
    cout << "The detective weighed ";
    cout<<wolfe<<endl;
    cout << "The President weighed ";
    cout<<taft<<endl;
    
    sum = incognito + wolfe;
    cout<<sum<<endl;
    
    diff = incognito - wolfe;
    cout<<diff<<endl;
    
    prod = wolfe * 10;
    cout<<prod<<endl;
    
    prod2 = 10 * wolfe;
    cout<<prod2<<endl;
    
    return 0;
}
