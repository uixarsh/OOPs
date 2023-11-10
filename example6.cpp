
// STATIC AND DYNAMIC MEMORY ALLOCATION

#include<iostream>
using namespace std;

class Hero {
    int level;

    public:
    char name[100];
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
    int *p = new int;

    // STATIC DECLARATION
    int *p;
    *p = 20;

    cout<<*p;


    return 0;
}