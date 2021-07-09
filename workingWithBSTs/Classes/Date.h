// For review purposes only! Does not represent the actual solution!

#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{

friend ostream& operator << (ostream &os, const Date &D);

public:

Date();

Date(int d, int m, int y);

~Date();

int getDay() const;

int getMonth() const;

int getYear() const;
    
bool operator < (const Date &d) const;

bool operator == (const Date &d) const;


private:

int day;

int month;

int year;

};

#endif /* Date_h */
