// =====================================================================================
// 
//       Filename:  Ex05.cpp
// 
//    Description:  Exercise 5 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 03:38:25  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 5. Consider the following structure declaration:
 * struct customer {
 * char fullname[35];
 * double payment;
 * };
 * Write a program that adds and removes customer structures from a stack, repre-
 * sented by a Stack class declaration. Each time a customer is removed, his or her
 * payment should be added to a running total, and the running total should be
 * reported. Note: You should be able to use the Stack class unaltered; just change the
 * typedef declaration so that Item is type customer instead of unsigned long .
 total+= item.payment;
 * }*/

#include<iostream>
#include "Ex05.h"

using namespace std;

Stack::Stack()
    // create an empty stack
{
    top = 0;
}

Stack::~Stack()
{
    //do nothing
}

bool Stack::isempty() const
{
    return top == 0;
}
bool Stack::isfull() const
{
    return top == MAX;
}
bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        top = top+2;
        items[top] = item;
        return true;
    }
    else
        return false;
}
bool Stack::pop(Item &item)
{
    if (top > 0)
    {
        total = total + item.payment;
        cout<<"Total is:"<<total<<endl;
        top = top - 2;
        item = items[top];
        return true;
    }
    else
        return false;
}
