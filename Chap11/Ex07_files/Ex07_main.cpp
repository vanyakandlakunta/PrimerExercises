// REVIEW: 
// 1. You didn't "return os" and "return is"! You will get "seg fault if you don't return it 
// std::ostream& operator<<(std::ostream &os,Complex &c)
// {
//     os << "("<<c.real<<","<<c.imag<<"i)"<<endl;
// }
// 
// std::istream& operator>>(std::istream &is, Complex &c)
// {
//     cout<<"Real:";
//     is>>c.real;
//     cout<<"Imaginary:";
//     is>>c.imag;
// }
// 
// This error means you still haven't formed good habits when you code, just like you forget "delete", forget "close" file.
// Be careful
//
// 2.  Other parts are good
// =====================================================================================
// 
//       Filename:  Ex07_main.cpp
// 
//    Description:  Main function for Ex05 Chapter 11 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 11:23:34  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*  A Complex number has two parts: a real part and an imaginary part. One way to
 *  write an imaginary number is this: (3.0, 4.0). Here 3.0 is the real part and 4.0 is
 *  the imaginary part. Suppose a = (A,Bi) and c = (C,Di). Here are some Complex
 *  operations:
 *  n Addition: a + c = (A + C, (B + D)i)
 *  n Subtraction: a - c = (A - C, (B - D)i)
 *  n Multiplication: a × c = (A × C - B×D, (A×D + B×C)i)
 *  n Multiplication: (x a real number): x × c = (x×C,x×Di)
 *  n Conjugation: ~a = (A, - Bi)
 *  Define a Complex class so that the following program can use it with correct
 *  results:
 *  #include <iostream>
 *  using namespace std;
 *  #include "Complex0.h" // to avoid confusion with Complex.h
 *  int main()
 *  {
 *  Complex a(3.0, 4.0);
 / initialize to (3,4i)Programming Exercises
Complex c;
cout << "Enter a Complex number (q to quit):\n";
while (cin >> c)
{
    cout << "c is " << c << '\n';
    cout << "Complex conjugate is " << ~c << '\n';
    cout << "a is " << a << '\n";
    cout << "a + c is " << a + c << '\n';
    cout << "a - c is " << a - c << '\n';
    cout << "a * c is " << a * c << '\n';
    cout << "2 * c is " << 2 * c << '\n';
    cout << "Enter a Complex number (q to quit):\n";
}
cout << "Done!\n";
return 0;
}
Note that you have to overload the << and >> perators. Standard C++ already has
Complex support—rather more extensive than in this example—in a Complex
header file, so use Complex0.h to avoid conflicts. Use const whenever warranted.
Here is a sample run of the program:
Enter a Complex number (q to quit):
    real: 10
    imaginary: 12
    c is (10,12i)
    Complex conjugate is (10,-12i)
    a is (3,4i)
    a + c is (13,16i)
    a - c is (-7,-8i)
    a * c is (-18,76i)
    2 * c is (20,24i)
    Enter a Complex number (q to quit):
        real: q
        Done!
        Note that cin through overloading, now prompts for real and imaginary
        parts.*/



#include <iostream>
#include "Ex07.h"

using namespace std;

int main()
{
    Complex a(3.0, 4.0);
    Complex c;
    Complex temp;
    
    cout << "Enter a Complex number (q to quit):\n";

    while (cin>>c)
    {
        cout << "c is " << c << endl;
        temp = ~c;
        cout << "Complex conjugate is " <<temp << endl;
        cout << "a is " << a << endl;
        temp = a+c;
        cout << "a + c is " << temp << endl;
        temp = a-c;
        cout << "a - c is " << temp<< endl;
        temp = a*c;
        cout << "a * c is " << temp << endl;
        temp = c*2;
        cout << "c * 2 is " << temp << endl;
        cout << "Enter a Complex number (q to quit):\n";
    }
    
    cout << "Done!\n";

    return 0;
}
