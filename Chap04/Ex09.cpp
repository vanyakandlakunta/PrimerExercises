// Review: 
//
// 1. IMPORTANT!!!!
//  you didn't delete the array! please ping me about how you delete it. 
//
// 2. Your indent 
//     instead of 
//          struct CandyBar
//              {
//
//              }
//
//     do 
//          struct CandyBar
//          {
//
//          }
//
// the "{" is on the same level as the struct name 
//
// 3. same problem about "get()"
//
// =====================================================================================
// 
//       Filename:  Ex09.cpp
// 
//    Description:  Exercise 9 of Chapter 4 CPP Primer
// 
//        Version:  0.01
//        Created:  Friday 19 June 2015 03:09:19  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 9. Do Programming Exercise 6, but instead of declaring an array of three CandyBar
 * structures, use new to allocate the array dynamically.*/

#include<iostream>
#include<string>

const int ArSize = 3, NameSize = 25;

struct CandyBar
  {
      char brandName[NameSize];
      float candyWeight;
      int numOfCals;
  };
   
void display(CandyBar*);
    
void display(CandyBar* snack)
   {
       std::cout<<"Brand\t\tWeight\t\tNum of Calories\n";
       for(unsigned int i = 0; i < ArSize; i++ )
       {
           
        std::cout<<snack[i].brandName<<"\t\t"<<snack[i].candyWeight<<"\t\t"<<snack[i].numOfCals<<"\n";
         
       }
       
   }
  
int main()
 {
   CandyBar* snack = new CandyBar[ArSize];
   
   for(unsigned int i = 0; i < ArSize ; i++ ) 
   {
       std::cout<<"Enter CandyBar Brand Name:";
       std::cin.getline(snack[i].brandName,NameSize);
       std::cout<<"Enter Weight of Candy:";
       std::cin>>snack[i].candyWeight;
       std::cout<<"Enter number of Calories in the Candy:";
       std::cin>>snack[i].numOfCals;
       std::cin.get();
   }
  
  display(snack);
 
     return 0;
}                                                                                                                                           
                           
