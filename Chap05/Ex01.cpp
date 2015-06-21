// =====================================================================================
// 
//       Filename:  Ex01.cpp
// 
//    Description:  Exercise 1 of Chapter 5 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 21 June 2015 11:18:53  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University 
// =====================================================================================

/* Write a program that requests the user to enter two integers.The program should
 * then calculate and report the sum of all the integers between and including the two
 * integers.At this point, assume that the smaller integer is entered first. For example, if
 * the user enters 2 and 9 , the program should report that the sum of all the integers
 * from 2 through 9 is 44.*/


#include<iostream>


int CalSum(int  &start, int &end)
{
    int sum = 0;
        
    do
    {
        sum = sum + start;
        start ++;
    }while(start<=end);

    
    return sum;
}

int main()
{
    int sum;
    int start,end;
    using namespace std;
    
    cout<<"Enter two numbers";
    cout<<endl<<"Smaller number:";
    cin>>start;
    cout<<endl<<"Larger number:";
    cin>>end;
    
    sum = CalSum(start,end);

    cout<<"The sum is : "<<sum<<endl; 

    return 0;
}
