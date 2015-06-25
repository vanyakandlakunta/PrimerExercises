// IMPORTANT: 
// Your usages on pointers are still a little messy. Check the three REVIEW I commented in 
// the code. 
// (search "REVIEW")
// =====================================================================================
// 
//       Filename:  Ex07.cpp
// 
//    Description:  Exercise 7 of Chapter 7 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 24 June 2015 09:41:24  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================
/* 7. Redo Listing 7.7, modifying the three array-handling functions to each use two
 * pointer parameters to represent a range.The fill_array() function, instead of
 * returning the actual number of items read, should return a pointer to the location
 * after the last location filled; the other functions can use this pointer as the second
 * argument to identify the end of the data.*/
#include <iostream>

using namespace std;

const int Max = 5;

double* fill_array(double ar[], int limit)
{
    double temp;
    int i;
    
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
            // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
        // signal to terminate
    }
    // REVIEW 1: here should be &(ar[i]) , think about why
    return (&ar[i+1]);
}
// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[],double*start, double* end)
{
    int i = 0;
    double *p =start;
    
    // REVIEW 2: why do you compare the value of the pointer 
    // to judge if the pointers are the same??
    // if should be (p != end)
    //
    // Think about it, and ping me 
    //
    while((*p)!=(*end))
    {
        cout<<"Property #"<<(i+1)<<":$";
        cout<<(*p)<<endl;
        p++;
        i++;
    }


}
// multiplies each element of ar[] by r
void revalue(double r, double ar[],double* start,double* end)
{
    double *p = start;

    while ((*p) != (*end))
    {
        (*p) *=r;
        p++;
    }
}
int main()
{
    double properties[Max],factor;
    double* end = fill_array(properties, Max);
    // REVIEW 3: start will be properties only
    double* start = end - (Max + 1);

    show_array(properties, start,end);

    cout << "Enter revaluation factor: ";

    while (!(cin >> factor))
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "Bad input; Please enter a number: ";
    }

    revalue(factor, properties, start,end);
    show_array(properties, start,end);

    cout << "Done.\n";
    cin.get();

    return 0;
}
