// it is good. the exercise requested to use double but it doesn't matter.
// =====================================================================================
// 
//       Filename:  Ex06.cpp
// 
//    Description:  Exercise 6 of Chapter 2 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 07 June 2015 11:09:43  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*  Write a program that has main() call a user-defined function that takes a distance
 *  in light years as an argument and then returns the distance in astronomical units.
 *  The program should request the light year value as input from the user and display
 *  the result, as shown in the following code:
 *  Enter the number of light years: 4.2
 *  4.2 light years = 265608 astronomical units.
 *  An astronomical unit is the average distance from the earth to the sun (about
 *  150,000,000 km or 93,000,000 miles), and a light year is the distance light travels in
 *  a year (about 10 trillion kilometers or 6 trillion miles). (The nearest star after the
 *  sun is about 4.2 light years away.) Use type double (as in Listing 2.4) and this con-
 *  version factor:
 *  1 light year = 63,240 astronomical units*/

#include<iostream>

float LightYearsToAstroUnits(float);

int main()
{
    float dist_LightYears,dist_AstroUnits;
    std::cout<<"Enter the number of light years:";
    std::cin>>dist_LightYears;
    dist_AstroUnits = LightYearsToAstroUnits(dist_LightYears);
    std::cout<<dist_LightYears<<" light years = "<<dist_AstroUnits<<" astronomical units"<<std::endl;
    return 0;
}

float LightYearsToAstroUnits(float dist_LightYears)
{
    float dist_AstroUnits;
    dist_AstroUnits = dist_LightYears * 63240;
    return dist_AstroUnits;
}
