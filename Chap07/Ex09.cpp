// =====================================================================================
// 
//       Filename:  Ex09.cpp
// 
//    Description:  Exercise 9 of Chapter 7 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 24 June 2015 11:03:09  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/*This exercise provides practice in writing functions dealing with arrays and struc-
 * tures.The following is a program skeleton. Complete it by providing the described
 * functions:*/

#include <iostream>
#include<stdio.h>
#include<string.h>
#include<sstream>

using namespace std;

const int SLEN = 30;

struct student 
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n)
{
    int size = 0;


    while(size < n)
    {
        cout<<"Enter full name:";
        cin.getline(pa[size].fullname,SLEN);

        if(strlen(pa[size].fullname) == 0)
        {
            break;
        }

        cout<<"Enter hobby:";
        cin.getline(pa[size].hobby,SLEN);
        cout<<"Enter ooplevel(integer):";
        cin>>pa[size].ooplevel;
        cin.get();

        size++;
    }

    return size;
}
// display1() takes a student structure as an argument
// and displays its contents
void display1(student st)
{
    cout<<"Full Name:"<<st.fullname<<endl;
    cout<<"Hobby: "<<st.hobby<<endl;
    cout<<"OOP LEVEL: "<<st.ooplevel<<endl;
}
// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student * ps)
{
    cout<<"Full Name:"<<ps->fullname<<endl;
    cout<<"Hobby: "<<ps->hobby<<endl;
    cout<<"OOP LEVEL: "<<ps->ooplevel<<endl;;
}
// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cout<<"Full Name:"<<pa[i].fullname<<endl;
        cout<<"Hobby: "<<pa[i].hobby<<endl;
        cout<<"OOP LEVEL: "<<pa[i].ooplevel<<endl;
    }
}


int main()
{
    cout << "Enter class size:";
    int class_size;
    cin >> class_size;

    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);

    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }

    display3(ptr_stu, entered);

    delete [] ptr_stu;

    cout<<"Done"<<endl;
    return 0;
}


