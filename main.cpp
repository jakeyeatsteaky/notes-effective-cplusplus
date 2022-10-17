#include "item3.hpp"

/*--------------------------------------------------------------------------

Effective C++ - Scott Meyers

---------------------------------------------------------------------------*/

/*Item 1:
{
    C++ is more a federation of 4 programming languages, than one language: C style, object oriented, STL, Template C++
    BLUF: C++ has rules based on the way its being used.  The rules are governed by the 4 prog language types
}*/

/*Item 2:
{
    Prefer to have the compiler "see" your global variables.  Use "const" over #define.  When referring to a const variable which will only ever have 1 copy, preface it with static:
    i.e.
        const std::string name("Jake Baker");
        static const int num = 5; (constant declaration which will only ever have 1 copy)

    The "enum hack" is used when the compiler requires you to define the value of a class constant during the compilation of the class.  This can be used because the values of Enumerated Types can be used when ints are expected:
    i.e.
        class GamePlayer
        {
            private:
                enum{NumTurns = 5};

                int scores[NumTurns];	// scores array initialized at size 5
        }
    In the case in which you'd use a function macro, prefer to use an inline function.  And inline function is one in which the compiler copies code from the function definition directiohn in the code of the calling function raher than creating a separate set of instructions in memory.  It eliminates call linkage overhead and can further optimize.

    BLUF: The preproccessor is useful for things like #include, #ifdef/#ifndef, however with the availability of consts, inlines and enums, its usage can be reduced.  Bascially just avoid using #define
}*/

int main()
{
    // Item 3 is regarding the usage of const with iterators, and in member functions.
    Item3 item3;    
}