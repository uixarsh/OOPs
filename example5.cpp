
// USING GETTER & SETTER FOR ACCESSING DATA MEMBER.

#include <iostream>
using namespace std;

class Hero {
    private:
    int Health;
    
    public:
    char name;

    // GETTER 
    int getHealth () {
        return Health;
    }

    // SETTER
    void setHealth (int x){
        Health = x;
    }
    

    // Getter & Setter must come under public category.
};

int main () {

    Hero Ramam;
    // Using getter to access data member.
    cout<<Ramam.getHealth()<<endl;
    
    // Updating Health value using Setter.
    Ramam.setHealth(20);
    cout<<Ramam.getHealth()<<endl;

    int x = Ramam.health; // we can't access health directly as it is private member of Hero.

    return 0;
}