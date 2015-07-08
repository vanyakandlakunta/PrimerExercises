// =====================================================================================
// 
//       Filename:  Ex08.cpp
// 
//    Description:  Exercise 8 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 03:01:51  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* Function definitions */

#include<iostream>
#include "Ex08.h"

using namespace std;

List::List()
    // create an empty stack
{
    top = 0;
    count  = 0;
}

List::~List()
{
    //do nothing
}

bool List::isempty() const
{
    return top == 0;
}
bool List::isfull() const
{
    return top == MAX;
}
bool List::push(const Item & item)
{
    count++;
        top = top+1;
    if (top < MAX)
    {
        items[top] = item;
        return true;
    }
    else
        return false;
}
bool List::pop(Item &item)
{
    if (top > 0)
    {

        top = top - 1;
        item = items[top];
        return true;
    }
    else
        return false;                                                                                                                 
}

void List::visit(void (*pf)(Item &po))
{
   std::cout<<"Items are:"<<std::endl;
   for(int i = 1; i <= count; i++)
   {
       pf(items[i]);
       std::cout<<items[i]<<std::endl;
   }
   
}

