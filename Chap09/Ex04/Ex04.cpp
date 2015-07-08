// =====================================================================================
// 
//       Filename:  Ex04_func.cpp
// 
//    Description:  Function definitions for the prototypes Exercise 4 of Chapter 9 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 06 July 2015 03:14:32  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* a source code file that extends the namespace to provide definitions for
 * the three prototyped functions.
*/


#include<iostream>
#include<string.h>
#include"Ex04.h"
#include<iomanip>

using namespace std;
namespace SALES
{

    void setSales(Sales & s, const double ar[], int n)
    {
        int i,j;
        double sum = 0.0;
        s.min = 100000;
        s.max = 0;
  
        for (i = 0; i < n; i++)
        {
            s.sales[i] = ar[i];
        }
        if(n < QUARTERS)
        {
            for (j = n; j < QUARTERS; j++)
            {
                s.sales[j] = 0;
            }
        }
        else
        {
            //do nothing
        }
        s.min = s.max = s.sales[0];
        //calculating minimum      
        for( i = 0;i < QUARTERS; i++)
        {
            if(s.sales[i] < s.min)
            {
                s.min = s.sales[i];
            }
            else
            {
                //do nothing
            }

            //calculating sum for average
            sum+=s.sales[i];

            //calculating maximum
            if(s.sales[i] > s.max)
            {
                s.max = s.sales[i];
            }
            else
            {
                //do nothing
            }
        }

        //calculating average
        s.average = (sum/SALES::QUARTERS);

    }

    void setSales(Sales & s)
    {
        int i;
        double sum = 0;
        s.max = 100000;
        s.min = 0;

        for(i = 0; i < QUARTERS; i++)
        {
            cout<<"Enter sales for quarter "<<i<<": ";
            cin>>s.sales[i];      
        }    

        s.min = s.max = s.sales[0];
        //calculating minimum      
        for( i = 0;i < QUARTERS; i++)
        {
            if(s.sales[i] < s.min)
            {
                s.min = s.sales[i];
            }
            else
            {
                //do nothing
            }

            //calculating sum for average
            sum+=s.sales[i];

            //calculating maximum
            if(s.sales[i] > s.max)
            {
                s.max = s.sales[i];
            }
            else
            {
                //do nothing
            }
        }

        //calculating average
        s.average = (sum/SALES::QUARTERS);

    }

    void showSales(const Sales & s)
    {
    int i;

    cout<<"Sales for the 4 quarters are: "<<endl;

    for (i = 0;i < QUARTERS; i++ )
    {
        cout<<s.sales[i]<<endl;  
    }


    cout<<"Maximum sales: "<<setprecision(3)<<s.max<<endl;
    cout<<"Minimum sales: "<<setprecision(3)<<s.min<<endl;
    cout<<"Average sales: "<<setprecision(3)<<s.average<<endl;

}
}
