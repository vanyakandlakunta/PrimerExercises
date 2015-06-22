// =====================================================================================
// 
//       Filename:  Ex01.cpp
// 
//    Description:  Exercise 1 of Chapter 6 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 04:33:03  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 1. Write a program that reads keyboard input to the @ symbol and that echoes the
 * input except for digits, converting each uppercase character to lowercase, and vice
 * versa. (Don’t forget the cctype family.)*/

#include<iostream>
#include<ctype.h>

int main()
{
    using namespace std;
    char ch, chNew;
    
    cout<<"Enter input:";
    
    do
    {
        cin>>ch;
        
        if(isdigit(ch))
        {
            continue;
        }
        
        else if(isupper(ch))
        {
            chNew = tolower(ch);
            cout<<chNew<<endl;
        }
        else if(islower(ch))
        {
            chNew = toupper(ch);
            cout<<chNew<<endl;
        }
        
        else
        {
            cout<<ch<<endl;
        }

    }
    while(ch != '@');
}


