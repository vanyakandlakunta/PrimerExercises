//
// REVIEW: it is good!
//
// =====================================================================================
// 
//       Filename:  Ex03.cpp
// 
//    Description:  Exercise 3 of Chapter 9 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 06 July 2015 02:17:53  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 3. Begin with the following structure declaration:
 * struct chaff
 * {
 * char dross[20];
 * int slag;
 * };
 * Write a program that uses placement new to place an array of two such structures in
 * a buffer.Then assign values to the structure members (remembering to use
 * strcpy() for the char array) and use a loop to display the contents. Option 1 is to
 * use a static array, like that in Listing 9.10, for the buffer. Option 2 is to use regular
 * new to allocate the buffer.
 * }*/

#include<iostream>
#include<stdio.h>
#include<string.h>

const int NUM = 2;
const int SIZE = 100;

struct chaff
{
    char dross[20];
    int slag;
};

char buffer[SIZE];

using namespace std;

int main()
{
    chaff *p;
    p = new (buffer) chaff[NUM];
    int i,slag;
    char dross[20];

    for (i = 0; i < NUM; i++ )
    {
        cout<<"Enter dross: ";
        cin.getline(dross,20);
        strcpy(p[i].dross,dross);
        cout<<"Enter slag:";
        cin>>slag;
        cin.get();
        p[i].slag = slag;
    }

    for (i = 0; i < NUM; i++)
    {
        cout<<"Dross: "<<p[i].dross<<endl;
        cout<<"Slag: "<<p[i].slag<<endl;
    }

    return 0;
}
