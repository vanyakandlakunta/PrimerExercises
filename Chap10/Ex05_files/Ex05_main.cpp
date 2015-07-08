// =====================================================================================
// 
//       Filename:  Ex05_main.cpp
// 
//    Description:  main file for Exercise 5 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 11:49:29  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================
/* main file for Exercise 5 */

#include<iostream>
#include<string.h>
#include<cctype>
#include"Ex05.h"

using namespace std;

int main()
{
    Stack st; // create an empty stack
    char ch;
    Item i;
    
    cout << "Please enter A to add a purchase order,\n"<< "P to process a PO, or Q to quit.\n";

    while (cin >> ch && toupper(ch) != 'Q')
    {

        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':
                cout<<"Enter customer name: ";
                cin.getline(i.fullname,35);
                cout << "Enter a payment to add: ";
                cin >> i.payment;
                cin.get();
                if (st.isfull())
                    cout << "stack already full\n";
                else
                    st.push(i);
                break;

            case 'p':
            case 'P': 
                if (st.isempty())
                    cout << "stack already empty\n";
                else 
                {
                    st.pop(i);
                }
                break;

            default:   //do nothing
                break;
        }
        cout << "Please enter A to add a purchase order,\n"<< "P to process a PO, or Q to quit.\n";
    }

    cout << "Bye\n";

    return 0;
}


