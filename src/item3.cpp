#include "item3.hpp"

item3::Item3::Item3()
{
    const_iterator_behavior();
}

void item3::Item3::const_iterator_behavior()
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

void item3::print(const item3::TextBlock& ctb)
{
    std::cout << "Passing const TextBlock object by reference to const:\n\t";
    for(std::size_t i = 0; i < 3; i++)
    {
        std::cout << ctb[i];
    }
    std::cout << std::endl;
}

void item3::text_block_example()
{
    item3::TextBlock tb("cat");
    const item3::TextBlock ctb("dog");

    std::cout << "Index 0 of the non-const text block: " << tb[0] << std::endl;
    std::cout << "Index 0 of the const text block: " << ctb[0] << std::endl;
    std::cout << "Writing to Index 0 of non-const text block: tb[0] = f" << std::endl;
    tb[0]='f';
    std::cout << "Index 0 of the non-const text block: " << tb[0] << std::endl;
    // ctb[0]='f'; ->compile error since ctb is const (non-modifyable lvalue)

    item3::print(ctb);
}

void item3::run(bool A, bool B)
{
    if(A)
        Item3 item3;
    if(B)
        text_block_example();
}
