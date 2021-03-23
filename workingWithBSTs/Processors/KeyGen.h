// For review purposes only! Does not represent the actual solution!

/* global methods */

#ifndef KeyGen_h
#define KeyGen_h

/* header */

int personKeyGen(string fn, string ln); //simplistic keygen


/* implementation */

int personKeyGen (string fn, string ln)
{
        char c1 = fn.substr(0,1)[0];
        char c2 = fn.substr(1,2)[0];
        char c3 = ln.substr(0,1)[0];
        char c4 = ln.substr(1,2)[0];

        return (int)c1 * (int)c3 / (int)c2 * (int)c4;
}

#endif /* KeyGen_h */
