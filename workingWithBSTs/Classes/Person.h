// For review purposes only! Does not represent the actual solution!

#ifndef Person_h
#define Person_h

#include <iostream>
using namespace std;

class Person
{

friend ostream& operator << (ostream &os, const Person &p);

public:

Person();

Person(string fn, string ln);

~Person();

string getFirstName();

string getLastName();

private:

string firstName;

string lastName;

};

#endif /* Person_h */
