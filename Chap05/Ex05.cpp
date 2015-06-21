// =====================================================================================
// 
//       Filename:  Ex05.cpp
// 
//    Description:  Exercise 5 of Chapter 5 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 12:18:29  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 
You sell the book C++ for Fools.Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
        string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int .Then, the program should find the sum of the array con-
tents and report the total sales for the year.*/

#include<iostream>

const int TOTAL_MONTHS = 12;

int CalCulateSum(int (&numBooks)[TOTAL_MONTHS])
{
    int sum  = 0;
    
    for (int month = 0; month < TOTAL_MONTHS; month++)
    {
        sum = sum + numBooks[month];
    }
       
    return sum;
}

void Display(int &sum)
{
    std::cout<<"The total sales are: "<<sum<<std::endl;
}

int main()
{
   const  char* months[TOTAL_MONTHS] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int numBooks[TOTAL_MONTHS],totalSales = 0;
    
    for (int i = 0; i < TOTAL_MONTHS; i++)
    {
        std::cout<<"Enter number of books sold for: "<<months[i];
        std::cin>>numBooks[i];
    }
    
   totalSales =  CalCulateSum(numBooks);
   Display(totalSales);

    return 0;
}

