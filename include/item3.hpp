#pragma once

#include <iostream>
#include <vector>

/*
    Item 3A - Using Const with Iterators:
        Use const whenever possible to allow the compiler to assert things for you automatically.  For pointers specifically you can specify whether the data being pointed to is const, or the pointer itself must remain const
*/

struct Item3
{
    Item3();
    ~Item3(){};
    void const_iterator_behavior();
};

/*
    Item 3B - Const Member Functions:
        Using const member functions specifies which member functions can be used on const objects.  This is useful because it lets the developer know which functions can modify an object, and which cannot.  This will also be vital in the pass-by-reference-to-const paradigm.

        Additionally, member functions which differ only in "constness" can also be overloaded.  
*/

