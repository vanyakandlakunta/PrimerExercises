// =====================================================================================
// 
//       Filename:  Ex06.cpp
// 
//    Description:  Exercise 6 of Chapter 6 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 07:46:15  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 6. Put together a program that keeps track of monetary contributions to the Society
 * for the Preservation of Rightful Influence. It should ask the user to enter the num-
 * ber of contributors and then solicit the user to enter the name and contribution of
 * each contributor.The information should be stored in a dynamically allocated array
 * of structures. Each structure should have two members: a character array (or else a
 * string object) to store the name and a double member to hold the amount of the
 * contribution.After reading all the data, the program should display the names and
 * amounts donated for all donors who contributed $10,000 or more.This list should
 * be headed by the label Grand Patrons.After that, the program should list the
 * remaining donors.That list should be headed Patrons. If there are no donors in one
 * of the categories, the program should print the word “none.”Aside from displaying
 * two categories, the program need do no sorting.*/

#include<iostream>
#include<vector>
#include<stdlib.h>

const int THRESHOLD = 10000;

struct ContDetails
{
    char name[25];
    double contribution;
};

int main()
{
    using namespace std;
    
    int numContributors,countGP = 0,countRem = 0;
    string name;
    
    cout<<"Enter the number of contributors: ";
    cin>>numContributors;
    
    if(numContributors > 0)
    {
     ContDetails* user = new ContDetails[numContributors];
     vector<string> grandPatrons,remDonors;
    
     for (unsigned int i = 0; i < numContributors ; i++)
     {
        cout<<"Enter name:";
        cin>>user[i].name;
        cout<<"Enter contribution:";
        cin>>user[i].contribution;
        
        if(user[i].contribution > THRESHOLD)
        {
            countGP++;
            grandPatrons.push_back(user[i].name);
            grandPatrons.resize(countGP);
        }
        else 
        {
            countRem++;
            remDonors.push_back(user[i].name);
            remDonors.resize(countRem);
        }
     }
    
      cout<<"Grand Patrons:"<<endl;
      if(grandPatrons.capacity() == 0)
       {
        cout<<"none!";
       }
      else
      {
       for (unsigned int p = 0; p < (grandPatrons.size()); p++)
        {
          cout<<grandPatrons[p]<<endl;
        }
       }
    
      cout<<"Remaining Donors:"<<endl;

      if(remDonors.capacity() == 0)
      {
        cout<<"none!";
      }
      else
      {
        for (unsigned int q = 0; q < (remDonors.size()); q++)
        {
            cout<<remDonors[q]<<endl;
        }
      }
    }
    else
    {
        cout<<"Invalid option";
    }
return 0;
}

