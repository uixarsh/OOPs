
// DIAMOND PROBLEM...
// for multiple inheritances...

// USE SCOPE RESOLUTION TO Resolve ambguity


#include <iostream>
using namespace std;

class A {
    public:
    int physics;
    int chemistry;    
    A () {
        this->physics = 50;
        this->chemistry = 100;
    }
};

class B {
    public:
    int chemistry;
    B () {
        this->chemistry = 200;
    }
};

class C : public A, public B{
    public: 
    int maths;
    C () {
        this->maths = 23;
    }
};


int main () {
    C obj;
    cout<<obj.maths<<endl;
    cout<<obj.physics<<endl;
    //cout<<obj.chemistry<<endl; // AMBGUITY FOUND HERE;
    cout<<obj.B::chemistry<<endl;  // Using Scope resolution to resolve this problem....
    
    return 0;
}