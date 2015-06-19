// =====================================================================================
// 
//       Filename:  Ex07.cpp
// 
//    Description:  Exercise 7 of Chapter 4 CPP Primer
// 
//        Version:  0.01
//        Created:  Friday 19 June 2015 02:39:03  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 7. William Wingate runs a pizza-analysis service. For each pizza, he needs to record
 * the following information:
 * The name of the pizza company, which can consist of more than one word
 * The diameter of the pizza
 * The weight of the pizza
 * Devise a structure that can hold this information and write a program that uses a
 * structure variable of that type.The program should ask the user to enter each of the
 * preceding items of information, and then the program should display that informa-
 * tion. Use cin (or its methods) and cout .*/

#include<iostream>
const int arSize = 25,arSize1 = 2;
struct Pizza
{
    char companyName[arSize];
    float pizzaDia;
    float pizzaWeight;
};

void display(Pizza);

void display(Pizza user)
{
    
  std::cout<<"Company name: "<<user.companyName<<"\n";
  std::cout<<"Diameter of Pizza: "<<user.pizzaDia<<"\n";
  std::cout<<"Weight of Pizza: "<<user.pizzaWeight<<"\n";
 
}

int main()
{
  Pizza user;
  
  std::cout<<"Enter Company name: ";
  std::cin.getline(user.companyName,arSize);
  std::cout<<"Enter diameter of pizza: ";
  std::cin>>user.pizzaDia;
  std::cin.get();  
  std::cout<<"Enter weight of pizza: ";
  std::cin>>user.pizzaWeight;
  std::cin.get();

  display(user);

  return 0;
}

