// =====================================================================================
// 
//       Filename:  Ex02.cpp
// 
//    Description:  Exercise 2 of Chapter 5 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 21 June 2015 11:38:30  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 2. Redo Listing 5.4 using a type array object instead of a built-in array and type
 * long double instead of long long . Find the value of 100!
 * 
 *Listing 5.4
 formore.cpp
 // formore.cpp -- more looping with for
 // #include <iostream>
 // const int ArSize = 16;
 // // example of external declaration
 // int main()
 // {
 // long long factorials[ArSize];
 // factorials[1] = factorials[0] = 1LL;
 // for (int i = 2; i < ArSize; i++)
 // factorials[i] = i * factorials[i-1];
 // for (int i = 0; i < ArSize; i++)
 // std::cout << i << "! = " << factorials[i] << std::endl;
 // return 0;
 // }
 // }
 * */

#include<iostream>
#include<array>

using namespace std;
const int ArSize = 101;

void Display(array<long double,ArSize> &factorial)
{
    for (unsigned int i = 0; i < ArSize; i++)
    {
        std:cout<<i<<"! = "<<factorial[i]<<std::endl;
    }
    
}

int main()
{
    array<long double,ArSize> factorial;
    
    factorial[0] = factorial[1] = 1;
    
    for (unsigned int i = 2; i< ArSize; i++)
    {
        factorial[i] = i * factorial[i-1];
    }
    
    Display(factorial);
    
    return 0;
}
