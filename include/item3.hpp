#pragma once

#include <iostream>
#include <vector>

namespace item3
{
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

        Additionally, member functions which differ only in "constness" can also be overloaded.  This is demonstrated using two classes of a TextBlock
*/
    class TextBlock
    {
        public:
            TextBlock(std::string text){m_text = text;}
            const char& operator[](std::size_t position) const {return m_text[position];} // essentially a read only text block
                                                                                          // Declaraction of const Member Function comes between parameters and body of fn
                                                                                          // i.e. This const member function operator returns a const reference to char
            char& operator[](std::size_t position) {return m_text[position];}             // read or write text block

            // The const [] operator would most likely be used in a const object situation: pass by reference to const, as demonstrated in the print function:
            void print(const TextBlock& ctb);
        
        private:
            std::string m_text;
    };

    void text_block_example();
    void print(const TextBlock& ctb);


/*
    BLUF: Use const whenever possible.  
*/

    void run(bool A, bool B);

}

