// It is good.
// =====================================================================================
// 
//       Filename:  Ex02.cpp
// 
//    Description:  Exercise 2 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 12:37:06  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================
/* 2. Here is a rather simple class definition:
 * class Person {
 * private:
 * static const LIMIT = 25;
 * string lname;
 *Person’s last name
char fname[LIMIT]; // Person’s first name
public:
Person() {lname = ""; fname[0] = ‘\0’; } // #1
Person(const string & ln, const char * fn = "Heyyou");
 the following methods display lname and fname
 void Show() const;
 // firstname lastname format
 void FormalShow() const; // lastname, firstname format
 };
 // #2
 (It uses both a string object and a character array so that you can compare how
 the two forms are used.) Write a program that completes the implementation by
 providing code for the undefined methods.The program in which you use the class
 should also use the three possible constructor calls (no arguments, one argument,
 and two arguments) and the two display methods. Here’s an example that uses the
 constructors and methods:
 Person one;
 Person two("Smythecraft");
 Person three("Dimwiddy", "Sam");
 one.Show();
 cout << endl;
 one.FormalShow();
 // etc. for two and three"*/
#include<string.h>
#include<iostream>
#include<stdio.h>

using namespace std;

class Person
{
    private:
        static const int LIMIT = 25;
        string lname;
        char fname[LIMIT];
        
    public:
        Person()
        {
            lname = "";
            fname[0] = '\0';
        }
        Person(const string &ln,const char *fn = "Heyyou");
        void Show() const;
        void FormalShow() const;            
        ~Person()
        {
            //do nothing
        }
};

Person::Person(const string &ln, const char *fn)
{
    lname = ln;
    strcpy(fname,fn);
}

void Person::Show() const
{
    printf("%s  ",fname);
    cout<<lname;
}

void Person::FormalShow() const
{
    cout<<lname;
    printf("  %s",fname);    
}

int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    one.Show();
    cout << endl;
    two.Show();
    cout<<endl;
    three.Show();
    cout<<endl;
    
    one.FormalShow();
    cout<<endl;
    two.FormalShow();
    cout<<endl;
    three.FormalShow();

    return 0;
}

