
// THIS POINTER -> POINTER TO CURRENT OBJECT .....

// HERE IN THIS EXAMPLE WE INITIALLY SET THE WEIGHT TO 100 AND USING SETTER WE ARE UPDATING THE VALUE OF THE WEIGHT 
// YET THE VALUE RETURNED DOESN'T GETS CHANGED AS THERE IS A CATCH AT Function void setWeight(int)
// In order to correct this we need to use THIS Pointer as it is a pointer to current object.

#include <iostream>
using namespace std;

class Hero {
    int weight=100;

    public:

    // void setWeight (int weight){
    //     weight = weight;
    // }

    void setWeight (int weight){
        this->weight = weight; // here, this->weight : refers to the property of class Hero not an element of setWeig(int)
    }

    int getWeight (){
        return weight;
    }

};

int main () {

    Hero *Arsh = new Hero;
    Arsh->setWeight(10);
    cout<<Arsh->getWeight();
    delete Arsh;
    return 0;
}