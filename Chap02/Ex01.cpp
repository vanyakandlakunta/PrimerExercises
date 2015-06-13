// Review: It is good.
// =====================================================================================
// 
//       Filename:  Ex01.cpp
// 
//    Description:  Exercise 1 of Chapter 2 CPP Primer
// 
//        Version:  0.01
//        Created:  Thursday 04 June 2015 10:06:23  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author: kchary@andrew.cmu.edu
//        Company: Carnegie Mellon University 
// =====================================================================================


/* Write a C++ program that displays your name and address (or if you value your
 * privacy, a fictitious name and address).*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    char name[10] = "vanya";
    char address[50] = "Door no.10, Harbour Heights, New Delhi, India";
    std::cout<<"Name:"<<name<<std::endl;
    std:: cout<<"Address:"<<address<<std::endl;
    return 0;
}
