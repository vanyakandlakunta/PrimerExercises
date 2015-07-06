//
// REVIEW: the name of a header and definition file for this header should be the same:
//
// Ex01_golf.h
//
//
// When you have multiple files in a project, try to write a makefile 
//
// IMPORTANT: getting makefile skills
// READ this:
//  http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
//
// and then put a makefile in this directory. ping me when you push it.
//
// =====================================================================================
// 
//       Filename:  Ex01_main.cpp
// 
//    Description:  main function of Exercise 1 of Chapter 9 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 05 July 2015 12:22:12  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*Main function that implements all the function prototypes  */

#include<iostream>
#include"Ex01.h"

const int SIZE = 10;

int main()
{
    int notEmpty = 1, count = 0, i,choice,newHandicap,index;
    golf player[SIZE];

    while (notEmpty == 1 && count < SIZE)
    {
        count++;
        notEmpty = setgolf(player[count]);
    }

    for ( i = 1; i < count; i++)
    {
        std::cout<<"Index = "<<i;
        showgolf(player[i]);
    }

    std::cout<<"Do you want to reset the handicap for any player? (0 = no, 1 = yes):";
    std::cin>>choice;

    if(choice == 1)
    {
        std::cout<<std::endl<<"Enter the index of the player whose handicap you want to reset:";
        std::cin>>index;
        std::cout<<std::endl<<"Enter the new handicap value:";
        std::cin>>newHandicap;

        handicap(player[index],newHandicap);

        std::cout<<"The new handicap is:"<<std::endl;
        showgolf(player[choice]);
    }
    
    else
    {
        //do nothing
    }

    return 0;
}
