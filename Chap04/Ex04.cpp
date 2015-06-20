//
// Review: Good
//
// =====================================================================================
// 
//       Filename:  Ex04.cpp
// 
//    Description:  Exercise 4 of Chapter 4 CPP Primer
// 
//        Version:  0.01
//        Created:  Friday 19 June 2015 02:11:53  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*4. Write a program that asks the user to enter his or her first name and then last
 * name, and that then constructs, stores, and displays a third string consisting of the
 * user’s last name followed by a comma, a space, and first name. Use string objects
 * and methods from the string header file.A sample run could look like this:
 * Enter your first name: Flip
 * Enter your last name: Fleming
 * Here’s the information in a single string: Fleming, Flip*/

#include<iostream>
#include<string>

int main()
{
    std::string firstName,lastName,fullName;
    
    std::cout<<"Enter your first name: ";
    std::cin>>firstName;
    std::cout<<"Enter your last name: ";
    std::cin>>lastName;
    
    fullName = lastName + ", " + firstName;
    
    std::cout<<"Here’s the information in a single string:"<<fullName<<"\n";

    return 0;
}

