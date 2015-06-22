//
// Review:
//         std::cout<<"Please enter the make:";
//         std::cin>>deets[carNumber].make, ARRAY_SIZE; 
//
//         what is this cin line means? it is a new feature in c11? 
//         I think here you need a getline which you used very often 
//         in chapter 4.
// =====================================================================================
// 
//       Filename:  Ex07.cpp
// 
//    Description:  Exercise 7 of Chapter 5 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 02:29:29  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 7. Design a structure called car that holds the following information about an auto-
 * mobile: its make, as a string in a character array or in a string object, and the year
 * it was built, as an integer.Write a program that asks the user how many cars to cata-
 * log.The program should then use new to create a dynamic array of that many car
 * structures. Next, it should prompt the user to input the make (which might consist
 * of more than one word) and year information for each structure. Note that this
 * requires some care because it alternates reading strings with numeric data (see
 * Chapter 4). Finally, it should display the contents of each structure.A sample run
 * should look something like the following:
 * How many cars do you wish to catalog? 2
 * Car #1:
 * Please enter the make: Hudson Hornet
 * Please enter the year made: 1952
 * Car #2:
 * Please enter the make: Kaiser
 * Please enter the year made: 1951
 * Here is your collection:
 * 1952 Hudson Hornet
 * 1951 Kaiser*/

#include<iostream>

const int ARRAY_SIZE = 20;

struct Car
{
    char make[ARRAY_SIZE];
    int year;
    
};

void Display(Car *deets, int &numCars)
{
    std::cout<<"Here is your collection:"<<std::endl;
    for(int i = 0; i < numCars; i++)
    {
        std::cout<<deets[i].year<<" "<<deets[i].make<<std::endl;
    }
}

int main()
{
    int numCars;
    
    std::cout<<"How many cars do you wish to Catalog?";
    std::cin>>numCars;
    
    Car *deets = new Car[numCars];
    
    for (unsigned int carNumber = 0; carNumber < numCars ; carNumber++)
    {   
        std::cout<<"Car #"<<(carNumber + 1)<<std::endl;
        std::cout<<"Please enter the make:";
        std::cin>>deets[carNumber].make, ARRAY_SIZE;
        std::cout<<"Please enter the year:";
        std::cin.get();
        std::cin>>deets[carNumber].year;
    }
    
    Display(deets,numCars);
    
    delete []deets;
    
    return 0;
}
