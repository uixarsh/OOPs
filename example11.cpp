
// ENCAPSULATION

#include <iostream>
using namespace std; 

class Hero {

    public:
        int age;
        int weight;

        void eat () {
            cout<<"Eating"<<endl;
        }

    // HERE WE ARE TRYING TO ACHIEVE ENCAPUSLATION BY WRAPPING UP DATA MEMBERS & MEMBER FUNCTIONS @ CLASS HERO..
};


// FOR 100% ENCAPSULATION...
class Hero2 {
    private:
        int age;
        int weight;
    
    // All the data members are marked private for 100% Encapsulation...
    
    public:
        void eat () {
            cout <<"Eating";
        }

        int getAge () {
            return this->age;
        }

        int getWeight () {
            return this->weight;
        }
};

int main () {


    return 0;
}