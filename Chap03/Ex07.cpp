// =====================================================================================
// 
//       Filename:  Ex07.cpp
// 
//    Description:  Exercise 7 of Chapter 3 CPP Primer
// 
//        Version:  0.01
//        Created:  Tuesday 16 June 2015 02:35:59  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University 
// =====================================================================================

/* 7. Write a program that asks you to enter an automobile gasoline consumption figure
 * in the European style (liters per 100 kilometers) and converts to the U.S. style of
 * miles per gallon. Note that in addition to using different units of measurement, the
 * U.S. approach (distance / fuel) is the inverse of the European approach (fuel / dis-
 * tance). Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus, 19
 * mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.*/

#include<iostream>

int main()
{
    float litPer100Km, MPG, kmPerLit;
    const float kmToMiles = 0.6214, litToGal = (1 / 3.875);
    
    std::cout<<"Enter gasoline consumption in litres per 100 km (European Style):";
    std::cin>>litPer100Km;
    
    //conversion
    kmPerLit = (1 / litPer100Km) * 100;
    MPG = kmPerLit * (kmToMiles/litToGal);
    
    std::cout<<"MPG = "<<MPG<<std::endl;
    
    return 0;
}

