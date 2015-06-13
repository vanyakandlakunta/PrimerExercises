// // Review: it is good. try to insert some blank line between code blocks
//            Make sure each code block has just one function(purpose), your code will be more readable.
// =====================================================================================
// 
//       Filename:  Ex02.cpp
// 
//    Description:  Exercise 2 of Chapter 2 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 07 June 2015 10:33:03  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================


/*  Write a C++ program that asks for a distance in furlongs and converts it to yards.
 *  (One furlong is 220 yards.)*/

#include<iostream>
int convert(int);
int main()
{
    int furlong, yards;
    /// Inserted blank line

    std::cout<<"Enter distance in Furlong:";
    std::cin>>furlong;
    /// Inserted blank line
    
    yards = convert(furlong);
    /// Inserted blank line
    
    std::cout<<"The distance in yards is:"<<yards<<std::endl;
    /// Inserted blank line
    
    return 0;
}

int convert(int furlong)
{
    int yards;
    yards = furlong * 220;
    return yards;
}
