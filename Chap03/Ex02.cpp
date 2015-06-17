//
//  review: same as Ex01
//
//
//
//
//
// =====================================================================================
// 
//       Filename:  Ex02.cpp
// 
//    Description:  Exercise 2 of Chapter 3 CPP Primer
// 
//        Version:  0.01
//        Created:  Tuesday 16 June 2015 01:12:46  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*  2. Write a short program that asks for your height in feet and inches and your weight
 *  in pounds. (Use three variables to store the information.) Have the program report
 *  your body mass index (BMI).To calculate the BMI, first convert your height in feet
 *  and inches to your height in inches (1 foot = 12 inches).Then convert your height
 *  in inches to your height in meters by multiplying by 0.0254.Then convert your
 *  weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
 *  your BMI by dividing your mass in kilograms by the square of your height in
 *  meters. Use symbolic constants to represent the various conversion factors.*/

#include<iostream>

int main()
{
    const int conversionFactorForInches = 12;
    const double conversionFactorForMeters = 0.0254;
    const float conversionFactorForKilos = 2.2;
    int feet,inches,weightInPounds,heightInInches;
    double heightInMeters,massInKilos,BMI;
    
    std::cout<<"Enter height(Feet and Inches): \nFeet =  ";
    std::cin>>feet;
    std::cout<<"Inches = ";
    std::cin>>inches;
    std::cout<<"Enter weight in Pounds:";
    std::cin>>weightInPounds;
    
    //conversion of units
    heightInInches = (feet * conversionFactorForInches) + inches;
    heightInMeters = heightInInches * conversionFactorForMeters;
    massInKilos = weightInPounds / conversionFactorForKilos;
    
    //calculating BMI
    BMI = (massInKilos / (heightInMeters * heightInMeters));
    
    std::cout<<"BMI is: "<<BMI<<std::endl;
    
    return 0;
    
}

