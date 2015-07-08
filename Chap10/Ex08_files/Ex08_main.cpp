//
// 1. in the push function. you do :
// top=top+1;
// and then 
// items[top] = item;
//
// which means you won't store in items[0]; it will waste a slot.
// It is okay to waste a slot but we don't need to waste it.
//
// 2. BUG: even if your list is full, someone will call the "push"
//    which will do  "top=top+1" for sure. and your function
//    "isfull()" will fail
//
//
// 3. you don't need a pop function for a link list, it is not a stack
//
// 4. don't do "cout" in the function "visit".
//    you can write a "print" function and do visit(print)
//
// =====================================================================================
// 
//       Filename:  Ex08_main.cpp
// 
//    Description:  Exercise 8 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 02:30:30  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* main file of Exercise 8 
 * 8. You can describe a simple list as follows:
 * n The simple list can hold zero or more items of some particular type.
 * n You can create an empty list.
 * n You can add items to the list.
 * n You can determine whether the list is empty.
 * n You can determine whether the list is full.
 * n You can visit each item in the list and perform some action on it.
 * As you can see, this list really is simple; it doesn’t allow insertion or deletion, for example.
 * Design a List class to represent this abstract type.You should provide a list.h
 * header file with the class declaration and a list.cpp file with the class method
 * implementations.You should also create a short program that utilizes your design.
 * The main reason for keeping the list specification simple is to simplify this pro-
 * gramming exercise.You can implement the list as an array or, if you’re familiar with
 * the data type, as a linked list. But the public interface should not depend on your
 * choice.That is, the public interface should not have array indices, pointers to nodes,
 * and so on. It should be expressed in the general concepts of creating a list, adding
 * an item to the list, and so on.The usual way to handle visiting each item and per-
 * forming an action is to use a function that takes a function pointer as an argument:
 * void visit(void (*pf)(Item &));
 * Here pf points to a function (not a member function) that takes a reference to Item
 * argument, where Item is the type for items in the list.The visit() function applies
 * this function to each item in the list.You can use the Stack class as a general guide.
 * */
#include<iostream>
#include"Ex08.h"
#include<cctype>

using namespace std;

void Decrement(Item &i)
{
    i = i - 1;
}

int main()
{
    List l1;
    
    int count, i = 0;

    void (*pf)(Item&);
    char ch;
    Item po;

    pf = &Decrement;

    cout<<"Enter number of items you want to add:";
    cin>>count;

    while(i < count )
    {
        
        cout<<"Enter items into the list:";
        cin>>po;

        l1.push(po);
        i++;
    }

    if(l1.isfull())
    {
        cout<<"List is full!"<<endl;
    }

    if(!(l1.isempty()))
    {
        cout<<"List is empty!"<<endl;
    }

    l1.visit(pf);

    cout << "Bye\n";

    return 0;

}
