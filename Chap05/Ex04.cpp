// =====================================================================================
// 
//       Filename:  Ex04.cpp
// 
//    Description:  Exercise 4 of Chapter 5 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 12:06:03  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*4. Daphne invests $100 at 10% simple interest.That is, every year, the investment earns
 * 10% of the original investment, or $10 each and every year:
 * interest = 0.10 × original balance
 * At the same time, Cleo invests $100 at 5% compound interest.That is, interest is 5%
 * of the current balance, including previous additions of interest:
 * interest = 0.05 × current balance
 * Cleo earns 5% of $100 the first year, giving her $105.The next year she earns 5% of
 * $105, or $5.25, and so on.Write a program that finds how many years it takes for
 * the value of Cleo’s investment to exceed the value of Daphne’s investment and then
 * displays the value of both investments at that time.*/

#include<iostream>

const float SI_RATE = 0.10;
const float CI_RATE = 0.05;

int main()
{
    float daphOrigBalance = 100.0, cleoCurBalance = 100.0;
    float daphInterest,cleoInterest, daphAmount = 100.0 ,cleoAmount = 100.0;
    int years = 0;

    do
    {
        daphInterest = daphOrigBalance * SI_RATE;
        daphAmount += daphInterest;
        
        cleoInterest = cleoCurBalance * CI_RATE;
        cleoAmount += cleoInterest;
        cleoCurBalance = cleoAmount;
        
        std::cout<<"Daph's amount : "<<daphAmount<<std::endl;
        std::cout<<"Cleo's amount : "<<cleoAmount<<std::endl;
        
        years++;

    }while(daphAmount > cleoAmount);

    std::cout<<"The number of years is: "<<years<<std::endl;

    return 0;
}

