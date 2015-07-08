// =====================================================================================
// 
//       Filename:  Ex07.h
// 
//    Description:  header file for Exercise 7 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 02:16:01  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// 
// =====================================================================================
#ifndef _AUTOGUARD_Plorg_H_
#define _AUTOGUARD_Plorg_H_

class Plorg {
    public:
        Plorg(char[]);
        void ChangeCI(int);
        void Report() const;
        ~Plorg();
    private:
        char name[20];
        int CI;
};

#endif

