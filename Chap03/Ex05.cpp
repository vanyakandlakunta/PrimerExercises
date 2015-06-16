// =====================================================================================
// 
//       Filename:  Ex05.cpp
// 
//    Description:  Exercise 5 of Chapter 3 CPP Primer
// 
//        Version:  0.01
//        Created:  Tuesday 16 June 2015 02:18:07  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University 
// =====================================================================================

/*  Write a program that requests the user to enter the current world population and
 *  the current population of the U.S. (or of some other nation of your choice). Store
 *  the information in variables of type long long . Have the program display the per-
 *  cent that the U.S. (or other nation’s) population is of the world’s population.The
 *  output should look something like this:
 *  Enter the world's population: 6898758899
 *  Enter the population of the US: 310783781
 *  The population of the US is 4.50492% of the world population.
 *  You can use the Internet to get more recent figures.*/

#include<iostream>

int main()
{
    long long curWorldPopulation, curUSPopulation;
    float popPercent;
    
    std::cout<<"Enter world's population: ";
    std::cin>>curWorldPopulation;
    std::cout<<"Enter the population of the US: ";
    std::cin>>curUSPopulation;
    
    popPercent = ((float)curUSPopulation/(float)curWorldPopulation) * 100;
    
    std::cout<<"The population of the US is "<<popPercent<<"\% of the world population."<<std::endl;
        
    return 0;
}


