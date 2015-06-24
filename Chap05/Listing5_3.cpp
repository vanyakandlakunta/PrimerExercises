// =====================================================================================
// 
//       Filename:  Listing5_3.cpp
// 
//    Description:  Listing 5.3 of Chapter 5 CPP Primer
// 
//        Version:  0.01
//        Created:  Saturday 20 June 2015 07:19:51  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

//express values of expressions
 
#include<iostream>

int main()
{
        using namespace std;
        int x;
        
        cout<<"The expression x = 100 has the value:";
        cout<<(x= 100)<<endl;
        cout<<"Now x = "<<x<<endl;
        cout<<"The expression x <3 has the value:";
        cout<<(x<3)<<endl;
        cout<<"The expression x > 3 has the value:";
        cout<<(x>3)<<endl;
        cout.setf(ios_base::boolalpha);
        cout<<"The expression x <3 has the value:";
        cout<<(x<3)<<endl;
        cout<<"The expression x > 3 has the value:";
        cout<<(x>3)<<endl;
        return 0;
}

