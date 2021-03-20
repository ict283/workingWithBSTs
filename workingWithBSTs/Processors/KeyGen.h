// For review purposes only! Does not represent the actual solution!

/* global methods */

#ifndef KeyGen_h
#define KeyGen_h

/* header */

int keyArray[20];
int keyCount = 0;

int personKeyGen(string fn, string ln); //balanced tree

/* implementation */

//very simplistic, only a partial solution, needs work.

int personKeyGen (string fn, string ln)
{
        int key;

        if(keyCount==0)
        {
                char c1 = fn.substr(0,1)[0];
                char c2 = ln.substr(0,1)[0];
                key = (int)c1 * (int)c2;
                keyArray[keyCount]=key;
                keyCount++;
                return key;
        }
        else if (keyCount%3==0)
        {
                if((keyCount)%6==0)
                {
                        key=keyArray[keyCount-2]+(50*keyCount);
                        keyArray[keyCount]=key;
                        keyCount++;
                }
                else
                {
                        key=keyArray[keyCount-2]-(50*keyCount);
                        keyArray[keyCount]=key;
                        keyCount++;
                }
                return key;
        }
        else
        {
                if(keyCount%3==1)
                {
                        key=keyArray[keyCount-1]-20;
                        keyArray[keyCount]=key;
                        keyCount++;
                }
                else //keyCount%3>1
                {
                        key=keyArray[keyCount-2]+20;
                        keyArray[keyCount]=key;
                        keyCount++;
                }
                return key;
        }
}

#endif /* KeyGen_h */
