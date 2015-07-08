//
// Review: 
// 1. Don't use a variable SIZE as the array size. Use a constant.
// older compilers only support constant as an array size. To make your 
// code ore robust. 
//
// 2. add a "clean" rule for your makefile
//
// 3. add "*.o" rule in your .gitignore
//
//
// =====================================================================================
// 
//       Filename:  Ex03_main.cpp
// 
//    Description:  Main file for Exercise 3 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 02:04:59  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

#include"Ex03.h"
#include<iostream>
#include<stdio.h>

static int SIZE = 10;

using namespace std;

int main()
{
    golf player[SIZE];
    int count = 0,notEmpty = 1,i, choice,index, newHandicap;
    
    while(notEmpty == 1 && count < SIZE)
    {
      count++;
      notEmpty = player[count].setgolf(); 
    }
    
    for( i = 1; i < count; i++ )
    {
        cout<<"Index: "<<i<<"\t";
        player[i].showgolf();
    }
    
    cout<<"Do you want to change the handicap of a player?(0 = No | 1 = Yes) :";
    cin>>choice;
    
    if(choice == 1)
    {
        cout<<"Enter the index of the player you want to change the handicap of: ";
        cin>>index;
        cout<<"Enter the new handicap value:";
        cin>>newHandicap;
        
        player[index].sethandicap(newHandicap);
        
        cout<<"The new handicap is:"<<endl;
        player[index].showgolf();
        
    }

    else
    {
        //do nothing
    }
    
    return 0;
}


