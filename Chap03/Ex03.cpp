// =====================================================================================
// 
//       Filename:  Ex03.cpp
// 
//    Description:  Exercise 3 of Chapter 3 CPP Primer
// 
//        Version:  0.01
//        Created:  Tuesday 16 June 2015 01:45:31  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University 
// =====================================================================================
 /* 3. Write a program that asks the user to enter a latitude in degrees, minutes, and sec-
  * onds and that then displays the latitude in decimal format.There are 60 seconds of
  * arc to a minute and 60 minutes of arc to a degree; represent these values with sym-
  * bolic constants.You should use a separate variable for each input value.A sample
  * run should look like this:
  * Enter a latitude in degrees, minutes, and seconds:
  * First, enter the degrees: 37
  * Next, enter the minutes of arc: 51
  * Finally, enter the seconds of arc: 19
  * 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees*/

#include<iostream>

int main()
{
    float latDeg,latMin,latSec,latitude;
    const int minToSec = 60, degToMin = 60;
    
    std::cout<<"Enter a latitude in degrees, minutes, and seconds:"<<std::endl;
    std::cout<<"First, enter the degrees:";
    std::cin>>latDeg;
    std::cout<<"Next, enter the minutes of arc:";
    std::cin>>latMin;
    std::cout<<"Finally, enter the seconds of arc:";
    std::cin>>latSec;
    
    //conversion
    latitude = latDeg + (latMin / degToMin) + ((latSec / minToSec)/degToMin);
    

    std::cout<<latDeg<<" degrees, "<<latMin<<" minutes, "<<latSec<<" seconds = "<<latitude<<" degrees"<<std::endl;
    
}


