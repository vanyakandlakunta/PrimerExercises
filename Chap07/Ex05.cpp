// =====================================================================================
// 
//       Filename:  Ex05.cpp
// 
//    Description:  Exercise 5 of Chapter 7 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 24 June 2015 07:06:52  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*

#include< recursive function that takes an integer argument and returns the factorial
of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
in a program that uses a loop to allow the user to enter various values for which the
program reports the factorial*/
#include<iostream>

using namespace std;

int fact(int num)
{
    int factorial;

    if(num <= 0)
        return 1;

    factorial = num * fact(num-1);
    
    return factorial;
}

int main()
{
    int num;
    
    cout<<"Enter the number for factorial:";
    cin>>num;

    if(num >= 0)
    {
        cout<<"The factorial is:" << fact(num)<<endl;
    }
    else
    {
        cout<<"Invalid.";
    }
    
    return 0;
}
