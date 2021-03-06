// REVIEW: 
//
// use a static variable inside the funciton `Display` is better solution.
//
// And you don't need to write too funciton.
// write a function like:
//
// void Display(char word[], int num = 0) {
//     static int cnt = 0;
//
//     for(int i = 0;i < cnt;i++) {
//          printf("%s\n", word);
//     }
//
//     cnt ++;
// }
//
// Only need one function here.
//
// =====================================================================================
// 
//       Filename:  Ex01.cpp
// 
//    Description:  Exercise 1 of Chapter 8 CPP Primer
// 
//        Version:  0.01
//        Created:  Sunday 28 June 2015 03:28:43  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* . Write a function that normally takes one argument, the address of a string, and
 * prints that string once. However, if a second, type int , argument is provided and is
 * nonzero, the function should print the string a number of times equal to the num-
 * ber of times that function has been called at that point. (Note that the number of
 * times the string is printed is not equal to the value of the second argument; it is
 * equal to the number of times the function has been called.) Yes, this is a silly func-
 * tion, but it makes you use some of the techniques discussed in this chapter. Use the
 * function in a simple program that demonstrates how the function works.*/

#include<iostream>
#include<stdio.h>

using namespace std;

void Display(char word[],int num = 0)
{
   static int count = 1;
    
    printf("Function with integer called.\n");

    for (int i = 0; i < count; i++)
    {
        printf("%s\n",word);
       
    }   

    count++;
}

/*(inline void Display(char word[])
{
    printf("The string is: ");
    printf(word);
    printf("\n");
}*/

int main()
{
    int num = 1;
    char word[6] = "Hello";

    Display(word);
    Display(word,num);
    Display(word,num);
    Display(word,num);
    Display(word,num);
    Display(word,num);

    return 0;

}
