// =====================================================================================
// 
//       Filename:  Ex010.cpp
// 
//    Description:  Exercise 10 of Chaprt 4 CPP Primer
// 
//        Version:  0.01
//        Created:  Friday 19 June 2015 03:27:31  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 10. Write a program that requests the user to enter three times for the 40-yd dash (or
 * 40-meter, if you prefer) and then displays the times and the average. Use an array
 * object to hold the data. (Use a built-in array if array is not available.)*/


#include<iostream>
#include<array>

const int MAX_NUMBER = 3;

using namespace std;

float CalculateAverage(array<float,MAX_NUMBER> time)
{
   float avg = 0.0;
   
   for(unsigned int i = 0; i < MAX_NUMBER; i++)
   {
     avg = avg + time[i];
   }
   
   avg = avg / MAX_NUMBER;
   
   return avg;
}

void Display(float avg, array<float,MAX_NUMBER> time)
{
    cout<<"The timings are:";
    for(unsigned int i = 0; i < MAX_NUMBER; i++)
    {
        cout<<time[i]<<"\t";
    }
    cout<<"\n Average time is: "<<avg<<"\n";
}

int main()
{
    array<float,MAX_NUMBER> time;
    float avg;
  
    
    cout<<"Enter " <<MAX_NUMBER<<" timings of 40m dash:";

    for(unsigned int i = 0; i < MAX_NUMBER; i++)
    {
        cin>>time[i];
    }

    avg = CalculateAverage(time);
    Display(avg,time);
    

    return 0;
}

