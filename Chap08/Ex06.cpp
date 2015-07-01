// =====================================================================================
// 
//       Filename:  Ex06.cpp
// 
//    Description:  Exercise 6 of Chapter 8 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 01 July 2015 04:37:24  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*6. Write a template function maxn() that takes as its arguments an array of items of
 * type T and an integer representing the number of elements in the array and that
 * returns the largest item in the array.Test it in a program that uses the function tem-
 * plate with an array of six int value and an array of four double values.The pro-
 * gram should also include a specialization that takes an array of pointers-to- char as
 * an argument and the number of pointers as a second argument and that returns the
 * address of the longest string. If multiple strings are tied for having the longest
 * length, the function should return the address of the first one tied for longest.Test
 * the specialization with an array of five string pointers.*/

#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

template<typename T>
T maxn(T values[], int size)
{
    T max;
    int i;

    max = values[0];

    for( i = 0;i <size ;i++)
    {
        if(values[i] > max)   
        {
            max = values[i];
        }
    }

    return max;
}   

template<> char* maxn<char*>(char* values[],int size)
{
    char* max = values[0];
    int i;

    for (i = (size-1); i > 0; i--)
    {
        if((strlen(values[i])) > (strlen(max)))
        {
            max = values[i];
        }

    }

    return max;
}

int main()
{
    int iValues[6] = {3,5,4,6,0,1}, iMax;
    float fValues[4] = {4.1, 4.3, 8.8, 2.2},fMax;
    char* cValues[5] = {"hello","cpp","primer","exe","eight"};
    char* cMax;

    iMax = maxn(iValues,6);
    fMax = maxn(fValues,4);
    cMax = maxn<char*>(cValues,5);

    cout<<"The max values are:"<<endl;
    cout<<"Integer:"<<iMax<<endl;
    cout<<"Float:"<<fMax<<endl;
    cout<<"Pointer to character:"<<cMax<<endl;

    return 0;

}

