// =====================================================================================
// 
//       Filename:  Ex09.cpp
// 
//    Description:  Exercise 9 of Chapter 5 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 03:15:40  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University 
// =====================================================================================

/* 9. Write a program that matches the description of the program in Programming
 * Exercise 8, but use a string class object instead of an array. Include the string
 * header file and use a relational operator to make the comparison test*/

#include<iostream>
#include<string.h>

int main()
{
    using namespace std;

    string word, done = "done";
    int countWords = 0;
    
    cin>> word;
    
    while(word != done)
    {   
        cin>>word;
        countWords++;
    }   
   
    cout<<"The number of words are : "<<countWords<<endl;

    return 0;
}

