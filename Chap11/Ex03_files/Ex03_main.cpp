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
/*  Modify Listing 11.15 so that instead of reporting the results of a single trial for a
 *  particular target/step combination, it reports the highest, lowest, and average num-
 *  ber of steps for N trials, where N is an integer entered by the user.*/


#include <cstdlib>
#include"Ex03.h"
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
    double stepsAvg = 0.0;
    double sumSteps = 0.0;
    double min = 100000, max = 0.0;
    int numTrials,countNum = 0;

    ofstream fout;

    fout.open("Ex01.txt");
    cout<<"Enter number of trials:";
    cin>>numTrials;
    while(numTrials)
    {
        cout << "Enter target distance: ";
        cin >> target;
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
            
            //calculating avg steps over n trials
            countNum++;
            sumSteps+= steps;
            
            //calculating max steps
            if(steps > max)
            {
                max = steps;
            }
            if(steps < min)
            {
                min = steps;
            }

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
        }
        
        numTrials--;
    }

    cout<<"Max steps:"<<max<<endl;
    cout<<"Min steps:"<<min<<endl;
    
    stepsAvg = (sumSteps / countNum);

    cout<<"Average number of steps for "<<countNum<< " trials is:"<<stepsAvg<<endl;
    
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;


    return 0;
}



