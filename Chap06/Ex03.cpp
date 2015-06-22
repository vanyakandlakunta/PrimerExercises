// =====================================================================================
// 
//       Filename:  Ex03.cpp
// 
//    Description:  Exercise 3 of Chapter 6 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 06:11:55  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 3. Write a precursor to a menu-driven program.The program should display a menu
 * offering four choices, each labeled with a letter. If the user responds with a letter
 * other than one of the four valid choices, the program should prompt the user to
 * enter a valid response until the user complies.Then the program should use a
 * switch to select a simple action based on the user’s selection.A program run could
 * look something like this:
 * Please enter
 * c) carnivore
 * t) tree
 * f
 * Please enter
 * Please enter
 * A maple is a
 * one of the following choices:
 * p) pianist
 * g) game
 * a c, p, t, or g: q
 * a c, p, t, or g: t
 * tree.
 * */

#include<iostream>

int main()
{
    using namespace std;
    char ch;
    int i = 1, y;

    cout<<"Please enter one of the following choices:"<<endl;
    cout<<"c) Carnivore \t p) Pianist"<<endl;
    cout<<"t) Tree \t g) Game"<<endl;
  
    while(i)
    {
    
        cin>>ch;
        switch(ch)
        {
            case 'c': cout<<"A lion is a carnivore"<<endl;
                      i=0;
                      break;
            case 'p':cout<<"A person who plays piano is a pianist"<<endl;
                     i=0;
                     break;
            case 't':cout<<"A maple is a tree"<<endl;
                     i=0;
                     break;
            case 'g':cout<<"Hide and Seek is a game"<<endl;          
                     i=0;
                     break;
            default: cout<<"Please enter one of the following: c,p,t or g";
                     break;
        }          
    }
    return 0;
    
}

