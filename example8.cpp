
// CONSTRUCTOR
// 1. Default Constructor : The constructor that automatically gets created and gets initalized during object creation.
// 2. Parameterized Constructor : The constructor that consists input as a parameter for it to be called.
// 3. Copy Constructor :

#include <iostream>
using namespace std;

class Hero {
    int weight;
    int height;

    public: 

    // DEFAULT CONSTUCTOR
    Hero () {
        cout << "This is the default constructor responding....."<< endl;
        this->weight=0;
        this->height=0;
        cout <<"The weight is :"<<weight<<endl;
        cout <<"The height is :"<<height<<endl;
        cout<<endl;
    }

    // PARAMETERIZED CONSTRUCTOR
    Hero (int weight){
        cout <<"This is the First Parameterized constructor responding....."<<endl;
        this->weight = 100;
        cout << "The weight becomes: "<<weight<<endl; 
        cout <<endl;
    }

    Hero (int weight, int height){
        cout << "This is the Second Parameterized constructor responding....." << endl;
        this->weight = 100;
        cout << "The weight becomes : " << weight << endl;
        cout <<"The height becomes :"<< height <<endl;
    }
};

int main () {
    // CALLING DEFAULT CONSTRUCTOR.
            Hero *a = new Hero; 
            //Hero b; // FOR Both Static & Dynamic Memory allocation the default constructor gets called.

    // CALLING PARAMETERIZED CONSTRUCTOR.
            // Hero c(10);
            // Hero d(20,50);
            Hero *e = new Hero(30);
            Hero *f = new Hero(40,60);

    delete a;
    delete e;
    delete f;

    return 0;
}