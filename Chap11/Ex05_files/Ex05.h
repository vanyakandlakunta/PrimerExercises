// =====================================================================================
// 
//       Filename:  Ex05.h
// 
//    Description:  Header file for stone weight
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 11:25:16  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// 
// =====================================================================================
#ifndef _AUTOGUARD_Stonewt_H_
#define _AUTOGUARD_Stonewt_H_

class Stonewt {
    public:
        enum Form{IPOUND,STONE};
    private:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
        Form mode;

    public:
        Stonewt();
        Stonewt(double lbs);
        Stonewt(int stn,double lbs);
        ~Stonewt();
        Stonewt operator+(Stonewt &s1);
        Stonewt operator-(Stonewt &s1);
        Stonewt operator*(double num) const;

        friend Stonewt operator*(double num, Stonewt &s2)
        {
            return s2 * num;
        }

        friend std::ostream& operator<<(std::ostream &os,Stonewt &st);
};

#endif

