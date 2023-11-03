
// ACCESSING A DATA MEMBER.....

// ACCESSING IMPLICITLY DECLARED MEMBER OF CLASS.

#include <iostream>
using namespace std;

// Declaration of a Class.
class Hero
{
    int health;
    char name[100];
};

int main()
{

    // Creating an Object.
    Hero Ramesh;
    cout <<"health is:" << Ramesh.health<<end;
    
    // ERROR occured.

    return 0;
}