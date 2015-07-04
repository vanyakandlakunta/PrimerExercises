// // REVIEW:
//
// template <typename T>
// int SumArray(T arr[], int n)
// {
//     int sum = 0;  <<<======        better to be "T sum=0"
//     
//     cout << "template A\n";
//     
//     for (int i = 0; i < n; i++)
//         sum+=arr[i];
//     
//     return sum;
// }
// =====================================================================================
// 
//       Filename:  Ex07.cpp
// 
//    Description:  Exercise 7 of Chapter 8 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 01 July 2015 06:07:16  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 7. Modify Listing 8.14 so that it uses two template functions called SumArray() to
 * return the sum of the array contents instead of displaying the contents.The pro-
 * gram now should report the total number of things and the sum of all the debts.
 *
 * Listing 8.14
 * tempover.cpp -- template overloading
#include <iostream>
template <typename T>
void ShowArray(T arr[], int n);
 template A
 template <typename T>
 // template B
 void ShowArray(T * arr[], int n);
 struct debts
 {
 char name[50];
 double amount;
 };
 int main()Function Templates
 {
 using namespace std;
 int things[6] = {13, 31, 103, 301, 310, 130};
 struct debts mr_E[3] =
 {
 {"Ima Wolfe", 2400.0},
 {"Ura Foxe", 1300.0},
 {"Iby Stout", 1800.0}
 };
 double * pd[3];
 // set pointers to the amount members of the structures in mr_E
 for (int i = 0; i < 3; i++)
 pd[i] = &mr_E[i].amount;
 cout << "Listing Mr. E's counts of things:\n";
 // things is an array of int
 ShowArray(things, 6); // uses template A
 cout << "Listing Mr. E's debts:\n";
 // pd is an array of pointers to double
 ShowArray(pd, 3);
 // uses template B (more specialized)
 return 0;
 }
 template <typename T>
 void ShowArray(T arr[], int n)
 {
 using namespace std;
 cout << "template A\n";
 for (int i = 0; i < n; i++)
 cout << arr[i] << ' ';
 cout << endl;
 }
 template <typename T>
 void ShowArray(T * arr[], int n)
 {
 using namespace std;
 cout << "template B\n";
 for (int i = 0; i < n; i++)
 cout << *arr[i] << ' ';
 cout << endl;
 }

 * */


#include <iostream>

template <typename T>
int SumArray(T arr[], int n); // template A

template <typename T> // template B
double SumArray(T * arr[], int n);
 
 struct debts
{
    char name[50];
    double amount;
};

using namespace std;

int main()
{
    int iSum;
    double dSum;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];   
    
    // set pointers to the amount members of the structures in mr_E    
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    cout << "Sum of Mr. E's counts of things: ";
    // things is an array of int
    iSum = SumArray(things, 6); // uses template A
    cout<<iSum<<endl;
    
    cout << "Sum of Mr. E's debts: ";
    // pd is an array of pointers to double
    dSum = SumArray(pd, 3);
    cout<<dSum<<endl;
    // uses template B (more specialized)
     
    return 0;
}

template <typename T>
int SumArray(T arr[], int n)
{
    int sum = 0;
    
    cout << "template A\n";
    
    for (int i = 0; i < n; i++)
        sum+=arr[i];
    
    return sum;
}

template <typename T>
double SumArray(T* arr[], int n)
{
    double sum = 0.0;

    cout << "template B\n";
    
    for (int i = 0; i < n; i++)
        sum = sum + *arr[i];
    
    return sum;
}
