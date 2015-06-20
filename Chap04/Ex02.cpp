//
// Review: Good 
//
// =====================================================================================
// 
//       Filename:  Ex02.cpp
// 
//    Description:  Exercise 2 of Chapter 4 CPP Primer
// 
//        Version:  0.01
//        Created:  Friday 19 June 2015 12:48:18  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*Rewrite Listing 4.4, using the C++ string class instead of char arrays.
 * Listing 4.4:
 * // instr2.cpp -- reading more than one word with getline
 * #include <iostream>
 * int main()
 * {
 * using namespace std;
 * const int ArSize = 20;
 * char name[ArSize];
 * char dessert[ArSize];
 * cout << "Enter your name:\n";
 * cin.getline(name, ArSize); // reads through newline
 * cout << "Enter your favorite dessert:\n";
 * cin.getline(dessert, ArSize);
 * cout << "I have some delicious " << dessert;
 * cout << " for you, " << name << ".\n";
 * return 0;
 * }
 * }
 * */

#include<iostream>
#include<stdio.h>
#include<string>

int main()
{
    std::string name, dessert;
    

    std::cout<<"Enter your name:\n";
    std::cin>>name;
    std::cout<<"Enter your favourite dessert:\n";  
    std::cin>>dessert; //cheesecake :)
    

    std::cout<<"I have some delicious "<<dessert;
    std::cout<<" for you, "<<name << ".\n";
    
    return 0;
}
