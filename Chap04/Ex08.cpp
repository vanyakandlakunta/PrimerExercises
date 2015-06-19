// =====================================================================================
// 
//       Filename:  Ex08.cpp
// 
//    Description:  Exercise 8 of Chapter 4 CPP Primer
// 
//        Version:  0.01
//        Created:  Friday 19 June 2015 02:58:29  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 8. Do Programming Exercise 7 but use new to allocate a structure instead of declaring
 * a structure variable.Also have the program request the pizza diameter before it
 * requests the pizza company name.*/

#include<iostream>

const int arSize = 25;

struct Pizza
 {
    char companyName[arSize];
    float pizzaDia;
    float pizzaWeight;
 };

 void display(Pizza*);
                                                                             
 void display(Pizza* user)
 {
                     
   std::cout<<"Company name: "<<user->companyName<<"\n";
   std::cout<<"Diameter of Pizza: "<<user->pizzaDia<<"\n";
   std::cout<<"Weight of Pizza: "<<user->pizzaWeight<<"\n";
    
 }

int main()
  {         
     Pizza* user = new Pizza;

     std::cout<<"Enter diameter of pizza: ";
     std::cin>>user->pizzaDia;
     std::cin.get();   
     std::cout<<"Enter Company name: ";
     std::cin.getline(user->companyName,arSize);
     std::cout<<"Enter weight of pizza: ";
     std::cin>>user->pizzaWeight;
     std::cin.get();
             
     display(user);
     
     delete user;

     return 0;
   }
  
