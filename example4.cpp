
// USING PUBLIC & PRIVATE FOR DATA MEMBERS ACCESSION

#include <iostream>
using namespace std;

// Declaration of a Class.
class Hero
{
    public:
    int health;

    private:
    char name[100];
};

int main()
{

    // Creating an Object.
    Hero Ramesh;
    cout << "health is:" << Ramesh.health << endl; //health is a public member of class Hero.
    cout << "Name is:"<<Ramesh.name; // name is private member of class Hero.
    // ERROR occured.

    return 0;
}