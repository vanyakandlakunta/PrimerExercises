// =====================================================================================
// 
//       Filename:  Ex01.cpp
// 
//    Description:  Exercise 1 file 'golf.cpp' Chapter 9 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 05 July 2015 11:39:51  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*One file, named golf.cpp ,
 * should provide suitable function definitions to match the prototypes in the header
 * file.*/

#include<stdio.h>
#include<iostream>
#include<string.h>
#include"Ex01.h"

void setgolf(golf & g, const char * name, int hc)
{
    g.handicap = hc;
    strcpy(g.fullname,name);
}

int setgolf(golf & g)
{
    char name[20];
    int hc;

    printf("Enter the name: ");
    std::cin.getline(name,20);
    
    if(strlen(name) == 0)
    {
        return 0;
    }

    printf("Enter handicap: ");
    std:: cin>>hc;
    std::cin.get();
    
    setgolf(g,name,hc);
    return 1;
    
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    std::cout<<"\tName: "<<g.fullname;
    std::cout<<"\tHandicap: "<<g.handicap<<std::endl;
}

