// =====================================================================================
// 
//       Filename:  Ex04.cpp
// 
//    Description:  Exercise 4 of Chapter 6 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 22 June 2015 06:31:09  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* When you join the Benevolent Order of Programmers, you can be known at BOP
 * meetings by your real name, your job title, or your secret BOP name.Write a pro-
 * gram that can list members by real name, by job title, by secret name, or by a mem-
 * ber’s preference. Base the program on the following structure:
  Benevolent Order of Programmers name structure
struct bop {
    char fullname[strsize]; // real name
    char title[strsize];
    // job title
    // char bopname[strsize]; // secret BOP name
    // int preference;
    // // 0 = fullname, 1 = title, 2 = bopname
    // };
    // In the program, create a small array of such structures and initialize it to suitable
    // values. Have the program run a loop that lets the user select from different alterna-
    // tives:
    // a. display by name
    // c. display by bopname
    // q. quit
    // b. display by title
    // d. display by preference
    // 301302
    // Chapter 6 Branching Statements and Logical Operators
    // Note that “display by preference” does not mean display the preference member; it
    // means display the member corresponding to the preference number. For instance, if
    // preference is 1 , choice d would display the programmer’s job title.A sample run
    // may look something like the following:
    // Benevolent Order of Programmers Report
    // a. display by name
    // b. display by title
    // c. display by bopname d. display by preference
    // q. quit
    // Enter your choice: a
    // Wimp Macho
    // Raki Rhodes
    // Celia Laiter
    // Hoppy Hipman
    // Pat Hand
    // Next choice: d
    // Wimp Macho
    // Junior Programmer
    // MIPS
    // Analyst Trainee
    // LOOPY
    // Next choice: q
    // Bye!
}*/

#include<iostream>

const int NUM_PEOPLE = 3;
const int SIZE = 30;

using namespace std;

struct bop 
{
    char fullname[SIZE]; // real name
    char title[SIZE];    // job title
    char bopname[SIZE]; // secret BOP name
    int preference;    // // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
    
    char ch;
    int i = 1,choice,y;
    bop list[NUM_PEOPLE] = { 
        {"Wimp Macho", "Junior Programmer", "MIPS", 0},
        {"Tom","Analyst","Typi",1},
        {"Bill", "Senior Programmer", "Ace", 2}
    };
    
    cout<<"a. display by name\nc. display by bopname\nq. quit\nb. display by title\nd. display by preference";
    while(i)
    {    
      cout<<"Please select an alternative:"<<endl;
      cin>>ch;
      switch(ch)
      {
        case 'a': for (y = 0; y < NUM_PEOPLE; y++)
                  {
                     cout<<list[y].fullname<<endl;
                  }
                 
                  break;
                  
        case 'b': for (y = 0; y <NUM_PEOPLE; y++)
                  {
                      cout<<list[y].title<<endl;
                  }
                  break;
                  
        case 'c':for (y = 0; y <NUM_PEOPLE; y++)
                  {
                      cout<<list[y].bopname<<endl;
                  }
                 break;
                
        case 'd':for (y = 0; y <NUM_PEOPLE; y++)
                  {
                      choice = list[y].preference;
                      if(choice == 0)
                      {
                          cout<<list[y].fullname;
                      }
                      else if(choice == 1)
                      {
                         cout<<list[y].title;
                      }
                      else 
                      {
                          cout<<list[y].bopname;
                      }
                  }
                 break;
                 
        case 'q': cout<<"Bye!"<<endl;
                  i = 0;
                  break;
      }
    }


    return 0;
}
