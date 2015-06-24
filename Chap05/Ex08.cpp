//
// Review: 1. INDENT
// a trick to do indent actomatically in vim:
//
//  in  normal mode: press:  
//      gg
//      10000==
//
//
// 2. They said not counting "done".  
//
// =====================================================================================
// 
//       Filename:  Ex08.cpp
// 
//    Description:  Exercise 8 of Chapter 5 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 02:54:00  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 8. Write a program that uses an array of char and a loop to read one word at a time
 * until the word done is entered.The program should then report the number of
 * words entered (not counting done ).A sample run could look like this:
 * Enter words (to stop, type the word done):
 * anteater birthday category dumpster
 * envy finagle geometry done for sure
 * You entered a total of 7 words.
 * You should include the cstring header file and use the strcmp() function to
 * make the comparison test.*/

#include<iostream>
#include<string.h>

const int WORD_SIZE = 15;

int main()
{
    int countWord = 0;
    char word[WORD_SIZE];
    
    std::cout<<"Enter words (to stop, type the word done):"<<std::endl;

    do
    {
       std::cin>>word;       
       countWord++;
    }
   while(strcmp(word,"done"));

    std::cout<<"You entered a total of "<<countWord - 1<<" words"<<std::endl;
    
   return 0;
}
