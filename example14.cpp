
// HIERARCHIAL INHERITANCE

#include <iostream>
using namespace std;

class Car {
    public: 
        int weight, height;
        Car () {
            this->weight = 0;
            this->height = 0;
        }

};

class Fortuner : public Car {

};

class Scorpio : public Car {

};

int main () {
    Scorpio sp;
    cout<<sp.weight<<endl;
    Fortuner fr;
    cout<<fr.weight;
    return 0;
}