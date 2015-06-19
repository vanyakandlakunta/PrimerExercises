// =====================================================================================
// 
//       Filename:  Ex05.cpp
// 
//    Description:  Exercise 5 of Chapter 4 CPP Primer
// 
//        Version:  0.01
//        Created:  Friday 19 June 2015 02:15:44  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================


/* 5. The CandyBar structure contains three members.The first member holds the brand
 * name of a candy bar.The second member holds the weight (which may have a frac-
 * tional part) of the candy bar, and the third member holds the number of calories
 * (an integer value) in the candy bar.Write a program that declares such a structure
 * and creates a CandyBar variable called snack , initializing its members to "Mocha
 * Munch" , 2.3 , and 350 , respectively.The initialization should be part of the declara-
 * tion for snack . Finally, the program should display the contents of the snack vari-
 * able.*/

#include<iostream>

struct CandyBar
{
  char brandName[20];  
  float candyWeight;
  int numOfCals;
};


void display(CandyBar);


void display(CandyBar snack)
{
  std::cout<<"CandyBar Brand Name: "<<snack.brandName<<"\n";
  std::cout<<"Weight of Candy: "<<snack.candyWeight<<"\n";
  std::cout<<"Number of Calories in Candy: "<<snack.numOfCals<<"\n";
}

int main()
{
    CandyBar snack = {"Mocha Munch",2.3,350};

    display(snack);

    return 0;
}

