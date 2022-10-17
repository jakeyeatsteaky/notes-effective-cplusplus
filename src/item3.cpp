#include "item3.hpp"

Item3::Item3()
{
    const_iterator_behavior();
}

void Item3::const_iterator_behavior()
{
    // Iterators in the STL are modeled off pointers, so they have similar const behavior

    std::vector<int> vect = {5, 6};
    const std::vector<int>::iterator iter = vect.begin(); // The iterator isnt allowed to point to a different location but what it points to can be modified
    std::cout << "The Const Pointer Iterator (iter) initally points to value: \t " << *iter << ", at memory location: " << &iter << std::endl;
    *iter = 10; // This is fine - what this points to can be modified.
    //++iter;                                                // Compile error - no ++ operator on const.
    std::cout << "The Const Pointer Iterator (iter) points to value: \t\t" << *iter << ", at memory location: " << &iter << std::endl;
    std::cout << "\tIn this case, the memory address cannot be changed, and the iterator cannot be incremented, but the data pointed to here is mutable.\n\n";

    std::vector<int> vect2 = {55, 60};
    /* A const_iterator cannot be directly modified, but it can iterate */
    std::vector<int>::const_iterator cIter = vect2.begin(); // Immutable iterator
    std::cout << "The const_iterator (cIter) initally points to value: \t\t " << *cIter << ", at memory location: " << &cIter << std::endl;
    //*cIter = 10;                                            // Read-Only compile error
    ++cIter; // changes cIter
    std::cout << "The const_iterator is incremented.\n";
    std::cout << "The const_iterator (cIter) now points to value: \t\t " << *cIter << ", at memory location: " << &cIter << std::endl;
    std::cout << "\tIncrementation led to the iterator iterating through the list.  It cannot be directly mutable, but can be incremented.\n\n";

}