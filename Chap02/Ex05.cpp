// it is good, blank lines
// =====================================================================================
// 
//       Filename:  Ex05.cpp
// 
//    Description:  Exercise 5 of Chapter 2 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 07 June 2015 10:56:34  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon Univeristy
// =====================================================================================

/*  Write a program that has main() call a user-defined function that takes a Celsius
 *  temperature value as an argument and then returns the equivalent Fahrenheit value.
 *  The program should request the Celsius value as input from the user and display
 *  the result, as shown in the following code:
 *  Please enter a Celsius value: 20
 *  20 degrees Celsius is 68 degrees Fahrenheit.
 *  For reference, here is the formula for making the conversion:
 *  Fahrenheit = 1.8 × degrees Celsius + 32.0*/

#include<iostream>

float CelsiusToFahrenheit(float);

int main()
{
    float temp_Celsius, temp_Fahrenheit;
    std::cout<<"Enter temperature in Celsius:";
    std::cin>>temp_Celsius;
    temp_Fahrenheit = CelsiusToFahrenheit(temp_Celsius);
    std::cout<<"The temperature in Fahrenheit is:"<<temp_Fahrenheit<<std::endl;
    return 0;
}

float CelsiusToFahrenheit(float temp_Celsius)
{
    float temp_Fahrenheit;
    temp_Fahrenheit = (1.8 * temp_Celsius) + 32.0;
    return temp_Fahrenheit;
}
