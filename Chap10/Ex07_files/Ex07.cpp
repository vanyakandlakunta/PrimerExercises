// =====================================================================================
// 
//       Filename:  Ex07.cpp
// 
//    Description:  Exercise 7 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 02:18:14  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* Function definitions file for the prototypes in header */

#include"Ex07.h"
#include<iostream>
#include<string.h>

Plorg::Plorg(char defaultName[] = "Plorga")
{
    strcpy(name,defaultName);
    CI = 50;
}

Plorg::~Plorg()
{
    
}

void Plorg::Report() const
{
    std::cout<<std::endl;
    std::cout<<"Name : "<<name<<std::endl;
    std::cout<<"Contentment Index : "<<CI<<std::endl;
}

void Plorg::ChangeCI(int newCI)
{
    CI = newCI;
}
