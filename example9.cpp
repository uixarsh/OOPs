
// COPY CONSTRUCTOR 

#include <iostream>
using namespace std;


class Hero {
    int age;
    int height;
    int weight;

    public: 

    Hero (Hero b) {

    }
};

int main () {

    Hero a;
    Hero b = a;

    return 0;
}