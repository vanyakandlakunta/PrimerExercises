// before you delete a pointer, it is better to check it you have allocated/deleted it.
// (you need to do it when your program becomes large)
//
// if(beany.str != NULL) {
//    delete [] beany.str;
//    beany.str = NULL;
// }
//
// init beany.str as NULL. so that this delete will work well
//
// =====================================================================================
// 
//       Filename:  Ex04.cpp
// 
//    Description:  Exercise 4 of Chapter 8 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 01 July 2015 03:46:43  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* 4. The following is a program skeleton:
 * #include <iostream>
 * using namespace std;
 * #include <cstring>
 * struct stringy {
 * char * str;
 * int ct;
 * };
  for strlen(), strcpy()
points to a string
 length of string (not counting '\0')
// prototypes for set(), show(), and show() go here
int main()
 {
 stringy beany;
 char testing[] = "Reality isn't what it used to be.";
 set(beany, testing);
 // first argument is a reference,
 // allocates space to hold copy of testing,
 // sets str member of beany to point to the
 // new block, copies testing to new block,
 // and sets ct member of beany
show(beany);
show(beany, 2);
 testing[0] = 'D';
 testing[1] = 'u';
 show(testing);
 show(testing, 3);
 show("Done!");
 return 0;
 // prints member string once
 // prints member string twice
 // prints testing string once
 // prints testing string thrice
 }
 Complete this skeleton by providing the described functions and prototypes. Note
 that there should be two show() functions, each using default arguments. Use
 const arguments when appropriate. Note that set() should use new to allocate
 sufficient space to hold the designated string.The techniques used here are similar
 to those used in designing and implementing classes. (You might have to alter the
 header filenames and delete the using directive, depending on your compiler.)"
 }'
 }*/

#include <iostream>
#include <cstring>
#include<strings.h>
#include<stdio.h>

using namespace std;

struct stringy 
{
    char * str;
    int ct;
};

void set(stringy&, char[]);
void show(const stringy&);
void show(const stringy&, int);
void show(const char[]);
void show(const char[], int);

void show(const char word[])
{
    cout<<word<<endl;
}

void show(const char word[], int num)
{
    int i;

    for (i = 0; i < num; i++ )
    {
        cout<<word<<endl;
    }
}

void show(const stringy& word, int num)
{
    int i;
    for (i = 0; i < num; i++ )
    {
        cout<<word.str<<endl;
    }
}

void show(const stringy& word)
{
    cout<<word.str;
}

void set(stringy& word1, char word2[])
{
    int len = strlen(word2);
    char* copyWord = new char[len];

    word1.ct = (len-1);
    word1.str = copyWord;
    strcpy(word1.str,word2);

    cout<<word1.str<<endl;
}


int main()
{
    stringy beany;

    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);

    show(beany);
    show(beany, 2);

    testing[0] = 'D';
    testing[1] = 'u';

    show(testing);
    show(testing, 3);

    show("Done!");

    if(beany.str != NULL)
    {
        delete [] beany.str;
        beany.str = NULL;
    }
    return 0;
}

