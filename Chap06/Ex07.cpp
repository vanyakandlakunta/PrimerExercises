// =====================================================================================
// 
//       Filename:  Ex07.cpp
// 
//    Description:  Exercise 7 of Chapter 6 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 08:29:23  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 
 * 7. Write a program that reads input a word at a time until a lone q is entered.The
 * program should then report the number of words that began with vowels, the num-
 * ber that began with consonants, and the number that fit neither of those categories.
 * One approach is to use isalpha() to discriminate between words beginning with
 * letters and those that don’t and then use an if or switch statement to further iden-
 * tify those passing the isalpha() test that begin with vowels.A sample run might
 * look like this:
 * Enter words (q to quit):
 * The 12 awesome oxen ambled
 * quietly across 15 meters of lawn. q
 * 5 words beginning with vowels
 * 4 words beginning with consonants
 * 2 others*/

#include<iostream>
#include<string.h>
#include<ctype.h>

int main()
{
    using namespace std;
    char word[15];
    int vowels = 0,consonants = 0,none = 0;
    
    cout<<"Enter word :(q to quit)";
    
    while(strcmp(word,"q") && cin>>word)
    {
        
        if(isalpha(word[0]))
        {
            switch(word[0])
            {
                case 'a': vowels++;
                          break;
                case 'e':vowels++;
                         break;
                case 'i':vowels++;
                         break;
                case 'o':vowels++;
                         break;
                case 'u':vowels++;
                         break;
                default :consonants++;
                         break;
            }
        }
        else
        {
            none++;
        }
    }
    
    cout<<endl<<"Number of words beginning with consonants = "<<consonants<<endl;
    cout<<"Number of words beginning with vowels = "<<vowels<<endl;
    cout<<"Remaining words = "<<none<<endl;
}

