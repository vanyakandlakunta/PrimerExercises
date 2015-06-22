//
// Review: INDENT style
// 
// why don't you assign TOTAL_YEARS as 3, and start iterating by 0?
// =====================================================================================
// 
//       Filename:  Ex06.cpp
// 
//    Description:  Exercise 6 of Chapter 5 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 01:13:46  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*6. Do Programming Exercise 5 but use a two-dimensional array to store input for 3
 * years of monthly sales. Report the total sales for each individual year and for the
 * combined years.*/

#include<iostream>

const int TOTAL_MONTHS = 12;
const int TOTAL_YEARS = 4;


void CalCulateSumAndDisplay(int (&numBooks)[TOTAL_YEARS][TOTAL_MONTHS])
{
    int sum[TOTAL_YEARS];
    int totalSales = 0;
    for(int year = 1; year < TOTAL_YEARS; year++)
    {   
        sum[year] = 0;
        for (int month = 0; month < TOTAL_MONTHS; month++)
        {
            sum[year] = sum[year] + numBooks[year][month];
        }
        std::cout<<"The total sales for year "<<year<<" are: "<<sum[year]<<std::endl;
        totalSales = totalSales + sum[year];
    }
    std::cout<<"The overall sales are: "<<totalSales<<std::endl;
}

int main()
{
    const  char* months[TOTAL_MONTHS] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int numBooks[TOTAL_YEARS][TOTAL_MONTHS];

    for (int year = 1; year < TOTAL_YEARS ; year++)
    {
        for (int i = 0; i < (TOTAL_MONTHS); i++)
        {
            std::cout<<"Enter number of books sold for "<<months[i]<<" of year "<<year<<": ";
            std::cin>>numBooks[year][i];
        }
    }
    CalCulateSumAndDisplay(numBooks);

    return 0;
}                       

