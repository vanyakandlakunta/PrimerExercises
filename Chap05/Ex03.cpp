// =====================================================================================
// 
//       Filename:  Ex03.cpp
// 
//    Description:  Exercise 3 of Chapter 5 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 21 June 2015 11:58:33  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*3. Write a program that asks the user to type in numbers.After each entry, the pro-
 * gram should report the cumulative sum of the entries to date.The program should
 * terminate when the user enters 0 .*/

#include<iostream>

int main()
{
    int num, sum = 0;
    
    std::cout<<"Enter an integer:";
    std::cin>>num;
    
    while( num != 0 )
    {
         sum = sum + num;
         std::cout<<"Cumulative sum = "<<sum<<std::endl;
         std::cout<<"Enter an integer:";
         std::cin>>num;
    }

    return 0;
    
}

