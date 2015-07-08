// =====================================================================================
// 
//       Filename:  Ex08.h
// 
//    Description:  Header for Exercise 8
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 02:46:44  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// 
// =====================================================================================
#ifndef _AUTOGUARD_List_H_
#define _AUTOGUARD_List_H_

typedef unsigned long Item;
static double total = 0;

class List
{
    private:
        enum {MAX = 10};
        Item items[MAX];
        int top,count;

    public:
    
        List();
        ~List();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item & item);
        bool pop(Item &item);
        void visit(void (*pf)(Item &item));
};
#endif

