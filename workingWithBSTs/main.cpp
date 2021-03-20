// For review purposes only! Does not represent the actual solution!

#include "Dependencies/Dependencies.h"

int main(void)
{
    /* Part 1: primitive types */
    
    BST<int> intTree;
    int intArray[] ={23, 12, 3, 7, 15, 13, 19, 31, 29, 25, 88, 53};
    
    for(int n : intArray)
        intTree.insert(n);
    
    intTree.processNodes(increment<int>);
    intTree.processNodes(print<int>);
    
    
    /* Part 2: user-defined types */
    
    BST<Date> dateTree;
    
    Date dateArray[] =
    {Date(1,2,2012), Date(3,4,2018), Date(5,6,2022), Date(7,8,2029)}; //unbalanced bst
    
    for(Date d : dateArray)
    dateTree.insert(d);
    
    dateTree.processNodes(print<Date>);
    
        return 0;
}
