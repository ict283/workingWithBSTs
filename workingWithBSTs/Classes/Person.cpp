// For review purposes only! Does not represent the actual solution!

#include "Person.h"

Person::Person()
{
        firstName="";
        lastName="";
}

Person::Person(string fn, string ln)
{
        firstName=fn;
        lastName=ln;
}

Person::~Person()
{

}

string Person::getFirstName()
{
        return firstName;
}

string Person::getLastName()
{
        return lastName;
}

ostream& operator << (ostream &os, const Person &p)
{
        os<<p.firstName<<" "<<p.lastName<<endl;
        return os;
}
