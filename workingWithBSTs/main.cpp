// For review purposes only! Does not represent the actual solution!

#include "Dependencies/Dependencies.h"

int main(void)
{
    /* Part 1: primitive types */

    BST<int> intTree;
    int intArray[] ={23, 12, 3, 7, 15, 13, 19, 31, 29, 25, 88, 53};

    for(int n : intArray)
        intTree.insert(n);

    intTree.processNodes(increment);
    intTree.processNodes(print);
        
        return 0;
}
