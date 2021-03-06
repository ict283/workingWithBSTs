// For review purposes only! Does not represent the actual solution!

#include "Date.h"

Date::Date()
{
        day   = 0;
        month = 0;
        year  = 0;
}

Date:: Date(int d, int m, int y)
{
        day    = d;
        month  = m;
        year   = y;
}

Date::~Date()
{

}

int Date::getDay() const
{
        return day;
}

int Date::getMonth() const
{
        return month;
}

int Date::getYear() const
{
        return year;

}

ostream& operator << (ostream &os, const Date &d)
{
        os<<d.day<<"-"<<d.month<<"-"<<d.year<<endl;

        return os;
}
