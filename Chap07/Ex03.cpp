//
// function b. is just asking for calculating volumn. And want you pass by pointer.
// Even if reference used pointer to implement. We still find sometimes use pointer
// directly is convenient too.
// =====================================================================================
// 
//       Filename:  Ex03.cpp
// 
//    Description:  Exercise 3 of Chapter 7 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 24 June 2015 04:53:43  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 3. Here is a structure declaration:
 * struct box
 * {
 * char maker[40];
 * float height;
 * float width;
 * float length;
 * float volume;
 * };
 * a. Write a function that passes a box structure by value and that displays the
 * value of each member.
 * b. Write a function that passes the address of a box structure and that sets the
 * volume member to the product of the other three dimensions.
 * c. Write a simple program that uses these two functions.
 * }*/

#include<iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void Display1(box c)
{
    cout<<c.maker<<endl;
    cout<<c.height<<endl;
    cout<<c.width<<endl;
    cout<<c.length<<endl;
    cout<<c.volume<<endl;
}

void Display2(box *c)
{

    cout<<c->maker<<endl;
    cout<<c->height<<endl;
    cout<<c->width<<endl;
    cout<<c->length<<endl;
    c->volume = (c->length * c->width * c->height);
    cout<<c->volume<<endl;
}

int main()
{
    box b = {"Vanya", 10.5,11.2,6.6,7.8};

    Display1(b);
    Display2(&b);

    return 0;
}

