// =====================================================================================
// 
//       Filename:  Ex05.cpp
// 
//    Description:  Exercise 5 of Chapter 8 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 01 July 2015 04:15:34  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 5. Write a template function max5() that takes as its argument an array of five items
 * of type T and returns the largest item in the array. (Because the size is fixed, it can
 * be hard-coded into the loop instead of being passed as an argument.) Test it in a
 * program that uses the function with an array of five int value and an array of five
 * double values.*/

#include<iostream>

using namespace std;

const int SIZE = 5;

template<typename T>
T MaxValue(T values[])
{
    int i,j;

    T max = values[0];

    for (i = 0; i < SIZE; i++)
    {
        if(values[i] > max)
        {
            max = values[i];
        }
    }

    return max;
}

int main()
{
    int values[SIZE], max;
    float fvalues[SIZE],fmax;
    int count;
    
    cout<<"Enter 5 int values"<<endl;
    for (count = 0; count < SIZE; count++)
    {
        cin>>values[count];
    }
    
    max = MaxValue(values);
    
    cout<<"Max value is:"<<max<<endl;
    
    cout<<"Enter 5 float values"<<endl;
    for (count = 0; count < SIZE; count++)
    {
        cin>>fvalues[count];
    }
    
    fmax = MaxValue(fvalues);
    
    cout<<"Max value is:"<<fmax<<endl;
    
    return 0;
}

