// REVIEW: This is really good
// =====================================================================================
// 
//       Filename:  Ex04_main.cpp
// 
//    Description:  Modifying exercises to implement friend function
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 10:33:09  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================
/* Rewrite the final Time class example (Listings 11.10, 11.11, and 11.12) so that all
 * the overloaded operators are implemented using friend functions.*/

#include <iostream>
#include "Ex04.h"

int main()
{
    using std::cout;
    using std::endl;
    
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout<< "Aida and Tosca:\n";
    cout<<aida<<"; "<< tosca << endl;
    temp = aida + tosca;
    cout<< "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17; 
    cout<< "Aida * 1.17: " << temp << endl;
    cout<< "10.0 * Tosca: " << 10.0 * tosca << endl;

    return 0;
}


