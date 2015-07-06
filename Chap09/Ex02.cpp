//
// REVIEW: it is good
// =====================================================================================
// 
//       Filename:  Ex02.cpp
// 
//    Description:  Exercise 2 of Chapter 9 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 05 July 2015 01:32:27  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* Listing 9.9
 * static.cpp
 * static.cpp -- using a static local variable
#include <iostream>
constants
const int ArSize = 10;
// function prototype
void strcount(const char * str);
int main()
{
using namespace std;
char input[ArSize];
char next;
cout << "Enter a line:\n";
cin.get(input, ArSize);
while (cin)
{Storage Duration, Scope, and Linkage
cin.get(next);
while (next != '\n')
// string didn't fit!
cin.get(next);
// dispose of remainder
strcount(input);
cout << "Enter next line (empty line to quit):\n";
cin.get(input, ArSize);
}
cout << "Bye\n";
return 0;
}
void strcount(const char * str)
{
using namespace std;
static int total = 0;
int count = 0;
// static local variable
// automatic local variable
cout << "\"" << str <<"\" contains ";
while (*str++)
// go to end of string
count++;
total += count;
cout << count << " characters\n";
cout << total << " characters total\n";
*/


#include <iostream>
#include<string>

const int ArSize = 10;
// function prototype
using namespace std;

void strcount(string);

int main()
{  
    string input;

    cout << "Enter a line:";
    while(getline(cin,input) && !(input.empty()))
    {
        {
            strcount(input);
            cout << "Enter next line (empty line to quit):\n";
        }
    }
    cout << "Bye\n";
    return 0;
}

void strcount(string str)
{
    static int total = 0;
    int count = 0;

    cout << "\"" << str <<"\" contains ";
    while(str[count] != '\0')
    {

        count++;
    }

    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}



