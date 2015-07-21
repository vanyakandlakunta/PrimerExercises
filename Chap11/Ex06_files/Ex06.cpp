// =====================================================================================
// 
//       Filename:  Ex06.cpp
// 
//    Description:  Class definition for Ex06 Chapter 11 CPP Primer
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 01:50:55  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

#include <iostream>
#include "Ex06.h"
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

bool Stonewt::operator>=(Stonewt &s)
{
    if(pounds  >= s.pounds)
        return true;
    else
        return false;
}
bool Stonewt::operator==(Stonewt &s)
{
    if(pounds == s.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator<=(Stonewt &s)
{
    if(pounds <=  s.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator!=(Stonewt &s)
{
    if(pounds  != s.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator>(Stonewt &s)
{
    if(pounds  > s.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator<(Stonewt &s)
{
    if(pounds  <  s.pounds)
        return true;
    else
        return false;
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

