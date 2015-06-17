//
//
//
//     Review: same as ex01
// =====================================================================================
// 
//       Filename:  Ex06.cpp
// 
//    Description:  Exercise 6 of Chapter 3 of CPP Primer
// 
//        Version:  0.01
//        Created:  Tuesday 16 June 2015 02:30:32  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* Write a program that asks how many miles you have driven and how many gallons
 * of gasoline you have used and then reports the miles per gallon your car has gotten.
 * Or, if you prefer, the program can request distance in kilometers and petrol in liters
 * and then report the result European style, in liters per 100 kilometers.*/

#include<iostream>

int main()
{
    float milesDriven,galConsumed,MPG;
    
    std::cout<<"Enter miles driven:";
    std::cin>>milesDriven;
    std::cout<<"Enter gallons consumed:";
    std::cin>>galConsumed;
    
    MPG = milesDriven/galConsumed;
    
    std::cout<<"Miles per Gallon for your car is: " <<MPG<<std::endl;
    
    return 0;
}

