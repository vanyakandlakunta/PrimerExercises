//
// What will the output for this input case:
//
//  10
//  a
//
// your program gives 1, but it should be 10.
//
// =====================================================================================
// 
//       Filename:  Ex02.cpp
// 
//    Description:  Exercise 2 of Chapter 6 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 05:02:31  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*2. Write a program that reads up to 10 donation values into an array of double . (Or, if
 * you prefer, use an array template object.) The program should terminate input on
 * non-numeric input. It should report the average of the numbers and also report
 * how many numbers in the array are larger than the average.*/

#include<iostream>
#include<array>

const int SIZE = 10;
using namespace std;

void LargerNumList(array<double,SIZE> &donation, double &avg)
{
    int count = 0;

    cout<<"The average is:"<<avg<<endl;
    
    for (unsigned int i = 0; i < SIZE; i++)
    {
        if(donation[i] > avg)
        {
            count++;
        }
        else
        {
            //do nothing
        }
    }
    
    cout<<"There are "<<count<<" numbers greater than the average."<<endl;
}

int main()
{
    using namespace std;
    
    double sum = 0.0, avg;
    array<double,SIZE> donation;
    int i = 0;
    
    cout<<"Enter values:";
    
    while(i < SIZE && cin>>donation[i])
    {
        sum = sum + donation[i];
        i++;
    }
    
    if(i == 0)
    {
        cout<<"No donation."<<endl;
    }
    else
    {
        avg = (sum/SIZE);
        LargerNumList(donation , avg);
    }
    
    return 0;
}

