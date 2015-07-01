// 1. Don't use unsigned int and int at the same expression. 
//
// i < numScores.
// numScores is an signed, but i is unsigned. 
// so numScores will be casted to unsigned first.
// what if numScores = -1?
//
//
// =====================================================================================
// 
//       Filename:  Ex02.cpp
// 
//    Description:  Exercise 2 of Chapter 7 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 24 June 2015 02:02:30  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================


/* 
 * 2. Write a program that asks the user to enter up to 10 golf scores, which are to be
 * stored in an array.You should provide a means for the user to terminate input prior
 * to entering 10 scores.The program should display all the scores on one line and
 * report the average score. Handle input, display, and the average calculation with
 * three separate array-processing functions.*/

#include<iostream>

using namespace std;

const int SIZE = 10;

float EnterInput(float score[], int &numScores)
{
    float sum = 0.0;
    for (int i = 0; i < numScores; i++)
    {
        cin>>score[i];
        sum = sum + score[i];
    }

    return sum;

}

float AvgCal(float &sum,int &numScores)
{
    float avg = (sum/numScores);

    return avg;
}

void Display(float score[], float &avg,int &numScores)
{
    cout<<"Scores are:";
    for(int i = 0; i < numScores; i++)
    {
        cout<<score[i]<<"\t";
    }
    cout<<endl;
    cout<<"Average is :"<<avg<<endl;
}

int main()
{
    float avg,sum;
    int numScores;
    float score[SIZE];

    cout<<"Enter the number of scores you will input:";
    cin>>numScores;

    cout<<"Enter input:";
    sum = EnterInput(score,numScores);
    avg = AvgCal(sum,numScores);
    Display(score,avg,numScores);

    return 0;
}
