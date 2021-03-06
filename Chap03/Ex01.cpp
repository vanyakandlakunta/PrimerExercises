//
//  Review: Always choose to write a function like inch2feetInch(), if you have two return value maybe you can use reference or pointer
//
//  a general good format for writing a function is:
//
//  func(IN2, IN2, ... , INOUT1, ... OUT1, OUT2) 
//
//  if means that the parameter inputted always are before the outputted (the ones that you want to change in the function)
//
//
//
// =====================================================================================
// 
//       Filename:  Ex01.cpp
// 
//    Description:  Exercise 1 of Chapter 3 CPP Primer
// 
//        Version:  0.01
//        Created:  Tuesday 16 June 2015 12:41:42  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University 
// =====================================================================================

/* 1. Write a short program that asks for your height in integer inches and then converts
 * your height to feet and inches. Have the program use the underscore character to
 * indicate where to type the response.Also use a const symbolic constant to repre-
 * sent the conversion factor.*/

#include<iostream>

int main()
{
    int heightInInches, heightRemInInches,heightInFeet;
    const int conversionFactor = 12;

    std::cout<<"Enter height: ______\b\b\b\b\b\b";
    std::cin>>heightInInches;
    
    heightInFeet = heightInInches / conversionFactor;
    heightRemInInches = heightInInches % conversionFactor;
    
    std::cout<<"Height in Feet and Inches is "<<heightInFeet<<"ft "<<heightRemInInches<<"inches\n";
    
    return 0;
}

