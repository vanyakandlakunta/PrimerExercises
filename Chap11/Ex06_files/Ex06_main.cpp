// =====================================================================================
// 
//       Filename:  Ex06_main.cpp
// 
//    Description:  Main function for Ex06 Chapter 11 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 01:57:34  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it overloads all six
 * relational operators.The operators should compare the pounds members and return
 * a type bool value.Write a program that declares an array of six Stonewt objects and
 * initializes the first three objects in the array declaration.Then it should use a loop
 * to read in values used to set the remaining three array elements.Then it should
 * report the smallest element, the largest element, and how many elements are greater
 * or equal to 11 stone. (The simplest approach is to create a Stonewt object initial-
 * ized to 11 stone and to compare the other objects with that object.)*/


#include <iostream>
#include "Ex06.h"

using namespace std;

int main()
{
    Stonewt arr[6]={{10},{2,10},{30.5}};
    Stonewt comp(11);
    double val;
    int minIndex = 0;
    int maxIndex = 0;
    int greaterCount = 0;

    cout<<"Enter 3 values for the weights:";
    for(unsigned int index = 3; index< 6; index++)
    {

        cin>>val;
        arr[index]= val;
    }


    for(unsigned int i = 0; i < 6 ; i++)
    {
        if(arr[i] < arr[minIndex])
        {
            minIndex = i;
        }

        else if(arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }

        else 
        {
            //do nothing
        }
        
        if(arr[i] >= comp)
        {
            greaterCount++;
        }
    }
    
cout<<"Number of elements greater than stone 11 are: "<<greaterCount<<endl;
cout<<"Largest element: "<<arr[maxIndex]<<endl;
cout<<"Smallest element: "<<arr[minIndex]<<endl;

return 0;
}
