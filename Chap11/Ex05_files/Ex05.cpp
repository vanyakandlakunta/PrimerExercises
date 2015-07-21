// =====================================================================================
// 
//       Filename:  Ex05.cpp
// 
//    Description:  Class definition for Ex05 Chapter 11 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 11:50:55  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

#include <iostream>
#include "Ex05.h"
using namespace std;

Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = IPOUND;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn +lbs;
    mode = STONE;
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
    mode = IPOUND;
}

Stonewt::~Stonewt()
{
    //do nothing
}

Stonewt Stonewt::operator+(Stonewt &s)
{
    Stonewt sum;
    sum.pounds = pounds + s.pounds;
    return sum;
}

Stonewt Stonewt::operator-(Stonewt &s)
{
    Stonewt diff;
    diff.pounds = pounds - s.pounds;
    return diff;
}

Stonewt Stonewt::operator*(double num) const
{
    Stonewt prod;
    prod.pounds = pounds * num;
    return prod;
}

std::ostream& operator<<(std::ostream &os,Stonewt &s)
{

    if(s.mode == Stonewt::IPOUND)
    {
        os << s.pounds << " pounds\n";
    }
    else if(s.mode == Stonewt::STONE)
    {
        os << s.stone << " stone, " << s.pds_left << " pounds\n";
    }
    else
    {
        os<<"ERROR!"<<endl;
        return os;

    }

}

