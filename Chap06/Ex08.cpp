// =====================================================================================
// 
//       Filename:  Ex08.cpp
// 
//    Description:  Exercise 8 of Chapter 6 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 08:58:25  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 8. Write a program that opens a text file, reads it character-by-character to the end of
 * the file, and reports the number of characters in the file.*/

#include<fstream>
#include<iostream>

int main()
{
    using namespace std;

    char ch, line[100] = "Count the characters in this file";
    int count = 0;
    
    ofstream fout;
    fout.open("CountCharacters.txt");
    fout<<line<<endl;   
    fout.close();
    
    ifstream fin;
    fin.open("CountCharacters.txt");
    if (!fin.is_open())
    {
        cout<<"Error!!!!!!";
    }
    else
    {
        while(!(fin.eof()))
        {
            fin>>ch;
            count++;
        }
    }
 
    fin.close();
    cout<<"Number of characters = "<<count<<endl;

    return 0;
}

