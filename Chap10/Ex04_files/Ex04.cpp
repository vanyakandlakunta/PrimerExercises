// =====================================================================================
// 
//       Filename:  Ex04.cpp
// 
//    Description:  Function definitions file for Exercise 4 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 02:48:47  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* Definition of function prototypes */

#include"Ex04.h"
#include<iostream>
#include<iomanip>

using namespace std;

namespace SALES
{

    Sales::Sales()
    {

    }

    Sales::Sales(const double ar[],int n)
    {
        int i,j;
        double sum = 0.0;
        min = 100000;
        max = 0;

        for (i = 0; i < n; i++)
        {
            sales[i] = ar[i];
        }
        if(n < QUARTERS)
        {
            for (j = n; j < QUARTERS; j++)
            {
                sales[j] = 0;
            }
        }
        else
        {
            //do nothing
        }
        min =max = sales[0];
        //calculating minimum      
        for( i = 0;i < QUARTERS; i++)
        {
            if(sales[i] < sales[i+1])
            {                                                                                                                               
                if(sales[i] < min)
                {
                    min = sales[i];

                }
                else{}

                if(sales[i+1] > max)
                {
                    max = sales[i+1];
                }
                else{}

            }
            else
            {
                if(sales[i] > max)
                {
                    max = sales[i];
                }
                else{}

                if(sales[i+1] < min)
                {
                    min  = sales[i+1];
                }
                else{}

            }
            //calculating sum for average
            sum+=sales[i];

            //calculating average
            average = (sum/QUARTERS);

        }

    }

    Sales::~Sales()
    {
        //do nothing    
    }

    void Sales::setSales()
    {
        int i;
        double sum = 0;
        max = 100000;
        min = 0;

        for(i = 0; i < QUARTERS; i++)
        {
            cout<<"Enter sales for quarter "<<i<<": ";
            cin>>sales[i];      
        }    

        Sales s(sales,QUARTERS);
        *this = s;

    }

    void Sales::showSales() const
    {
        int i;

        cout<<"Sales for the 4 quarters are: "<<endl;

        for (i = 0;i < QUARTERS; i++ )
        {
            cout<<sales[i]<<endl;  
        }

        cout<<"Maximum sales: "<<setprecision(3)<<max<<endl;
        cout<<"Minimum sales: "<<setprecision(3)<<min<<endl;
        cout<<"Average sales: "<<setprecision(3)<<average<<endl;

    }
}                                               

