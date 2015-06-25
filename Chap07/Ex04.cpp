//
// It is really good.
// =====================================================================================
// 
//       Filename:  Ex04.cpp
// 
//    Description:  Exercise 4 of Chapter 7 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 24 June 2015 05:22:04  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*  4. Many state lotteries use a variation of the simple lottery portrayed by Listing 7.4. In
 *  these variations you choose several numbers from one set and call them the field
 *  numbers. For example, you might select five numbers from the field of 1–47).You
 *  also pick a single number (called a mega number or a power ball, etc.) from a sec-
 *  ond range, such as 1–27.To win the grand prize, you have to guess all the picks cor-
 *  rectly.The chance of winning is the product of the probability of picking all the
 *  field numbers times the probability of picking the mega number. For instance, the
 *  probability of winning the example described here is the product of the probability
 *  of picking 5 out of 47 correctly times the probability of picking 1 out of 27 cor-
 *  rectly. Modify Listing 7.4 to calculate the probability of winning this kind of lottery.*/

#include<iostream>

using namespace std;
// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
const int TOTAL1 = 47;
const int TOTAL2 = 27;
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;
    
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ;

    return result;
}


int main()
{
    double total, prob1,prob2, probFinal;
    int choice1, choice2;

    cout << "Enter the number of picks allowed(between 1-47):\n";
    cin >> choice1;
    cout << "pick the powerball number(between 1-27): ";
    cin>>choice2;
    
    if(choice1 <= TOTAL1 && choice2<= TOTAL2)
    {       
        prob1 = probability(TOTAL1, choice1);
        prob2 = probability (TOTAL2,choice2);
        probFinal = prob1 * prob2;
        cout<<"You have one chance in "<<probFinal<<" of winning"<<endl;
    }
    else
    {
        cout<<"invalid option.";
    }

    cout << "bye\n";
    
    return 0;
}
