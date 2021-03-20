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


        /* Part 3: user-defined types + wrapper */

        Wrapper<Person> personWrapper;
        BST<Wrapper<Person> > personTree;

        string fnArray[] =
        {"Elvis","Robert","Ginger","Eddie","Chet","Frank","Jack","Todd","Jimmy"};
        string lnArray[] =
        {"Costello","Plant","Baker","VanHalen","Atkins","Zappa","Bruce","Lundgren","Page"};

        for(int i = 0; i<9; i++)
        {
                int k = personKeyGen(fnArray[i],lnArray[i]);
                Person p (fnArray[i],lnArray[i]);
                personTree.insert(personWrapper.build(k,p));
        }

        personTree.processNodes(show);

        //Wrapper<Person> searchItem ("123",Person("",""));
        //Person result = personTree.search (searchItem).getData();

        return 0;
}
