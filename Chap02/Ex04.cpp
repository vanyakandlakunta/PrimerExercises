// it is good. blank lines
// =====================================================================================
// 
//       Filename:  Ex04.cpp
// 
//    Description:  Exercise 4 of Chapter 2 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 07 June 2015 10:49:30  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University 
// =====================================================================================

/*  Write a program that asks the user to enter his or her age.The program then should
 *  display the age in months:
 *  Enter your age: 29
 *  Your age in months is 384.*/

#include<iostream>

int main()
{
    int age_years,age_months;
    std::cout<<"Enter your age:";
    std::cin>>age_years;
    age_months = age_years * 12;
    std::cout<<"Your age in months is:"<<age_months<<std::endl;
    return 0;
}    

