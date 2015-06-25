// Excellent work. 
//
// If you really understand function ponter. You are much better than 
// other starters.
//
// =====================================================================================
// 
//       Filename:  Ex10.cpp
// 
//    Description:  Exercise 10 of Chapter 7 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 24 June 2015 11:29:34  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 10. Design a function calculate() that takes two type double values and a pointer to
 * a function that takes two double arguments and returns a double .The
 * calculate() function should also be type double , and it should return the value
 * that the pointed-to function calculates, using the double arguments to
 * calculate() . For example, suppose you have this definition for the add()
 * function:
 * double add(double x, double y)
 * {
 * return x + y;
 * }
 * Then, the function call in the following would cause calculate() to pass the val-
 * ues 2.5 and 10.4 to the add() function and then return the add() return value
 * ( 12.9 ):
 * double q = calculate(2.5, 10.4, add);
 * Use these functions and at least one additional function in the add() mold in a
 * program.The program should use a loop that allows the user to enter pairs of num-
 * bers. For each pair, use calculate() to invoke add() and at least one other func-
 * tion. If you are feeling adventurous, try creating an array of pointers to add() -style
 * functions and use a loop to successively apply calculate() to a series of functions
 * by using these pointers. Hint: Here’s how to declare such an array of three pointers:
 * double (*pf[3])(double, double);
 * You can initialize such an array by using the usual array initialization syntax and
 * function names as addresses.
 * }*/


#include<iostream>

using namespace std;

double calculate(double , double , double (*pf1)(double,double),double (*pf2)( double,double ));

double add(double x, double y)
{
    return x + y;
}

double multiply(double p, double q)
{
    return (p * q);
}

double calculate(double a, double b, double (*pf1)(double,double), double (*pf2)(double,double))
{
    double sum;
    sum = a + b + (*pf1)(a,b) + (*pf2)(a,b);
    return sum;
}
int main()
{
    
    double q = calculate(1, 2, add,multiply);
    cout<<"Sum is :"<<q<<endl;
    
    return 0;
}
