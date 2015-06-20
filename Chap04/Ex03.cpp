//
//
//
// Review: IMPORTANT!
//
// 1. 
//    char* fullName = new char[(strlen(firstName)+strlen(lastName))];
//
//    fullName will store firstName+lastName+","+" "+'\0'
//
//    Make sure you understand this!!! It is really important. 
//    Ping me that you see this, or I will ping you when I review chapter 5. 
//
// 2. You try to allocate enough space for full name, but you use 
//    lastname to buffer it. Then it is meaningless to allocate in runtime.
//    Because lastname may overflow.
//
//
// =====================================================================================
// 
//       Filename:  Ex03.cpp
// 
//    Description:  Exercise 3 of Chapter 4 CPP Primer
// 
//        Version:  0.01
//        Created:  Friday 19 June 2015 01:53:57  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University 
// =====================================================================================


/*Write a program that asks the user to enter his or her first name and then last
 * name, and that then constructs, stores, and displays a third string, consisting of the
 * user’s last name followed by a comma, a space, and first name. Use char arrays and
 * functions from the cstring header file.A sample run could look like this:
 * Enter your first name: Flip
 * Enter your last name: Fleming
 * Here’s the information in a single string: Fleming, Flip*/

#include<iostream>
#include<stdio.h>
#include<cstring>
int main()
{
    char firstName[10],lastName[30];

    std::cout<<"Enter your first name: ";
    std::cin.getline(firstName,10);
    std::cout<<"Enter your last name:";
    std::cin.getline(lastName,15);
    
    char* fullName = new char[(strlen(firstName)+strlen(lastName)+strlen(", "))];
    strcat(lastName, ", ");
    strcat(fullName,lastName);
    strcat(fullName,firstName);
    
    std::cout<<"Here's the information in a single string: "<<fullName<<"\n";
    
    delete []fullName;
 
    return 0;
}
