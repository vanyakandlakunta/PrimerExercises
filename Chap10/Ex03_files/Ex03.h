// =====================================================================================
// 
//       Filename:  Ex03.h
// 
//    Description:  Header file for Ex03 of Chapter 10 CPP Primer
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 01:41:04  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// 
// =====================================================================================
#ifndef _AUTOGUARD_golf_H_
#define _AUTOGUARD_golf_H_


class golf {
    
    private:
        static const int Len = 40;
        char fullname[Len];
        int handicap;
        
    public:
        golf(const char *name = "Bob", int hc = 10);
        ~golf();
        int setgolf();
        void showgolf() const;
        void sethandicap(int hc);
};

#endif
