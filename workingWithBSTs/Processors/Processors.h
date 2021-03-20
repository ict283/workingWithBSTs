// For review purposes only! Does not represent the actual solution!

/* global methods */

#ifndef Processors_h
#define Processors_h

#include "Dependencies.h"

/* headers */

template <class Type>
void print (Type &item);

template <class Type>
void increment (Type &item);

/* implementation */

template <class Type>
void print (Type &item)
{
    cout<<item<<endl;
}

template <class Type>
void increment (Type &item)
{
    item++;
}

#endif /* Processors_h */
