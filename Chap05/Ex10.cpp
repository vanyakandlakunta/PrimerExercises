// review: good
// =====================================================================================
// 
//       Filename:  Ex10.cpp
// 
//    Description:  Exercise 10 of Chapter 5 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 03:36:01  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University 
// =====================================================================================

/* 10. Write a program using nested loops that asks the user to enter a value for the
 * number of rows to display. It should then display that many rows of asterisks, with
 * one asterisk in the first row, two in the second row, and so on. For each row, the
 * asterisks are preceded by the number of periods needed to make all the rows
 * display a total number of characters equal to the number of rows.A sample run
 * would look like this:
 * Enter number of rows: 5
 * ....*
 * ...**
 * ..***
 * .****
 * ******/

#include<iostream>

int main()
{
    using namespace std;

    int numRows,space,star,i;
    
    cout<<"Enter number of rows:";
    cin>>numRows;
    
    for (i = 1 ; i <= numRows; i++)
    {
       for (space = 1; space <= (numRows - i); space++)
        {
            cout<<".";
        }
       
       for (star = space; star <= numRows; star++)
       {
           cout<<"*";
       }
       
       cout<<endl;
    }

    return 0;
}

