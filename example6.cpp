
// STATIC AND DYNAMIC MEMORY ALLOCATION

#include<iostream>
using namespace std;

class Hero {
    int level;

    public:
    char name[100]= "ARSH";
    //getter
    int getLevel() {
        return level;
    }

    void setLevel(int x){
        level = x;
    }
};

int main () {
    // DYNAMIC DECLARATION
    Hero *HeroPtr = new Hero;

    // cout<<(*HeroPtr).name<<endl;
    // cout<<&HeroPtr;
    // delete HeroPtr;

    HeroPtr->setLevel(100);
    cout<<HeroPtr->getLevel();
    delete HeroPtr;

    return 0;
}