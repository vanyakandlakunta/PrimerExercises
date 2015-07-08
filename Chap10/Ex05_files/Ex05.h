// =====================================================================================
// 
//       Filename:  Ex05.h
// 
//    Description:  header file for Exercise 5 Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 03:45:45  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  wengsht (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  
// 
// =====================================================================================
#ifndef _AUTOGUARD_Stack_H_
#define _AUTOGUARD_Stack_H_

struct customer 
{
    char fullname[35];
    double payment;
};

typedef customer Item;
static double total = 0;

class Stack
{
    private:
        enum {MAX = 30};
        Item items[MAX];
        int top;
        
    public:
        Stack();
        ~Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item & item);
        bool pop(Item &item);
};
#endif
