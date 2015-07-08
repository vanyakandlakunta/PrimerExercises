// =====================================================================================
// 
//       Filename:  Ex03.cpp
// 
//    Description:  Exercise 3 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 01:00:03  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================
/* 3. Do Programming Exercise 1 from Chapter 9 but replace the code shown there with
 * an appropriate golf class declaration. Replace setgolf(golf &, const char*, int
 * with a constructor with the appropriate argument for providing initial values.
 * Retain the interactive version of setgolf() but implement it by using the con-
 * structor. (For example, for the code for setgolf() , obtain the data, pass the data to
 * the constructor to create a temporary object, and assign the temporary object to the
 * invoking object, which is *this .))*/

#include<iostream>
#include<stdio.h>
#include<string.h>
#include"Ex03.h"

using namespace std;

golf::~golf()
{
    //do nothing
}

int golf::setgolf()
{
    cout<<"Enter name: ";
    cin.getline(fullname,Len);
    
    if(strlen(fullname) == 0)
    {
        return 0;
    }

    cout<<"Enter handicap: ";
    cin>>handicap;
    cin.get();
    
    golf g(fullname,handicap);
    *this = g;
    return 1;
}

golf::golf(const char name[],int hc)
{    
    strcpy(fullname,name);
    handicap = hc;
}

void golf::showgolf() const
{
    printf("Name: %s\t",fullname);
    cout<<"Handicap: "<<handicap<<endl;
}
void golf::sethandicap(int hc)
{
    handicap = hc;
}

