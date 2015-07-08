// =====================================================================================
// 
//       Filename:  Ex07_main.cpp
// 
//    Description:  Exercise 7 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 02:22:18  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* main function of Exercise 7 */

#include<iostream>
#include"Ex07.h"

using namespace std;

int main()
{
    char name[20];
    int CI;
    
    cout<<"Enter plorg name:";
    cin.getline(name,20);
    Plorg p1(name);
    
    p1.Report();
    
    cout<<"Enter new CI:";
    cin>>CI;
    p1.ChangeCI(CI);
    p1.Report();

    return 0;
}


