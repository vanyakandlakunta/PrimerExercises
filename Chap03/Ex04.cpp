//
//
// Same as Ex01
//
// =====================================================================================
// 
//       Filename:  Ex04.cpp
// 
//    Description:  Exercise 4 of Chapter 3 of CPP Primer
// 
//        Version:  0.01
//        Created:  Tuesday 16 June 2015 02:00:15  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University 
// =====================================================================================

/*  Write a program that asks the user to enter the number of seconds as an integer
 *  value (use type long , or, if available, long long ) and that then displays the equiva-
 *  lent time in days, hours, minutes, and seconds. Use symbolic constants to represent
 *  the number of hours in the day, the number of minutes in an hour, and the number
 *  of seconds in a minute.The output should look like this:
 *  Enter the number of seconds: 31600000
 *  31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds*/

#include<iostream>

int main()
{
    
    int numOfDays,numOfHours,numOfMins;
    long numOfSecs,remSec;
    const int numHours = 24, numMins = 60, numSecs = 60;
    
    std::cout<<"Enter the number of seconds:";
    std::cin>>numOfSecs;
    
    //conversion
    numOfDays = (numOfSecs / (numHours * numMins * numSecs));
    remSec = numOfSecs % (numHours * numMins * numSecs);
    numOfHours = (remSec / (numMins * numSecs));
    remSec = remSec % (numMins * numSecs);
    numOfMins = remSec / (numSecs);
    remSec = remSec % (numSecs);
    
    std::cout<<numOfSecs<<" seconds = "<<numOfDays<<" days, "<<numOfHours<<" hours, "<<numOfMins<<" minutes, "<<remSec<<" seconds"<<std::endl;
    
    return 0;

}
