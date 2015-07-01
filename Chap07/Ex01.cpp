//
// num1 and num2 are not inited. They will be random, and maybe 0. which will make you 
// program wrong. 
//
// In some compiler, num1 and num2 will be inited as 0. which will spoil your program for
// sure
// =====================================================================================
// 
//       Filename:  Ex01.cpp
// 
//    Description:  Exercise 1 of Chapter 7 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 24 June 2015 05:27:18  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 1. Write a program that repeatedly asks the user to enter pairs of numbers until at
 * least one of the pair is 0 . For each pair, the program should use a function to calcu-
 * late the harmonic mean of the numbers.The function should return the answer to
 * main() , which should report the result.The harmonic mean of the numbers is the
 * inverse of the average of the inverses and can be calculated as follows:
 * harmonic mean = 2.0 × x × y / (x + y)*/

#include<iostream>

using namespace std;

double HarmonicMean(int &x, int &y)
{
    double hmean;

    hmean = ((2.0 * x * y) / (x+y));

    return hmean;
}

int main()
{
    double hmean;
    int num1 = 1, num2 = 1; // gave initial values to them so that it doesn't crash.

    while(num1 != 0 && num2!=0)
    {
        cout<<"Calculating Harmonic Mean"<<endl;
        cout<<"Enter 1st number:";
        cin>>num1;
        cout<<"Enter 2nd number:";
        cin>>num2;

        hmean = HarmonicMean(num1,num2);
        cout<<"Harmonic mean is: "<<hmean<<endl;
    }
    return 0;
}

