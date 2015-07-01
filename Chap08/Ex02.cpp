// =====================================================================================
// 
//       Filename:  Ex02.cpp
// 
//    Description:  Exercise 2 of Chapter 8 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 01 July 2015 01:28:52  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 2. The CandyBar structure contains three members.The first member holds the brand
 * name of a candy bar.The second member holds the weight (which may have a frac-
 * tional part) of the candy bar, and the third member holds the number of calories
 * (an integer value) in the candy bar.Write a program that uses a function that takes
 * as arguments a reference to CandyBar , a pointer-to- char , a double , and an int and
 * uses the last three values to set the corresponding members of the structure.The last
 * three arguments should have default values of “Millennium Munch,” 2.85, and 350.
 * Also the program should use a function that takes a reference to a CandyBar as an
 * argument and displays the contents of the structure. Use const where appropriate.*/

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cctype>

using namespace std;

struct CandyBar
{
    char name[20];
    double weight;
    int numCals;
};

void Assign(CandyBar *type1, char name[], double &weight, int &numCals)
{
    strcpy(type1->name,name);
    type1->weight = weight;
    type1->numCals = numCals;

}

void Display(const CandyBar &type1)
{

    printf("Name = %s\n", type1.name);
    printf("Weight = %.3f\n",type1.weight);
    printf("Number of Calories = %d\n",type1.numCals);

}
int main()
{
    CandyBar type1;
    char name[20] = "Millennium Munch";
    double weight = 2.85;
    int numCals = 350;

    Assign(&type1,name,weight,numCals);
    Display(type1);

    return 0;
}

