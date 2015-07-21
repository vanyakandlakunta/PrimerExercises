// =====================================================================================
// 
//       Filename:  Ex01_main.cpp
// 
//    Description:  Main file for Ex01
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 05:32:03  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* Modify Listing 11.15 so that it writes the successive locations of the random walker
 * into a file. Label each position with the step number.Also have the program write
 * the initial conditions (target distance and step size) and the summarized results to
 * the file.The file contents might look like this:
 * Target Distance: 100, Step Size: 20
 * 0: (x,y) = (0, 0)
 * 1: (x,y) = (-11.4715, 16.383)
 * 2: (x,y) = (-8.68807, -3.42232)
 * ...
 * 26: (x,y) = (42.2919, -78.2594)
 * 27: (x,y) = (58.6749, -89.7309)
 * After 27 steps, the subject has the following location:
 * (x,y) = (58.6749, -89.7309)
 * or
 * (m,a) = (107.212, -56.8194)
 * Average outward distance per step = 3.97081*/
#include <iostream>
#include <cstdlib>
#include"Ex01.h"
#include <ctime>
#include<fstream>

using namespace std;
using VECTOR::Vector;

int main()
{
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    
    ofstream fout;
    
    fout.open("Ex01.txt");
    
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        fout<<"Target Distance: "<<target<<", ";
        cout << "Enter step length: ";
        if (!(cin >> dstep))
        {
            break;
        }
        fout<<"Step Size: "<<dstep<<endl;
        while (result.magval() < target)
        {
            fout<<steps<<": "<<result<<endl;
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        fout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";

        fout << result << endl;
        cout << result << endl;

        result.polar_mode();

        cout << " or\n" << result << endl;
        fout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        fout << "Average outward distance per step = "
            << result.magval()/steps << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }

    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;


    return 0;
}



