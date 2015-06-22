// =====================================================================================
// 
//       Filename:  Ex09.cpp
// 
//    Description:  Exercise 9 of Chapter 6 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 09:08:02  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 9. Do Programming Exercise 6 but modify it to get information from a file.The first
 * item in the file should be the number of contributors, and the rest of the file should
 * consist of pairs of lines, with the first line of each pair being a contributor’s name
 * and the second line being a contribution.That is, the file should look like this:
 * 4
 * Sam Stone
 * 2000
 * Freida Flass
 * 100500
 * Tammy Tubbs
 * 5000
 * Rich Raptor
 * 55000*/

#include<iostream>
#include<fstream>
#include<vector>
#include<string>

const int NUM = 3;
const int THRESHOLD = 10000;

int main()
{
    using namespace std;

    string name;
    long int donation;
    int num,countRem = 0,countGP = 0;
    vector<string> grandPatrons;
    vector<string> remDonors;

    ifstream fin;
    ofstream fout;
    
    fout.open("Donors.txt");
    fout<<NUM<<endl;
    
    for( int i = 0; i < NUM ;i++)
    {
        cout<<"Enter name:";
        cin>>name;
        fout<<name<<endl;
        
        cout<<"Enter Donation:";
        cin>>donation;
        fout<<donation<<endl;
        
    }
    fout<<EOF;
    fout.close();
    
    fin.open("Donors.txt");
    fin>>num;
    
    while((fin.good()))
    {
        fin>>name;
        fin>>donation;
        
        if(fin.eof())
        {
            break;
        }
        else if(donation > THRESHOLD)
        {
            countGP++;
            grandPatrons.push_back(name);
        }
        else
        {
            countRem++;
            remDonors.push_back(name);
        }
        
    }

    cout<<"Grand Patrons:"<<endl;
    if(countGP == 0)
    {
        cout<<"none"<<endl;
    }
    else
    {
     for(int i = 0; i<(grandPatrons.size());i++)
     {
            cout<<grandPatrons[i]<<endl;
     }
    }
    
    cout<<"Remaining Donors:"<<endl;
    if(countRem == 0)
    {
        cout<<"none"<<endl;
    }
    else
    {
     for(int j = 0; j< (remDonors.size());j++)
     {
            cout<<remDonors[j]<<endl;
     }
    }
    return 0;
}

