// =====================================================================================
// 
//       Filename:  Ex08.cpp
// 
//    Description:  Exercise 8 of Chapter 7 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 24 June 2015 10:48:56  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*8. Redo Listing 7.15 without using the array class. Do two versions:
 * a. Use an ordinary array of const char * for the strings representing the sea-
 * son names, and use an ordinary array of double for the expenses.
 * b. Use an ordinary array of const char * for the strings representing the sea-
 * son names, and use a structure whose sole member is an ordinary array of
 * double for the expenses. (This design is similar to the basic design of the
 * array class.)*/

#include<iostream>
#include <array>
#include <string>

const int Seasons = 4;
const char* Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

using namespace std;

void fill(double pa[Seasons]);
void show(const double da[Seasons]);

int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}
void fill(double pa[])
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}
void show(const double da[])
{
    double total = 0.0;
    
    cout << "\nEXPENSES\n";

    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

