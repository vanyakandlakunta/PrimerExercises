// =====================================================================================
// 
//       Filename:  Listing5_19.cpp
// 
//    Description:  Listing 5.19--reading chars with cin.get()
// 
//        Version:  0.01
//        Created:  Sunday 21 June 2015 09:59:10  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon UNiversity
// =====================================================================================

#include<iostream>
#include<stdio.h>
int main(void)
{
    using namespace std;
int ch;
    int count = 0;
    while((ch = cin.get())!= EOF)
    {
        cout.put(ch);
        ++count;
    }
    cout<<endl<<"characters read: "<<count<<endl;
    return 0;
}

