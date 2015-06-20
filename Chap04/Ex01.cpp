//
//
//
//
//  The age should have two characters. so you need to use cin.getline(age, 3). 
//
//  and you should declare 
//        
//         char age[3];
//
//  C++ Reference:
//  http://www.cplusplus.com/reference/istream/istream/getline/
//  
//  n parameter:
//  Maximum number of characters to write to s (including the terminating null character).
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
// =====================================================================================
// 
//       Filename:  Ex01.cpp
// 
//    Description:  Exercise 1 of Chapter 4 CPP Primer
// 
//        Version:  0.01
//        Created:  Friday 19 June 2015 12:33:46  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================


/* Write a C++ program that requests and displays information as shown in the fol-
 * lowing example of output:
 * What is your first name? Betty Sue
 * What is your last name? Yewe
 * What letter grade do you deserve? B
 * What is your age? 22
 * Name: Yewe, Betty Sue
 * Grade: C
 * Age: 22
Note that the program should be able to accept first names that comprise more
than one word.Also note that the program adjusts the grade downward—that is, up
one letter.Assume that the user requests an A, a B, or a C so that you don’t have to
worry about the gap between a D and an F.*/

#include<iostream>
#include<stdio.h>

int main()
{
    char firstName [15], lastName[10],expectedGrade,age[2];
    enum grade { A, B, C, D, E, F};
    int givenGradeInt;
    grade givenGrade;
    
    printf("What is your first name?");
    std::cin.getline(firstName,15);
    printf("What is your last name?");
    std::cin.getline(lastName,10);
    printf("What letter grade do you deserve?");
    scanf("%c",&expectedGrade);
    std::cin.get();
    printf("What is your age?");
    std::cin.getline(age,2);
    
    givenGradeInt = expectedGrade + 1; //converting the grade to it's int value and incrementing to get next grade
    givenGrade = grade(givenGradeInt); //using the new int value to get the actual grade from list of values in enum
    
    printf("Name: %s , %s\n",lastName,firstName);
    printf("Grade: %c\n",givenGrade);
    printf("Age: %s %d\n",age);


    return 0;
    
}

