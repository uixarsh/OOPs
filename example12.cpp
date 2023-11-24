
// INHERITANCE

#include <iostream>
using namespace std;

class Parent {

    public:
        int age, weight;
        
        void eat () {
            cout <<"EATING";
        }

};

class Child : protected Parent {
    
    public:
    void eat () {
        this->eat();
    }

};


int main () {

    Child c1;
    c1.eat(); 

    return 0;
}