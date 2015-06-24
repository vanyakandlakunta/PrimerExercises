// =====================================================================================
// 
//       Filename:  Ex06.cpp
// 
//    Description:  Exercise 6 of Chapter 7 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 24 June 2015 07:33:28  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 6. Write a program that uses the following functions:
 * Fill_array() takes as arguments the name of an array of double values and an
 * array size. It prompts the user to enter double values to be entered in the array. It
 * ceases taking input when the array is full or when the user enters non-numeric
 * input, and it returns the actual number of entries.
 * Show_array() takes as arguments the name of an array of double values and an
 * array size and displays the contents of the array.
 * Reverse_array() takes as arguments the name of an array of double values and an
 * array size and reverses the order of the values stored in the array.
 * The program should use these functions to fill an array, show the array, reverse the
 * array, show the array, reverse all but the first and last elements of the array, and then
 * show the array.*/

#include<iostream>

using namespace std;

int Fill_array(double array[], int &size)
{
    int i = 0;

    cout<<"Enter values into the array:";

    while(i<size && cin>>array[i])
    {
        i++;
    }

    return i;
}

void Show_array(double array[], int &size)
{
    cout<<"The array is:"<<endl;
    
    for (unsigned int i = 0; i < size; i++)
    {
        cout<<array[i]<<endl;
    }
//    cout<<"Finished showing.";
}

void Reverse_array(double array[],int &size)
{
    double rev[size],temp = 0.0;

    cout<<"The reversed array is:"<<endl;
    
    for (int i = (size-1), j=0; i >= 0; i--, j++)
    {
            rev[j] = array[i];
    }

    for(unsigned int p = 0; p< size; p++)
    {
            cout<<rev[p]<<endl;
    }

    temp = rev[0];
    rev[0] = rev[size-1];
    rev[size-1] = temp;
    
    cout<<"Reversing all elements but first and last:"<<endl;
    for ( unsigned int ele = 0; ele < size ; ele++)
    {
        cout<<rev[ele]<<endl;
    }
}

int main()
{
    int size = 10, realSize;
    double array[size];

    realSize = Fill_array(array,size);
    Show_array(array,realSize);
    Reverse_array(array,realSize);

    return 0;
}

