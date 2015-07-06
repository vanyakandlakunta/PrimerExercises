// By saying reference to an object, it means "string &word".
//
// the function should  "converts the contents", but not only display the upper 
//
// =====================================================================================
// 
//       Filename:  Ex03.cpp
// 
//    Description:  Exercise 3 of Chapter 8 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 01 July 2015 01:52:55  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 3. Write a function that takes a reference to a string object as its parameter and that
 * converts the contents of the string to uppercase. Use the toupper() function
 * described in Table 6.4 of Chapter 6.Write a program that uses a loop which allows
 * you to test the function with different input.A sample run might look like this:
 * Enter a string (q to quit): go away
 * GO AWAY
 * Next string (q to quit): good grief!
 * GOOD GRIEF!
 * Next string (q to quit): q
 * Bye.*/

#include<iostream>
#include<stdio.h>
#include<string>
#include<cctype>
#include<string.h>

using namespace std;

void ChangeCase(string* word)
{
    int count;
    int length = word->length();
    char letter;

    for (count = 0; count < length; count++ )
    {
        letter = word->at(count);
        printf("%c",toupper(letter));
    }
    printf("\n");
}

int main()
{
    string word;

    cout<<"Enter a string(q to quit):";

    while(getline(cin,word,'\n'))
    {
        if(word != "q")
        {
            ChangeCase(&word);
            cout<<"Enter a string(q to quit):";
        }

        else
        {
            cout<<"Bye."<<endl;
            break;
        }
    }

    return 0;
}
