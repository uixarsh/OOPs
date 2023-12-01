/* POLYMORPHISM
        /\
       /  \
      /    \
     /      \
    /        \
Complie-time  Run-time

// COMPILE-TIME ==>  OPERATOR OVERLOADING
*/

#include <iostream>
using namespace std;

class Param {
    public:
        int val;

    void operator+() {
        
    }
};

int main () {
    Param obj1, obj2;
    obj1.val = 7;
    obj2.val = 2;
    // this should print the difference between them...
    obj1 + obj2; // Compiler don't know anything about "+" so we need to define the functionality of it..


    return 0;
}