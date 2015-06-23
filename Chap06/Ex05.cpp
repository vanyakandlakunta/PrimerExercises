//
// IMPORTANT:
// you keep changing the variable to store the left money (temp5k, temp10k...) which makes
// your code look choppy.
//
// actually, use one variable (income for example)
// every time judge if income is zero.
//
// and use a array to store rate like 0.1 0.15, your code can finish calculating a tax in 
// 5 lines:
// double rate[] = {0, 0.1, 0.15, 0.2};
// double amounts[] = {5000, 10000, 20000, INF(a very big integer)};
//
// for(int i = 0; i < 4 && income > 0;i++) {
//      double this_amount = min(amounts[i], income);
//      total_tax += this_amount * rate[i];
//      income -= amounts[i];
// }
//
// Sense:
//
// Actually you are doing loop unrolling using your hand. 
// Next time when you face codes that seems really similar, don't try to rewrite it, try to 
// use loop (iteration) or function.
// Because:
//  1. codes will be short;
//  2. if you have a bug in one place, you may need to fix it in many place.
//
//
// =====================================================================================
// 
//       Filename:  Ex05.cpp
// 
//    Description:  Exercise 5 of Chapter 6 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 07:13:23  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 5. The Kingdom of Neutronia, where the unit of currency is the tvarp, has the fol-
 * lowing income tax code:
 * First 5,000 tvarps: 0% tax
 * Next 10,000 tvarps: 10% tax
 * Next 20,000 tvarps: 15% tax
 * Tvarps after 35,000: 20% tax
 * For example, someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 ×
 * 0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.Write a program that uses a
 * loop to solicit incomes and to report tax owed.The loop should terminate when
 * the user enters a negative number or non-numeric input.*/

#include<iostream>

const float TEN_KTVARPS = 0.10;
const float TWENTY_KTVARPS = 0.15;
const float THIRTYFIVE_KTVARPS = 0.20;

const int FIVE_K = 5000;
const int TEN_K = 10000;
const int TWENTY_K = 20000;
const int THIRTYFIVE_K = 35000;

using namespace std;

int main()
{
    float income, temp5k = 0.0,temp10k = 0.0,temp20k = 0.0, valueGTemp35k = 0.0,valueTemp10k = 0.0,valueTemp20k = 0.0,valueTemp5k = 0.0;
    float totalTax = 0.0;

    cout<<"Enter incomes and enter any negative number to exit:";

    while(cin>>income && income > 0 )
    {

        
        if(income > FIVE_K)
        {
            temp5k = income - FIVE_K;              
            valueTemp5k = FIVE_K * 0;
        }
        
        if(temp5k > 0)
        {
            if(temp5k > TEN_K)
            {
                temp10k = temp5k - TEN_K;
                valueTemp10k = TEN_K * TEN_KTVARPS;
            }

            else
            {
                valueTemp10k = temp5k * TEN_KTVARPS;
            }
        }
    
        
        if(temp10k > 0)
        {
            if(temp10k > TWENTY_K)
            {
                temp20k = temp10k - TWENTY_K;
                valueTemp20k = TWENTY_K * TWENTY_KTVARPS;
            }
            
            else
            {
                valueTemp20k = temp10k * TWENTY_KTVARPS;
            }

        }    
        
        if(temp20k > 0)
        {    
        valueGTemp35k = temp20k * THIRTYFIVE_KTVARPS;
        }
        
        totalTax = valueTemp5k + valueTemp20k + valueTemp10k + valueGTemp35k;
        
        cout<<"Total tax owed = "<<totalTax<<endl;
    }

    return 0;
}

