// =====================================================================================
// 
//       Filename:  Ex04.cpp
// 
//    Description:  Class definition for Time Class (Listing 11.11)
// 
//        Version:  0.01
//        Created:  Monday 20 July 2015 10:40:30  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

#include "Ex04.h"

Time::~Time()
{
    //nothing
}

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m )
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time & t,const Time &t1) 
{
    Time sum;
    sum.minutes = t1.minutes + t.minutes;
    sum.hours = t1.hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time operator-(const Time & t,const Time &t1) 
{
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = t1.minutes + 60 * t1.hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time operator*(const Time &t, double mult) 
{
    Time result;
    long totalminutes = t.hours * mult * 60 + t.minutes * mult;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}
