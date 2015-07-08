// =====================================================================================
// 
//       Filename:  Ex04.h
// 
//    Description:  
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 02:44:50  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  wengsht (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  
// 
// =====================================================================================
#ifndef _AUTOGUARD_Sales_H_
#define _AUTOGUARD_Sales_H_
namespace SALES
{

    class Sales 
    {
        public:
            ~Sales();
            Sales();
            Sales(const double ar[], int n);
            void setSales();
            void showSales() const;
            
        private:
            static const int QUARTERS = 4;
            double sales[QUARTERS];
            double average;
            double max;
            double min;
    };


}

#endif

