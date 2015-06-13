// it is good. 1. try printf rather than cout, it will be easier in this formatting job
//             2. what if the time is illegal? if someone input hours as 25? 
// =====================================================================================
// 
//       Filename:  Ex07.cpp
// 
//    Description:  Exercise 7 of Chapter 2 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 08 June 2015 12:23:12  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*  Write a program that asks the user to enter an hour value and a minute value.The
 *  main() function should then pass these two values to a type void function that dis-
 *  plays the two values in the format shown in the following sample run:
 *  Enter the number of hours: 9
 *  Enter the number of minutes: 28
 *  Time: 9:28*/

#include<iostream>

void displayTime(int, int);

int main()
{
    int hours, mins;
    std::cout<<"Enter the number of hours: ";
    std::cin>>hours;
    std::cout<<"Enter the number of minutes: ";
    std::cin>>mins;
    displayTime(hours,mins);
    return 0;
}

void displayTime(int hours, int mins)
{
    std::cout<<"Time: "<<hours<<":"<<mins<<std::endl;
}
