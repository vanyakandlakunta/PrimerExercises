//
// Review:
// don't need to buffer pointer in "p"
//
// Use 
//     display(snack);
//
// Later you need to be clear about array and pointer
// =====================================================================================
// 
//       Filename:  Ex06.cpp
// 
//    Description:  Exercise 6 of Chapter 4 CPP Primer
// 
//        Version:  0.01
//        Created:  Friday 19 June 2015 02:23:41  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* The CandyBar structure contains three members, as described in Programming
 * Exercise 5.Write a program that creates an array of three CandyBar structures, ini-
 * tializes them to values of your choice, and then displays the contents of each struc-
 * ture.*/

#include<iostream>
#include<string>

const int MAX_NUMBER = 3,ArSize = 25;
 
struct CandyBar
{
    char brandName[ArSize];
    float candyWeight;
    int numOfCals;
};

void display(CandyBar*);

void display(CandyBar* snack)
{
    for(unsigned int i = 0; i < MAX_NUMBER; i++ )
    {
     std::cout<<"CandyBar Brand Name: "<<snack[i].brandName<<"\n";
     std::cout<<"Weight of Candy: "<<snack[i].candyWeight<<"\n";
     std::cout<<"Number of Calories in Candy: "<<snack[i].numOfCals<<"\n";
    }
       
}

int main()
{
    CandyBar *p;
    CandyBar snack[MAX_NUMBER] = {
                         {"Mocha Munch",2.3,350},
                         {"Dairy Milk",3.5,450},
                         {"Eclairs",2.4,351}  
                        };
    
    p = &snack[0];
    
    display(p);

    return 0;
}
